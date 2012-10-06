;;; copyright (c) 2010-2012 Polos Ruetz

(in-package :eql)

(defvar *break-on-errors* nil "Unless NIL, causes a simple (BREAK) on any EQL error.")
(defvar *slime-mode*      nil)

(defmacro alias (s1 s2)
  `(setf (symbol-function ',s1) (function ,s2)))

(defmacro qlet ((&rest pairs) &body body)
  "args: (((var exp) ...) ...)
   Similar to <code>let*</code>. Creates temporary Qt objects, deleting them at the end of the <code>qlet</code> body. If <code>exp</code> is a string, it will be substituted with <code>(qnew exp)</code>, optionally including constructor arguments.
       (qlet ((painter \"QPainter\")) ...)
       (qlet ((reg-exp \"QRegExp(QString)\" \"^\\\\S+$\")) ...)"
  (let ((vars (mapcar (lambda (x) (if (consp x) (first x) x)) pairs))
        (exps (mapcar (lambda (x)
                        (if (consp x)
                            (let ((exp (rest x)))
                              (if (stringp (first exp))
                                  (apply 'list 'qnew exp)
                                  (first exp)))
                            nil))
                      pairs)))
    `(let* ,(mapcar 'list vars exps)
       (unwind-protect
            (progn
              ,@body)
         ,(if (second vars)
              `(progn . ,(mapcar (lambda (var) (list 'qdelete var))
                                 (nreverse vars)))
              `(qdelete ,(first vars)))))))

