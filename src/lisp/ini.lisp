;;; copyright (c) 2010 power4projects software

(in-package :eql)

(defmacro alias (s1 s2)
  `(setf (symbol-function ',s1) (function ,s2)))

(defmacro with- (exp &rest args)
  (let ((args* (loop for i from 1 to (length args) collect (gensym))))
    `(mapc (lambda ,args* ,(append exp args*))
           ,@args)))

(defmacro qlet ((&rest pairs) &body body)
  "args: (((var exp) ...) ...)
   Similar to <code>let*</code>. Creates temporary Qt objects, deleting them at the end of the <code>qlet</code> body. If <code>exp</code> is a string, it will be substituted with <code>(qnew exp)</code>.
       (qlet ((p \"QPainter\")) ...)"
  (let ((vars (mapcar #'first pairs))
        (exps (mapcar #'(lambda (x)
                          (let ((exp (second x)))
                            (if (stringp exp)
                                (list 'qnew exp)
                                exp)))
                      pairs)))
    `(let* ,(mapcar #'list vars exps)
       ,@body
       ,(if (second vars)
            `(dolist (x (list ,@(nreverse vars)))
               (qdel x))
            `(qdel ,(first vars))))))

(defmacro qenum (name key) ; simpler than #.
  (qenum2 name key))

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

(defstruct (qt-object (:constructor qt-object (pointer unique id)))
  (pointer 0 :type integer)
  (unique 0 :type integer)
  (id 0 :type fixnum))

(defmethod print-object ((obj qt-object) s)
  (print-unreadable-object (obj s :type nil :identity nil)
    (format s "~a 0x~x"
            (qt-object-name obj)
            (qt-object-pointer obj))))

(defun qset-null (obj)
  "args: (object)
   Sets the Qt object pointer to <code>0</code>. This function is called automatically after <code>qdel</code>."
  (when (qt-object-p obj)
    (setf (qt-object-pointer obj) 0)))

(let (home)
  (defun set-home (path)
    (setf home path))
  (defun in-home (file)
    (concatenate 'string home file)))

(defun qgui (&optional ev)
  "args: (&optional process-events)
   Launches the <code>EQL</code> convenience GUI.<br>If you don't have an interactive environment, you can pass <code>T</code> to run a pseudo Qt event loop. A better option is to start the tool like so:<br><code>./eql -qgui</code>, in order to run the Qt event loop natively."
  (in-package :eql)
  (load (in-home "gui/gui"))
  (when ev
    (loop
       (qprocess-events)
       (sleep 0.05))))

(defun qeql (obj1 obj2)
  "args: (object1 object2)
   Returns <code>T</code> for same instances of a Qt class."
  (and (qt-object-p obj1)
       (qt-object-p obj2)
       (= (qt-object-pointer obj1)
          (qt-object-pointer obj2))))

(defun qnull-object (obj)
  "args: (object)
   Checks for a <code>0</code> Qt object pointer."
  (when (qt-object-p obj)
    (zerop (qt-object-pointer obj))))

(defun qapropos (&optional name class type)
  (let ((main (qapropos2 name class type)))
    (dolist (sub1 main)
      (format t "~%~%~a~%" (first sub1))
      (dolist (sub2 (rest sub1))
        (format t "~%  ~a~%~%" (first sub2))
        (dolist (sub3 (rest sub2))
          (format t "    ~a~%" sub3))))
    (terpri)))

(defun qapropos* (&optional name class type)
  "args: (&optional search class)
   Similar to <code>qapropos</code>, returning the results as nested list."
  (qapropos2 name class type))

(defun qnew-instance (name &rest args)
  (qnew-instance2 name args))

(defun qinvoke-method (obj slot &rest args)
  (qinvoke-method2 obj nil slot args))

(defun qinvoke-method* (obj name slot &rest args)
  "args: (object class name &rest arguments)
   alias: qfun*
   Similar to <code>qinvoke-method</code>, additionally passing a class name, enforcing a cast to that class.
       (qfun* event \"QKeyEvent\" \"key()\")"
  (qinvoke-method2 obj name slot args))

(defun qconnect (from signal to &optional slot)
  (qconnect2 from signal to slot nil))

(defun qdisconnect (from signal to &optional slot)
  (qconnect2 from signal to slot t))

(defun qobject-names (&optional type)
  (qobject-names2 type))

(defun qmessage-box (msg)
  "args: (message)
   alias: qmsg
   Convenience function, calling:
       (qfun \"QMessageBox\" \"information(QWidget*,QString,QString)\" nil (tr \"Information\") message))"
  (qfun "QMessageBox" "information(QWidget*,QString,QString)" nil (tr "Information") msg))

(defun qevents ()
  (eql:qprocess-events)
  #-win32
  (serve-event:serve-all-events 0.01)
  (sleep 0.01))

(alias qnew  qnew-instance)
(alias qdel  qdelete)
(alias qget  qproperty)
(alias qset  qset-property)
(alias qfun  qinvoke-method)
(alias qfun* qinvoke-method*)
(alias qmsg  qmessage-box)
(alias qq    qquit)

;;; The following is taken from "src/lsp/top.lsp" version 10.4.1
;;; added SERVE-EVENT to TPL-READ, in order to process Qt events
;;; (every modification is annotated with "[EQL]")

(in-package :si)

(defun qtop-level ()
  "Args: ()
ECL specific.
The top-level loop of ECL. It is called by default when ECL is invoked."
  (catch *quit-tag*
    (let* ((*debugger-hook* nil)
           + ++ +++ - * ** *** / // ///)

      (in-package "CL-USER")

      (unless *lisp-initialized*
        (let ((*break-enable* nil))
          ;; process command arguments
          (process-command-args))
        (format t "ECL (Embeddable Common-Lisp) ~A" (lisp-implementation-version))
        (format t "~%Copyright (C) 1984 Taiichi Yuasa and Masami Hagiya~@
Copyright (C) 1993 Giuseppe Attardi~@
Copyright (C) 2000 Juan J. Garcia-Ripoll
ECL is free software, and you are welcome to redistribute it~@
under certain conditions; see file 'Copyright' for details.")
        (format *standard-output* "~%Type :h for Help.  ")
        (setq *lisp-initialized* t))

      (let ((*break-enable* t)
            (*tpl-level* -1))
        (qtpl)) ; [EQL]
      0)))

(defun qtpl (&key ((:commands *tpl-commands*) tpl-commands)
                 ((:prompt-hook *tpl-prompt-hook*) *tpl-prompt-hook*)
                 (broken-at nil)
                 (quiet nil))
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
         values)
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
                            (format t "~&Debugger received error: ~A~%~
                                         Error flushed.~%" condition)
                            (clear-input)
                            (return-from rep t) ;; go back into the debugger loop.
                            )
                           )
                     )))

               (with-grabbed-console
                   (unless quiet
                     (break-where)
                     (setf quiet t))
                 (setq - (locally (declare (notinline qtpl-read)) ; [EQL]
                           (tpl-prompt)
                           (qtpl-read)) ; [EQL]
                       values (multiple-value-list
                               (eval-with-env - *break-env*))
                       /// // // / / values *** ** ** * * (car /))
                 (tpl-print values)))))
          (loop
           (setq +++ ++ ++ + + -)
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
             (setf quiet nil))))))

(defun qtpl-read (&aux (*read-suppress* nil))
  (finish-output)
  #-win32
  (serve-event:with-fd-handler ; [EQL]
      (0 :input #'(lambda (fd) ; [EQL]
                    ;; (loop     [EQL]
                    (case (peek-char nil *standard-input* nil :EOF)
                      ((#\))
                       (warn "Ignoring an unmatched right parenthesis.")
                       (read-char))
                      ((#\space #\tab)
                       (read-char))
                      ((#\newline #\return)
                       (read-char)
                       ;; avoid repeating prompt on successive empty lines:
                       (let ((command (tpl-make-command :newline "")))
                         (when command (return-from qtpl-read command))))
                      (:EOF
                       (terpri)
                       (return-from qtpl-read (tpl-make-command :EOF "")))
                      (#\:
                       (return-from qtpl-read (tpl-make-command (read-preserving-whitespace)
                                                 (read-line))))
                      (#\?
                       (read-char)
                       (case (peek-char nil *standard-input* nil :EOF)
                         ((#\space #\tab #\newline #\return :EOF)
                          (return-from qtpl-read (tpl-make-command :HELP (read-line))))
                         (t
                          (unread-char #\?)
                          (return-from qtpl-read (read-preserving-whitespace)))))
                      ;; We use READ-PRESERVING-WHITESPACE because with READ, if an
                      ;; error happens within the reader, and we perform a ":C" or
                      ;; (CONTINUE), the reader will wait for an inexistent #\Newline.
                      (t
                       (return-from qtpl-read (read))))))
    (loop
       (eql:qevents)))) ; [EQL]
