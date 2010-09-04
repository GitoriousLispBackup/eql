;;; copyright (c) 2010 power4projects software

(load "../src/lisp/util")
(load "qt-modules")
(load "parsed/q-methods")
(load "parsed/n-methods")
(load "parsed/q-override")
(load "parsed/n-override")

(flet ((load-module (name)
         (dolist (qn (list #\q #\n))
           (load (format nil "my-class-lists/~a/~c-names" name qn)))))
  (dolist (m (cons "gui" *qt-modules*))
    (load-module m)))

(use-package :util)

(defconstant +message-generated+ "// THIS FILE IS GENERATED (see helper/)")
(defconstant +max-arguments+     50)
(defconstant +var-names+         (loop for i from 1 to +max-arguments+ collect (format nil "x~d" i)))

(defparameter *max-constructor-args*      0)
(defparameter *max-method-args*           0)
(defparameter *missing-types*             0)
(defparameter *argument-types*            (make-hash-table :test #'equal))
(defparameter *override-signatures*       (make-hash-table :test #'equal))
(defparameter *override-id*               0)
(defparameter *override-functions*        nil)
(defparameter *override-arguments*        nil)
(defparameter *override-return-arguments* nil)
(defparameter *override-signature-ids*    nil)

(defun trim (s)
  (string-trim " " s))

(defun no-spaces (s)
  (remove #\Space s))

(defun find* (x lst &optional (key #'identity))
  (find x lst :test #'string= :key key))

(defun split-args (args)
  (let ((s (copy-seq args))
        (sep #\@)
        skip)
    (dotimes (i (length s))
      (let ((ch (char s i)))
        (case ch
          (#\< (setf skip t))
          (#\> (setf skip nil))
          (#\, (unless skip
                 (setf (char s i) sep))))))
    (mapcar #'split-arg (split s sep))))

(defun add-to-types (type)
  (unless (empty-string type)
    (let ((enum (find #\: type)))
      (when (or (and (starts-with "Q" type)
                     (not enum))
                (starts-with "GL" type)
                (not (or (string= "void" type)
                         enum
                         (upper-case-p (char type 0))
                         (search "QHash" type :test #'string=))))
        (setf (gethash type *argument-types*) t)))))

(defun split-arg (arg)
  (let* ((s (no-spaces arg))
         (const (starts-with "const" s))
         (default (when-it (position #\= s)
                           (prog1
                               (subseq s (1+ it))
                             (setf s (subseq s 0 it)))))
         (ref (ends-with "&" s))
         (ptr (ends-with "*" s))
         (type (subseq s (if const 5 0) (when (or ref ptr)
                                          (1- (length s))))))
    (when (starts-with "unsigned" type)
      (setf type (format nil "u~a" (subseq type 8))))
    (let ((arg* (list type)))
      (add-to-types type)
      (cond (ref (push :ref arg*))
            (ptr (push :ptr arg*)))
      (when const
        (push :const arg*))
      (when default
        (push :default arg*)
        (push default arg*))
      (nreverse arg*))))

(defun split-fun (fun class)
  (macrolet ((append-if (cond val)
               `(when ,cond
                  (setf fun-list (append fun-list (list ,val))))))
    (let* ((fun* fun)
           (pure (when (ends-with " = 0" fun)
                   (setf fun* (trim (subseq fun 0 (- (length fun) 4))))))
           (p2 (position #\( fun*))
           (p3 (when p2
                 (position #\) fun* :from-end t)))
           (p1 (position #\Space fun* :from-end t :end (if p2 (- p2 2) (length fun*))))
           (name (trim (subseq fun* p1 p2)))
           (ret (no-spaces (subseq fun* 0 p1)))
           (new       (when (starts-with "new" ret)
                        (setf ret (subseq ret 3))))
           (protected (when (starts-with "protected" ret)
                        (setf ret (subseq ret 9))))
           (static    (when (starts-with "static" ret)
                        (setf ret (subseq ret 6))))
           (virtual   (when (starts-with "virtual" ret)
                        (setf ret (subseq ret 7))))
           (ret-const (starts-with "const" ret))
           (ret-ptr (ends-with "*" ret))
           (ret-ref (ends-with "&" ret))
           (args (when p2
                   (trim (subseq fun* (1+ p2) p3))))
           (type (subseq ret (if ret-const 5 0) (when (or ret-ptr ret-ref)
                                                  (1- (length ret))))))
      (add-to-types type)
      (let ((ret-list (list type)))
        (when ret-ptr
          (push :ptr ret-list))
        (when ret-const
          (push (if ret-ref :ref :const) ret-list))
        (let ((fun-list (list (nreverse ret-list) name (split-args args))))
          (append-if (not p2) :value)
          (append-if (ends-with "const" fun*) :const)
          (append-if new :constructor)
          (append-if protected :protected)
          (append-if static :static)
          (append-if pure (cons :pure class))
          (append-if virtual :virtual)
          fun-list)))))

(defun split-class (class)
  (let* ((p1 (position #\( class))
         (no-new (starts-with "//" class))
         (copy (starts-with "=" class))
         (class* (list (string-trim " /=" (subseq class 0 p1))
                       (when p1
                         (split-args (trim (subseq class (1+ p1) (position #\) class :from-end t))))))))
    (if (or no-new copy)
        (append class* (list (if no-new :no-new :copy)))
        class*)))

(defun args-to-simple-c (args)
  (when args
    (if (consp args)
        (mapcar #'arg-to-simple-c args)
        (list (arg-to-simple-c args))))) 

(defun add-var-names (args &optional enum-class)
  (format nil "~{~a~^, ~}"
          (mapcar #'(lambda (arg name)
                      (format nil "~a ~a~a"
                              (arg-to-c arg enum-class)
                              name
                              (default-to-c arg enum-class)))
                  args
                  +var-names+)))

(defun n-var-names (n)
  (butlast +var-names+ (- +max-arguments+ n)))

(defun class-name* (x)
  (caaar x))

(defun sub-class-name (x)
  (subseq (class-name* x) 1))

(defun super-class (x)
  (cdar x))

(defun arg-type (arg)
  (first arg))

(defun return-arg (fun)
  (first fun))

(defun function-name (fun)
  (second fun))

(defun function-args (fun)
  (third fun))

(defun signature (fun)
  (format nil "~a(~{~a~^,~})"
          (function-name fun)
          (args-to-simple-c (function-args fun))))

(defun void-p (arg)
  (string= "void" (first arg)))

(defun arg-to-c (arg &optional enum-class return)
  (format nil "~a~a~a"
          (if (and (const-p arg)
                   (or (not return)
                       (not (string= "int" (first arg)))))
              "const "
              "")
          (add-enum-class (first arg) enum-class)
          (cond ((and (not return)
                      (reference-p arg))
                 "&")
                ((pointer-p arg)
                 "*")
                (t ""))))

(defun arg-to-c-null-value (arg)
  (let ((type (arg-type arg)))
    (cond ((void-p arg)
           "")
          ((or (pointer-p arg)
               (string= "int" type))
           "0")
          ((starts-with "Q" type)
           (format nil "~a()" type))
          ((string= "bool" type)
           "false")
          (t
           ""))))

(defun arg-to-simple-c (arg)
  (format nil "~a~a~a"
          (if (and (const-p arg)
                   (pointer-p arg)
                   (string= "char" (first arg)))
              "const "
              "")
          (first arg)
          (if (pointer-p arg) "*" "")))

(defun default-to-c (arg &optional enum-class)
  (if-it (default-value arg)
         (format nil " = ~a" (add-enum-class it enum-class))
         ""))

(defun add-enum-class (name class)
  (unless (empty-string name)
    (if (and class
             (string/= "Handle" name)
             (not (starts-with "GL" name)))
        (let ((1st (char name 0))
              (templ (position #\< name)))
          (when templ
            (setf 1st (char name (1+ templ))))
          (if (and (not (char= #\Q 1st))
                   (not (find #\: name))
                   (not (find #\_ name))
                   (upper-case-p 1st))
              (if templ
                  (format nil "~a~a::~a"
                          (subseq name 0 (1+ templ))
                          class
                          (subseq name (1+ templ)))
                  (if-it (position #\( name)
                         (let* ((names (split (subseq name (1+ it) (1- (length name)))
                                              #\|)))
                           (join (mapcar #'(lambda (name) (format nil "~a::~a" class name))
                                         names)
                                 #\|))
                         (format nil "~a::~a" class name)))
              name))
        name)))

(defun constructor-p (x)
  (find :constructor x))

(defun new-p (x)
  (not (find :no-new (car x))))

(defun copy-p (x)
  (find :copy (caar x)))

(defun pointer-p (x)
  (find :ptr (rest x)))

(defun reference-p (x)
  (find :ref x))

(defun value-p (x)
  (find :value x))

(defun const-p (x)
  (find :const (rest x)))

(defun protected-p (x)
  (find :protected x))

(defun static-p (x)
  (find :static x))

(defun pure-virtual-p (fun class)
  (when-it (find :pure fun :key #'(lambda (x) (when (consp x) (car x))))
           (string= class (cdr it))))

(defun virtual-p (x)
  (find :virtual x))

(defun default-value (x)
  (let (ret)
    (dolist (v x)
      (cond (ret (return v))
            ((eql :default v) (setf ret t))))))

(defun sort-names (names)
  (sort (remove-duplicates names :test #'string=)
        #'string<
        :key #'(lambda (str) (string-trim "=/" str))))

(defun ini ()
  (setf *q-names* (sort-names *q-names*)
        *n-names* (sort-names *n-names*))
  (mapc #'(lambda (objects names split-class)
            (mapc #'(lambda (obj name)
                      (when split-class
                        (setf (caar obj) (split-class name)))
                      (let ((class (if split-class (caaar obj) (caar obj))))
                        (setf (rest obj) (mapcar #'(lambda (fun)
                                                     (split-fun fun class))
                                                 (rest obj)))))
                  objects
                  names))
        (list *q-methods* *n-methods* *q-override* *n-override*)
        (list *q-names* *n-names* *q-names* *n-names*)
        (list t t nil nil)))

(defun super-classes (obj)
  (let ((all (list (caar obj)))
        (curr obj))
    (loop
       (if-it (cdar curr)
              (progn
                (push it all)
                (setf curr (find* (cdar curr) *q-override* #'caar)))
              (return (nreverse all))))))

(defun add-module-includes (s)
  (mapc #'(lambda (name include)
            (when (find* name *qt-modules*)
              (format s "#include <~a>~%" include)))
        (list "help" "opengl" "svg")
        (list "QtHelp" "QtOpenGL" "QtSvg")))

(defun classes.h (type)
  (with-open-file (s (format nil "../src/gen/_~c_classes.h" (if (eql :q type) #\q #\n))
                     :direction :output :if-exists :supersede)
    (let ((ch (if (eql :q type) #\Q #\N)))
      (format s "~a~%~%#ifndef ~c_CLASSES_H~
                 ~%#define ~c_CLASSES_H~
                 ~%~
                 ~%#include \"../ecl_fun.h\"~
                 ~%#include \"_lobjects.h\"~
                 ~%#include <QtGui>~%"
              +message-generated+
              ch
              ch))
    (add-module-includes s)
    (format s "~%typedef QList<int> NumList;~%")
    (mapc #'(lambda (method override)
              (when (new-p (first method))
                (let ((virtual (consp (rest override)))
                      (name (class-name* method))
                      (sub-name (sub-class-name method)))
                  (format s "~%class L~a : public ~a {~a~
                             ~%public:"
                          sub-name
                          name
                          (if (eql :q type) (format nil "~%    Q_OBJECT") ""))
                  (dolist (fun (rest method))
                    (when (constructor-p fun)
                      (let* ((args (function-args fun))
                             (len (length args)))
                        (when (<= len +max-arguments+)
                          (format s "~%    L~a(uint u~a~a) : ~aunique(u) {}"
                                  sub-name
                                  (if args ", " "")
                                  (add-var-names args)
                                  (if args (format nil "~a(~{~a~^, ~}), " name (n-var-names len)) ""))))))
                  (format s "~%~%    static NumList overrideIds;~
                             ~%    uint unique;~%")
                  (let ((1st t)
                        (sig-ids (list (sub-class-name method)))
                        fun-names virtuals)
                    (dolist (super (super-classes override))
                      (dolist (fun (rest (find* super (if (eql :q type) *q-override* *n-override*) #'caar)))
                        (when (virtual-p fun)
                          (setf virtuals t)
                          (let ((fun-name (function-name fun)))
                            (unless (or
                                     ;; private functions
                                     (and (string= "setModel" fun-name)
                                          (find* name '("QListWidget"
                                                        "QTableWidget"
                                                        "QTreeWidget")))
                                     (and (string= "QHelpIndexModel" name)
                                          (find* fun-name '("columnCount"
                                                            "hasChildren"
                                                            "parent")))
                                     (and (string= "QHelpSearchResultWidget" name)
                                          (find* fun-name '("changeEvent")))
                                     (and (string= "QHelpSearchQueryWidget" name)
                                          (find* fun-name '("changeEvent"
                                                            "focusInEvent")))
                                     (and (string= "QStringListModel" name)
                                          (find* fun-name '("columnCount"
                                                            "hasChildren"
                                                            "parent")))
                                     ;; exclude some very low-level ones
                                     (find* fun-name '("event"
                                                       "eventFilter"
                                                       "metaObject")))
                              (let* ((ret (return-arg fun))
                                     (void (void-p ret))
                                     (args (function-args fun))
                                     (sig (signature fun))
                                     (arg-names (args-to-simple-c (function-args fun)))
                                     (ret-name (arg-to-simple-c ret))
                                     (sig-id (let ((id (gethash sig *override-signatures*)))
                                               (unless id
                                                 (setf id (setf (gethash sig *override-signatures*)
                                                                (incf *override-id*)))
                                                 (push sig *override-functions*)
                                                 (push arg-names *override-arguments*)
                                                 (push (if (void-p ret) 0 ret-name) *override-return-arguments*))
                                               id))
                                     (call (format nil "callOverrideFun(~a, fun, ~d, ~a)"
                                                   (if (eql :q type) "this" "0")
                                                   sig-id
                                                   (if (function-args fun) "args" "0"))))
                                (when 1st
                                  (push sig-id sig-ids))
                                (unless (find* fun-name fun-names)
                                  (push fun-name fun-names)
                                  (format s "~%    ~a ~a(~a)~a { void* fun = LObjects::overrideFun(unique, ~d); if(fun) { ~a~a~a~a}"
                                          (arg-to-c ret)
                                          fun-name
                                          (add-var-names args)
                                          (if (const-p fun) " const" "")
                                          sig-id
                                          (if args (format nil "const void* args[] = { ~{&~a~^, ~} }; " (n-var-names (length args))) "")
                                          (if void (format nil "if(~a" call) (format nil "return ~a" (from-qvariant ret call)))
                                          (if void ".toBool()) return; }" "; } return")
                                          (if (pure-virtual-p fun name)
                                              (let ((val (arg-to-c-null-value ret)))
                                                (if (empty-string val)
                                                    ""
                                                    (format nil " ~a; " val)))
                                              (format nil " ~a::~a(~{~a~^, ~}); "
                                                      name
                                                      fun-name
                                                      (n-var-names (length args)))))))))))
                      (when 1st
                        (setf 1st nil)
                        (push (nreverse sig-ids) *override-signature-ids*)))
                    (when virtuals
                      (terpri s))
                    (format s "};~%" s)))))
          (if (eql :q type) *q-methods* *n-methods*)
          (if (eql :q type) *q-override* *n-override*))
    (format s "~%#endif~%"))
  (when (eql :n type)
    (setf *override-functions* (nreverse *override-functions*)
          *override-arguments* (nreverse *override-arguments*)
          *override-return-arguments* (nreverse *override-return-arguments*)
          *override-signature-ids* (nreverse *override-signature-ids*))))

(defun methods.h (type)
  (with-open-file (s (format nil "../src/gen/_~c_methods.h" (if (eql :q type) #\q #\n))
                     :direction :output :if-exists :supersede)
    (let ((ch (if (eql :q type) #\Q #\N)))
      (format s "~a~%~%#ifndef ~c_METHODS_H~
                 ~%#define ~c_METHODS_H~
                 ~%~
                 ~%#include \"_~c_classes.h\"~
                 ~%#include <QtGui>~%"
              +message-generated+
              ch
              ch
              (if (eql :q type) #\q #\n)))
    (add-module-includes s)
    (let* ((class (if (eql :q type) "Q" "N"))
           (n 0)
           (methods (if (eql :q type) *q-methods* *n-methods*))
           (classes (mapcar #'(lambda (obj)
                                (with-output-to-string (s)
                                  (let ((cl-name (class-name* obj))
                                        (sub-cl-name (sub-class-name obj)))
                                    (format s "~%class ~a~d : public ~a { // ~a~
                                               ~%    Q_OBJECT~
                                               ~%public:~%"
                                            class
                                            (incf n)
                                            (if-it (super-class obj)
                                                   (format nil "~a~d"
                                                           class
                                                           (1+ (if-it* (position it methods :test #'string= :key #'class-name*)
                                                                       it*
                                                                       (error (format t "~%Class missing: ~s~%~%" it)))))
                                                   "QObject")
                                            cl-name)
                                    (when (copy-p obj)
                                      (format s "    Q_INVOKABLE void* CC(uint u, L~a* o) { L~a* copy = new L~a(u); *copy = *o; return copy; }~%"
                                              sub-cl-name sub-cl-name sub-cl-name))
                                    (dolist (fun (rest obj))
                                      (let* ((fun-args (function-args fun))
                                             (len-fun-args (length fun-args)))
                                        (when (<= len-fun-args +max-arguments+)
                                          (if (constructor-p fun)
                                              (progn
                                                (setf *max-constructor-args* (max len-fun-args *max-constructor-args*))
                                                (format s "    Q_INVOKABLE void* C(uint u~a~a) { return new L~a(u~a~a); }~%"
                                                        (if fun-args ", " "")
                                                        (add-var-names fun-args cl-name)
                                                        sub-cl-name
                                                        (if fun-args ", " "")
                                                        (format nil "~{~a~^, ~}" (n-var-names len-fun-args))))
                                              (progn
                                                (setf *max-method-args* (max len-fun-args *max-method-args*))
                                                (format s "    Q_INVOKABLE ~a ~a~a(~a~a~a)~a { ~a~a~a~a; }~%"
                                                        (arg-to-c (return-arg fun) cl-name :return)
                                                        (if (static-p fun) "S" "M")
                                                        (function-name fun)
                                                        (if (static-p fun) "" (format nil "~a* o" cl-name))
                                                        (if (and fun-args (not (static-p fun))) ", " "")
                                                        (add-var-names fun-args cl-name)
                                                        (if (const-p fun) " const" "")
                                                        (if (void-p (return-arg fun)) "" "return ")
                                                        (if (static-p fun) (format nil "~a::" cl-name) "o->")
                                                        (function-name fun)
                                                        (if (value-p fun) "" (format nil "(~{~a~^, ~})" (n-var-names len-fun-args))))))))))
                                  (format s "};~%")))
                            methods)))
      ;; class hierarchy
      (let ((1st t)
            done)
        (loop
           (let (hit)
             (dolist (class classes)
               (flet ((class-done ()
                        (char= #\! (char class 10)))
                      (set-class-done ()
                        (setf (char class 10) #\!)))
                 (unless (class-done)
                   (let* ((name (read-from-string (subseq class 7 12)))
                          (p (search "public" class :test #'string=))
                          (inherits (read-from-string (subseq class (+ 7 p) (+ 12 p)))))
                     (if 1st
                         (when (search " public QObject" class :test #'string=)
                           (push name done)
                           (write-string class s)
                           (set-class-done))
                         (when (find inherits done)
                           (push name done)
                           (write-string class s)
                           (set-class-done)
                           (setf hit t)))))))
             (unless (or 1st hit)
               (return)))
           (setf 1st nil))))
    (format s "~%#endif~%")))

(defun from-qvariant (arg x)
  (let* ((1st (char (arg-type arg) 0))
         (q (char= #\Q 1st)))
    (cond ((pointer-p arg)
           (format nil "(~a)qVariantValue<void*>(~a)" (arg-to-c arg) x))
          ((or (search "::" (arg-type arg))
               (and (not q)
                    (upper-case-p 1st)))
           (format nil "(~a)~a.toInt()" (arg-type arg) x))
          (q
           (format nil "qVariantValue<~a>(~a)" (arg-type arg) x))
          (t
           (format nil "~a.to~a()" x (string-capitalize (arg-type arg)))))))

(defun lobjects.cpp ()
  (with-open-file (s "../src/gen/_lobjects.cpp" :direction :output :if-exists :supersede)
    (format s "~a~
               ~%~
               ~%#include \"_lobjects.h\"~
               ~%#include \"_q_classes.h\"~
               ~%#include \"_n_classes.h\"~
               ~%#include \"_q_methods.h\"~
               ~%#include \"_n_methods.h\"~
               ~%#include \"../dyn_object.h\"~
               ~%#include \"../eql.h\"~
               ~%~
               ~%EQL* LObjects::eql = 0;~
               ~%DynObject* LObjects::dynObject = 0;~
               ~%QObject** LObjects::Q = 0;~
               ~%QObject** LObjects::N = 0;~
               ~%uint LObjects::i_unique = 0;~
               ~%const char*** LObjects::override_arg_types = 0;~
               ~%QList<QByteArray> LObjects::qNames;~
               ~%QList<QByteArray> LObjects::nNames;~
               ~%QMap<QByteArray, int> LObjects::q_names;~
               ~%QMap<QByteArray, int> LObjects::n_names;~
               ~%QHash<QString, uint> LObjects::ui_unique;~
               ~%QHash<QByteArray, uint> LObjects::override_function_ids;~
               ~%QHash<quint64, void*> LObjects::override_lisp_functions;~%"
            +message-generated+)
    (dolist (ids *override-signature-ids*)
      (format s "NumList L~a::overrideIds = NumList()~{ << ~a~};~%" (first ids) (rest ids)))
    (format s "~%void LObjects::ini(EQL* e) {~
               ~%    static bool ok = false;~
               ~%    if(!ok) {~
               ~%        ok = true;~
               ~%        eql = e;~
               ~%        dynObject = new DynObject;~
               ~%        Q = new QObject* [~d];~
               ~%        N = new QObject* [~d];"
          (length *q-methods*)
          (length *n-methods*))
    (mapc #'(lambda (class len)
              (format s "~%        ")
              (dotimes (n len)
                (format s "~a[~d] = new ~a~d; " class n class (1+ n))))
          (list "Q" "N")
          (list (length *q-methods*) (length *n-methods*)))
    (let ((i 0))
      (dolist (obj *q-methods*)
        (format s "~%        q_names[~s] = ~d;" (class-name* obj) (incf i))))
    (let ((i 0))
      (dolist (obj *n-methods*)
        (format s "~%        n_names[~s] = ~d;" (class-name* obj) (incf i))))
    (let ((i 0))
      (dolist (fun *override-functions*)
        (incf i)
        (format s "~%        override_function_ids[~s] = ~d;" fun i)))
    (format s "~%        override_arg_types = new const char** [~d];" (length *override-arguments*))
    (let ((i -1))
      (mapc #'(lambda (args ret)
                (incf i)
                (format s "~%        { static const char* s[] = { ~s, ~a }; override_arg_types[~d] = s; }"
                        ret
                        (if args (format nil "~{~s, ~}0" args) "0")
                        i))
            *override-arguments*
            *override-return-arguments*))
    (let ((max (length *override-functions*)))
      (format s "~%        qNames = q_names.keys();~
                 ~%        nNames = n_names.keys(); }}~
                 ~%~
                 ~%void* LObjects::overrideFun(uint unique, int id) {~
                 ~%    return override_lisp_functions.value(~d * (quint64)unique + id, 0); }~
                 ~%~
                 ~%void LObjects::setOverrideFun(uint unique, int id, void* fun) {~
                 ~%    override_lisp_functions[~d * (quint64)unique + id] = fun; }~
                 ~%~
                 ~%const QMetaObject* LObjects::staticMetaObject(const QByteArray& name, int n) {~
                 ~%    if(n == -1) {~
                 ~%        n = LObjects::q_names.value(name); }~
                 ~%    const QMetaObject* m = 0;~
                 ~%    switch(n) {"
              max max))
    (let ((i 0))
      (dolist (obj *q-methods*)
        (format s "~%        case ~d: m = &~a::staticMetaObject; break;" (incf i) (class-name* obj))))
    (format s " }~
               ~%    return m; }~
               ~%~
               ~%void LObjects::deleteNObject(int n, void* p) {~
               ~%    switch(n) {")
    (let ((i 0))
      (dolist (obj *n-methods*)
        (incf i)
        (when (new-p (first obj))
          (format s "~%        case ~d: delete (L~a*)p; break;" i (sub-class-name obj)))))
    (format s " }}~
               ~%~
               ~%const char* LObjects::nObjectSuperClass(const QByteArray& name) {~
               ~%    const char* s = 0;~
               ~%    switch(LObjects::n_names.value(name)) {")
    (let ((i 0))
      (dolist (obj *n-methods*)
        (incf i)
        (when-it (super-class obj)
                 (format s "~%        case ~d: s = ~s; break;" i it))))
    (format s " }~
               ~%    return s; }~
               ~%~
               ~%StrList LObjects::override(const QByteArray& name) {~
               ~%    NumList ids;~
               ~%    int n = q_names.value(name, -1);~
               ~%    if(n != -1) {~
               ~%        switch(n) {")
    (let ((i 0))
      (dolist (obj *q-methods*)
        (incf i)
        (when (find* (sub-class-name obj) *override-signature-ids* #'first)
          (format s "~%            case ~d: ids = L~a::overrideIds; break;" i (sub-class-name obj)))))
    (format s " }}~
               ~%    else {~
               ~%        n = n_names.value(name);~
               ~%        switch(n) {")
    (let ((i 0))
      (dolist (obj *n-methods*)
        (incf i)
        (when (find* (sub-class-name obj) *override-signature-ids* #'first)
          (format s "~%            case ~d: ids = L~a::overrideIds; break;" i (sub-class-name obj)))))
    (format s " }}~
               ~%    StrList funs;~
               ~%    Q_FOREACH(int id, ids) {~
               ~%        const char* ret = override_arg_types[id - 1][0];~
               ~%        funs << QString(\"%1 %2\")~
               ~%                .arg(ret ? ret : \"void\")~
               ~%                .arg(QString(override_function_ids.key(id))).toAscii(); }~
               ~%    return funs; }~%")))

(defun missing-types ()
  (let ((skip (list "bool"
                    "double"
                    "float"
                    "int"
                    "qlonglong"
                    "qreal"
                    "qulonglong"
                    "uint"
                    "GLfloat"
                    "GLint"
                    "GLuint"
                    "QByteArray"
                    "QChar"
                    "QFile"
                    "QFont"
                    "QGradientStop"
                    "QItemEditorCreatorBase"
                    "QKeySequence"
                    "QLine"
                    "QLineF"
                    "QList<QAbstractButton*>"
                    "QList<QAction*>"
                    "QList<QByteArray>"
                    "QList<QDockWidget*>"
                    "QList<QGraphicsItem*>"
                    "QList<QGraphicsTransform*>"
                    "QList<QGraphicsView*>"
                    "QList<QGraphicsWidget*>"
                    "QList<QKeySequence>"
                    "QList<QListWidgetItem*>"
                    "QList<QPolygonF>"
                    "QList<QSize>"
                    "QList<QStandardItem*>"
                    "QList<QTableWidgetItem*>"
                    "QList<QTableWidgetSelectionRange>"
                    "QList<QTextFrame*>"
                    "QList<QTreeWidgetItem*>"
                    "QList<QUndoStack*>"
                    "QList<QUrl>"
                    "QList<QWidget*>"
                    "QList<int>"
                    "QList<qreal>"
                    "QMargins"
                    "QMatrix"
                    "QModelIndexList"
                    "QObjectList"
                    "QPoint"
                    "QPointF"
                    "QPolygon"
                    "QPolygonF"
                    "QRect"
                    "QRectF"
                    "QRgb"
                    "QSize"
                    "QSizeF"
                    "QString"
                    "QStringList"
                    "QTextBlockUserData"
                    "QTextInlineObject"
                    "QUrl"
                    "QGradientStops"
                    "QVector<QLine>"
                    "QVector<QLineF>"
                    "QVector<QPoint>"
                    "QVector<QPointF>"
                    "QVector<QRect>"
                    "QVector<QRectF>"
                    "QVector<QRgb>"
                    "QVector<QTextFormat>"
                    "QVector<QTextLength>"
                    "QVector<qreal>"
                    "QVariant"
                    "QWidgetList")))
    (with-open-file (s "missing-types.txt" :direction :output :if-exists :supersede)
      (dolist (arg (sort (loop for arg being the hash-keys in *argument-types* collect arg) #'string<))
        (unless (or (search "QStyle" arg :test #'string=)
                    (find* arg skip)
                    (find* arg *q-methods* #'caaar)
                    (find* arg *n-methods* #'caaar))
          (incf *missing-types*)
          (write-line arg s))))))

(progn
  (ini)
  (classes.h :q)
  (classes.h :n)
  (methods.h :q)
  (methods.h :n)
  (lobjects.cpp)
  (missing-types)
  (dolist (var '(*max-constructor-args*
                 *max-method-args*
                 *missing-types*))
    (format t "~&~s ~d~%" var (symbol-value var))))