(defmacro qinvoke-methods (object &rest functions)
  "args: (object &rest functions)
   alias: qfuns
   A simple syntax for nested <code>qfun</code> calls.
       (qfuns object \"funA\" \"funB\" \"funC\")      ; expands to: (qfun (qfun (qfun object \"funA\") \"funB\") \"funC\")
       (qfuns object (\"funA\" 1) (\"funB\" a b c)) ; expands to: (qfun (qfun object \"funA\" 1) \"funB\" a b c)
       (qfuns \"QApplication\" \"font\" \"family\")"
  (let (form)
    (dolist (fun functions)
      (setf form (append (list 'qfun (or form object)) (x:ensure-list fun))))
    form))

(defmacro qfuns (object &rest functions)
  `(qinvoke-methods ,object ,@functions))

(defmacro defvar-ui (main &rest names)
  "args: (main-widget &rest variables)
   This macro simplifies the definition of UI variables:
       (defvar-ui *main* *line-edit* ...) ; this will expand to:
       (progn (defvar *line-edit* (qfind-child *main* \"line_edit\")) ...)"
  `(progn
     ,@(mapcar (lambda (name)
                 `(defvar ,name (qfind-child ,main ,(string-downcase (substitute #\_ #\- (string-trim "*" (symbol-name name)))))))
               names)))

(defun %get-function (fn pkg)
  (typecase fn
    (symbol
     fn)
    (function
     (let ((var (intern (symbol-name (gensym)) pkg)))
       (setf (symbol-function var) fn)
       var))))

(defun %make-vector ()
  (make-array 0 :adjustable t :fill-pointer t))

(defun %break (&rest args)
  (apply 'break args))

(let (home)
  (defun set-home (path)
    (setf home path))
  (defun in-home (file)
    (concatenate 'string home file)))

;;; top-level / slime-mode processing Qt events (command line options "-qtpl" and "-slime")

(defvar *top-level-form*  nil)
(defvar *top-level-lock*  #+threads (mp:make-lock :name 'top-level))
(defvar *slime-values*    nil)
(defvar *slime-package*   (find-package :eql-user))
(defvar *slime-evaluated* nil)
(defvar *slime-hook-file* nil)
           
#+threads
(let (hook-loaded-p timer)
  (defun eval-top-level ()
    (unless timer
      (setf timer (qnew "QTimer" "interval" 200 "singleShot" t))
      (qconnect timer "timeout()" 'eval-top-level))
    (when (and *slime-mode*
               (not hook-loaded-p)
               (find-package :swank)
               (find-symbol "*SLIME-REPL-EVAL-HOOKS*" :swank))
      (setf hook-loaded-p t)
      (load (or *slime-hook-file* (in-home "slime/repl-hook"))))
    (when *top-level-form*
      (if *slime-mode*
          (let ((values (multiple-value-list
                          (with-simple-restart (abort "Return to SLIME's top level.")
                            (eval *top-level-form*)))))
            (finish-output)
            (mp:with-lock (*top-level-lock*)
              (setf *top-level-form*  nil
                    *slime-values*    values
                    *slime-package*   *package*
                    *slime-evaluated* t)))
          (progn
            (mp:with-lock (*top-level-lock*)
              (si::feed-top-level))
            (finish-output)
            (qsingle-shot 0 'start-read-thread))))
    (qfun timer "start")))

#+threads
(defun %read-thread ()
  (si::tpl-prompt)
  (unless (find-package :ecl-readline)
    (princ "> "))
  (let ((form (si::tpl-read)))
    (mp:with-lock (*top-level-lock*)
      (setf *top-level-form* form)))
  (values))

(defun start-read-thread ()
  #+threads
  (mp:process-run-function :read '%read-thread)
  #-threads
  (error "ECL threads not enabled, can't process Qt events."))

(defmacro qeval (&rest forms)
  ;; this macro will be redefined in Slime mode (see "../../slime/repl-hook.lisp")
  "args: (&rest forms)
   Slime mode only: evaluate forms in GUI thread. Defaults to a simple <code>progn</code> outside of Slime."
  (if (second forms)
      (cons 'progn forms)
      (first forms)))

;;; qt-object

(defstruct (qt-object (:constructor qt-object (pointer unique id &optional finalize)))
  (pointer  0   :type integer)
  (unique   0   :type integer)
  (id       0   :type fixnum)
  (finalize nil :type boolean))

(defun new-qt-object (pointer unique id finalize)
  (let ((obj (qt-object pointer unique id finalize)))
    (when finalize
      (ext:set-finalizer obj 'qdelete))
    obj))

(defmethod print-object ((obj qt-object) s)
  (print-unreadable-object (obj s :type nil :identity nil)
    (format s "~A 0x~X~A"
            (qt-object-name obj)
            (qt-object-pointer obj)
            (if (qt-object-finalize obj) " GC" ""))))

(defmacro tr (src &optional con (n -1))
  "args: (source &optional context plural-number)
   Macro expanding to <code>qtranslate</code>, which calls <code>QCoreApplication::translate()</code>. Both <code>source</code> and <code>context</code> can be Lisp forms evaluating to constant strings (at compile time).<br>The <code>context</code> argument defaults to the Lisp file name. For the <code>plural-number</code>, see Qt Assistant."
  ;; see compiler-macro in my_app/tr.lisp
  (let ((source (ignore-errors (eval src)))
        (context (ignore-errors (eval con))))
    `(eql:qtranslate ,(if (stringp context)
                          context
                          (if *compile-file-truename* (file-namestring *compile-file-truename*) ""))
                     ,source
                     ,n)))

(defun qset-null (obj)
  "args: (object)
   Sets the Qt object pointer to <code>0</code>. This function is called automatically after <code>qdel</code>."
  (let ((obj* (ensure-qt-object obj)))
    (when (qt-object-p obj*)
      (setf (qt-object-pointer obj*) 0))))

(defun qgui (&optional ev)
  "args: (&optional process-events)
   Launches the <code>EQL</code> convenience GUI.<br>If you don't have an interactive environment, you can pass <code>T</code> to run a pseudo Qt event loop. A better option is to start the tool like so:<br><code>eql -qgui</code>, in order to run the Qt event loop natively."
  (in-package :eql-user)
  (load (in-home "gui/gui"))
  (when ev
    (loop
      (qprocess-events)
      (sleep 0.05))))

(defun qeql (obj1 obj2)
  "args: (object1 object2)
   Returns <code>T</code> for same instances of a Qt class.<br>To test for same Qt classes only, do:
       (= (qt-object-id object1) (qt-object-id object2))"
  (let ((obj1* (ensure-qt-object obj1))
        (obj2* (ensure-qt-object obj2)))
    (and (qt-object-p obj1*)
         (qt-object-p obj2*)
         (= (qt-object-id obj1*)
            (qt-object-id obj2*))
         (= (qt-object-pointer obj1*)
            (qt-object-pointer obj2*)))))

(defun qnull-object (obj)
  "args: (object)
   Checks for a <code>0</code> Qt object pointer."
  (let ((obj* (ensure-qt-object obj)))
    (when (qt-object-p obj*)
      (zerop (qt-object-pointer obj*)))))

(defun qdelete (obj &optional later)
  (%qdelete obj later))

(defun qapropos (&optional name class type)
  (let ((main (%qapropos name class type)))
    (dolist (sub1 main)
      (format t "~%~%~A~%" (first sub1))
      (dolist (sub2 (rest sub1))
        (format t "~%  ~A~%~%" (first sub2))
        (dolist (sub3 (rest sub2))
          (let* ((par (position #\( sub3))
                 (x (if par
                        (position #\Space sub3 :end par :from-end t)
                        (position #\Space sub3))))
            (format t "    ~A~A~%" (make-string (max 0 (- 15 x))) sub3))))))
  (terpri)
  nil)

(defun qapropos* (&optional name class type)
  "args: (&optional search-string class-name)
   Similar to <code>qapropos</code>, returning the results as nested list."
  (%qapropos name class type))

(defun qnew-instance (name &rest args)
  (%qnew-instance name args))

(defun qinvoke-method (object function-name &rest arguments)
  (%qinvoke-method object nil function-name arguments))

(defun qinvoke-method* (object cast-class-name function-name &rest arguments)
  "args: (object cast-class-name function-name &rest arguments)
   alias: qfun*
   Similar to <code>qinvoke-method</code>, additionally passing a class name, enforcing a cast to that class.
       (qfun* event \"QKeyEvent\" \"key\")
       (qfun* graphics-text-item \"QGraphicsItem\" \"setPos\" (list x y)) ; multiple inheritance problem
       (qfun* *qt-main* :qt \"foo\") ; embedded Qt/C++ (see Qt_EQL)"
  (%qinvoke-method object cast-class-name function-name arguments))

(defun qconnect (from signal to &optional slot)
  (%qconnect from signal to slot))

(defun qdisconnect (from &optional signal to slot)
  (%qdisconnect from signal to slot))

(defun qobject-names (&optional type)
  (%qobject-names type))

(defun qui-class (file &optional var)
  (%qui-class file var))

(defun qmessage-box (x)
  "args: (x)
   alias: qmsg
   Convenience function: a simple message box, converting x to a string if necessary."
  (qlet ((msg "QMessageBox"
              "icon" |QMessageBox.Information|
              "text" (if (stringp x) x (prin1-to-string x))))
    (dolist (fun '("show" "raise" "exec")) ; "raise" needed in some situations
      (qfun msg fun))))

(defun qexec (&optional ms)
  (%qexec ms))

(defun qfind-children (object &optional object-name class-name)
  (%qfind-children object object-name class-name))

(let (loaded)
  (defun qselect (&optional on-selected)
    "args: ()
     alias: qsel
     Allows to select (by clicking) any (child) widget. The variable <code>qsel:*q*</code> is set to the latest selected widget."
    (unless loaded
      (setf loaded t)
      (load (in-home "src/lisp/qselect")))
    (%qselect on-selected)))

(let (loaded)
  (defun quic (&optional (ui.h "ui.h") (ui.lisp "ui.lisp"))
    "args: (&optional (file.h \"ui.h\") (file.lisp \"ui.lisp\"))
     Takes C++ code from a file generated by the <code>uic</code> user interface compiler, and generates the corresponding EQL code.<br>See also command line option <code>-quic</code>."
    (unless loaded
      (setf loaded t)
      (load (in-home "src/lisp/quic")))
    (funcall (intern "RUN" :quic) ui.h ui.lisp)))

(defun qrequire (module &optional quiet)
  (%qrequire module quiet))

(defun qload-c++ (library-name &optional unload copy) ; "copy": for internal use only (see QAUTO-RELOAD-C++)
  (%qload-c++ library-name unload copy))

(defun %ini-auto-reload (library-name var-file-name watcher on-file-change)
  (multiple-value-bind (object file-name)
      (qload-c++ library-name nil :copy)
    (when file-name
      (setf (symbol-value var-file-name) file-name)
      (qfun watcher "addPath" file-name)
      (qconnect watcher "fileChanged(QString)" on-file-change))
    object))

(defmacro qauto-reload-c++ (variable library-name)
  "args: (variable library-name)
   Similar to <code>qload-c++</code> (see <code>Qt_EQL_dynamic/</code>).<br>Defines a global variable (see return value of <code>qload-c++</code>), which will be updated on every change of the C++ library.<br>This allows for a dynamic workflow for your Qt/C++ plugins: after e.g. recompiling of C++, the library will automatically be reloaded, and the <code>variable</code> will be set to its new value.<br>If you want to be notified on a library change, set <code>*&lt;variable&gt;-reloaded*</code>, which will be called after reloading, passing both the variable name and the library name (it might be called twice: on removal of old and creation of new file).<br>See <code>qload-c++</code> for an example how to call library functions.
       (qauto-reload-c++ *c++* \"eql_cpp\")
       (setf *c++-reloaded* (lambda (var lib) (qapropos nil (symbol-value var)))) ; optional: set a notifier"
  (let* ((name      (string-trim "*" (symbol-name variable)))
         (file-name (intern (format nil "*~A-FILE-NAME*" name)))
         (watcher   (intern (format nil "*~A-WATCHER*" name)))
         (reloaded  (intern (format nil "*~A-RELOADED*" name))))
    `(progn
       (defvar ,file-name)
       (defvar ,watcher  (qnew "QFileSystemWatcher"))
       (defvar ,variable (%ini-auto-reload ,library-name ',file-name ,watcher
                                           (lambda (name)
                                             ;; We get here because of substitution or removal of old library version.
                                             ;; Recompilation of library means temporary removal, so we need to wait
                                             ;; until creation of new version.
                                             (dotimes (i 50) ; max. 10 seconds
                                               (sleep 0.2)
                                               (qprocess-events)
                                               (when (probe-file ,file-name)
                                                 (return)))
                                             (setf ,variable (qload-c++ ,library-name nil :copy))
                                             (when ,reloaded
                                               (funcall ,reloaded ',variable ,library-name))
                                             (unless (qfun ,watcher "files")
                                               (qfun ,watcher "addPath" ,file-name)))))
       (defvar ,reloaded nil))))

(defun qquit (&optional (exit-status 0) (kill-all-threads t))
  "args: (&optional (exit-status 0) (kill-all-threads t))
   alias: qq
   Terminates EQL, passing the given arguments to the ECL function <code>ext:quit</code>."
  (assert (typep exit-status 'fixnum))
  (qprocess-events)
  (qfun (qapp) "aboutToQuit")
  (qdisconnect (qapp) "aboutToQuit()")
  ;; EXT:QUIT hangs in EQL (doesn't happen in pure ECL)
  (qsingle-shot 100 (lambda () (ffi:c-inline (exit-status) (:int) :void "exit(#0)" :one-liner t :side-effects t)))
  (ext:quit exit-status kill-all-threads))

;; simplify using CLOS; see example "X-extras/CLOS-encapsulation.lisp"

(defgeneric the-qt-object (object)
  (:documentation "Return the QT-OBJECT to be used whenever OBJECT is used as argument to any EQL function."))

(defun ensure-qt-object (object)
  "args: (object)
   Returns the <code>qt-object</code> of the given class/struct/qt-object (see example <code>X-extras/CLOS-encapsulation.lisp</code>).<br>This function is used internally whenever a <code>qt-object</code> argument is expected.
       (print (ensure-qt-object object))"
  (cond ((null object) ; e.g. passing NIL as parent widget: (qnew "QWidget(QWidget*)" nil)
         nil)
        ((qt-object-p object)
         object)
        ((let ((object* (the-qt-object object)))
           (if (qt-object-p object*)
               object*
               (error "THE-QT-OBJECT returned ~S for class ~A, which is not of required type QT-OBJECT." object* object))))))

(alias qnew  qnew-instance)
(alias qdel  qdelete)
(alias qget  qproperty)
(alias qset  qset-property)
(alias qfun  qinvoke-method)
(alias qfun* qinvoke-method*)
(alias qmsg  qmessage-box)
(alias qsel  qselect)
(alias qq    qquit)

;; add property :function-lambda-list to plist of EQL functions (inspired by ext:function-lambda-list)

(dolist (el (list (cons 'defvar-ui            '(main-widget &rest variables))
                  (cons 'ensure-qt-object     '(object))
                  (cons 'in-home              '(file-name))
                  (cons 'qadd-event-filter    '(object event function))
                  (cons 'qapropos             '(&optional search-string class-name))
                  (cons 'qapropos*            '(&optional search-string class-name))
                  (cons 'qauto-reload-c++     '(variable library-name))
                  (cons 'qconnect             '(caller signal receiver/function &optional slot))
                  (cons 'qcopy                '(object))
                  (cons 'qdelete              '(object))
                  (cons 'qdel                 '(object))
                  (cons 'qdisconnect          '(caller &optional signal receiver/function slot))
                  (cons 'qeql                 '(object1 object2))
                  (cons 'qescape              '(string))
                  (cons 'qexec                '(&optional milliseconds))
                  (cons 'qfind-child          '(object object-name))
                  (cons 'qfind-children       '(object &optional object-name class-name))
                  (cons 'qfrom-utf8           '(byte-array))
                  (cons 'qfun                 '(object function-name &rest arguments))
                  (cons 'qfun*                '(object cast-class-name function-name &rest arguments))
                  (cons 'qfuns                '(object &rest functions))
                  (cons 'qget                 '(object name))
                  (cons 'qgui                 '(&optional process-events))
                  (cons 'qid                  '(class-name))
                  (cons 'qinvoke-method       '(object function-name &rest arguments))
                  (cons 'qinvoke-method*      '(object cast-class-name function-name &rest arguments))
                  (cons 'qinvoke-methods      '(object &rest functions))
                  (cons 'qload-c++            '(library-name &optional unload))
                  (cons 'qload-ui             '(file-name))
                  (cons 'qlocal8bit           '(string))
                  (cons 'qmessage-box         '(x))
                  (cons 'qmsg                 '(x))
                  (cons 'qnew                 '(class-name &rest arguments/properties))
                  (cons 'qnew-instance        '(class-name &rest arguments/properties))
                  (cons 'qnull-object         '(object))
                  (cons 'qobject-names        '(&optional type))
                  (cons 'qoverride            '(object name function))
                  (cons 'qproperty            '(object name))
                  (cons 'qremove-event-filter '(id))
                  (cons 'qrequire             '(module &optional quiet))
                  (cons 'qset-null            '(object))
                  (cons 'qset                 '(object name value))
                  (cons 'qset-property        '(object name value))
                  (cons 'qsingle-shot         '(milliseconds function))
                  (cons 'qstatic-meta-object  '(class-name))
                  (cons 'qsuper-class-name    '(class-name))
                  (cons 'qt-object-id         '(object))
                  (cons 'qt-object-name       '(object))
                  (cons 'qt-object-p          '(object))
                  (cons 'qt-object-pointer    '(object))
                  (cons 'qt-object-unique     '(object))
                  (cons 'quic                 '(&optional (file.h "ui.h") (file.lisp "ui.lisp")))
                  (cons 'qui-class            '(file-name &optional object-name))
                  (cons 'qui-names            '(file-name))
                  (cons 'qutf8                '(string))
                  (cons 'tr                   '(source &optional context plural-number))))
  (setf (get (car el) :function-lambda-list) (cdr el)))

;;; The following are modified/simplified functions taken from "src/lsp/top.lsp" (see ECL sources)

(in-package :si)

(defun feed-top-level ()
  (catch *quit-tag*
    (let ((*debugger-hook* nil)
          (*tpl-level* -1))
      (%tpl))))

(defun %tpl (&key ((:commands *tpl-commands*) tpl-commands)
                 ((:prompt-hook *tpl-prompt-hook*) *tpl-prompt-hook*)
                 (broken-at nil)
                 (quiet nil))
  #-ecl-min
  (declare (c::policy-debug-ihs-frame))
  (let* ((*ihs-base* *ihs-top*)
         (*ihs-top* (if broken-at (ihs-search t broken-at) (ihs-top)))
         (*ihs-current* (if broken-at (ihs-prev *ihs-top*) *ihs-top*))
         (*frs-base* (or (sch-frs-base *frs-top* *ihs-base*) (1+ (frs-top))))
         (*frs-top* (frs-top))
         (*quit-tags* (cons *quit-tag* *quit-tags*))
         (*quit-tag* *quit-tags*)       ; any unique new value
         (*tpl-level* (1+ *tpl-level*))
         (break-level *break-level*)
         values -)
    (set-break-env)
    (set-current-ihs)
    (flet ((rep ()
             ;; We let warnings pass by this way "warn" does the
             ;; work.  It is conventional not to trap anything
             ;; that is not a SERIOUS-CONDITION. Otherwise we
             ;; would be interferring the behavior of code that relies
             ;; on conditions for communication (for instance our compiler)
             ;; and which expect nothing to happen by default.
             (handler-bind 
                 ((serious-condition
                   (lambda (condition)
                     (cond ((< break-level 1)
                            ;; Toplevel should enter the debugger on any condition.
                            )
                           (*allow-recursive-debug*
                            ;; We are told to let the debugger handle this.
                            )
                           (t
                            (format t "~&Debugger received error of type: ~A~%~A~%~
                                         Error flushed.~%"
                                    (type-of condition) condition)
                            (clear-input)
                            (return-from rep t) ;; go back into the debugger loop.
                            )
                           )
                     )))
               
               (with-grabbed-console
                   (unless quiet
                     (break-where)
                     (setf quiet t))
                 (if eql::*top-level-form*
                     (setq - eql::*top-level-form*
                           eql::*top-level-form* nil)
                     (setq - (locally (declare (notinline tpl-read))
                               (tpl-prompt)
                               (tpl-read))))
                 (setq values (multiple-value-list
                               (eval-with-env - *break-env*))
                       /// // // / / values *** ** ** * * (car /) +++ ++ ++ + + -)
                 (tpl-print values)))))
      (when
          (catch *quit-tag*
            (if (zerop break-level)
                (with-simple-restart 
                    (restart-toplevel "Go back to Top-Level REPL.")
                  (rep))
                (with-simple-restart
                    (restart-debugger "Go back to debugger level ~D." break-level)
                  (rep)))
            nil)
        (setf quiet nil)))))
