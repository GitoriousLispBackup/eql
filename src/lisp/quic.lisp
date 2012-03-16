;;; copyright (c) 2012 Polos Ruetz
;;;
;;; user interface compliler (work in progress)

(defpackage :quic
  (:use :common-lisp :eql)
  (:export
   #:quic))

(in-package :quic)

(defvar *global-vars*)
(defvar *local-vars*)
(defvar *main-var*)
(defvar *main-class*)
(defvar *code*)

(defun run (&optional (ui.h "ui.h") (ui.lisp "ui.lisp"))
  (setf *global-vars* (make-hash-table :test 'equal)
        *local-vars*  nil
        *main-var*    nil
        *main-class*  nil
        *code*        nil)
  (with-open-file (in ui.h :direction :input)
    (with-open-file (out ui.lisp :direction :output :if-exists :supersede)
      (format out "(defpackage :ui~
                   ~%  (:use :common-lisp :eql)~
                   ~%  (:export))~
                   ~%~
                   ~%(in-package :ui)~%")
      (loop
        (let ((line (read-line in nil :eof)))
          (when (eql :eof line)
            (return))
          (x:when-it (c-to-lisp line)
            (push x:it *code*))))
      (format out "~%(defvar *~A*) ; main widget~
                   ~{~%(defvar *~A*)~}~
                   ~%~
                   ~%(defun ini ()~
                   ~%  (qlet (~{~A~^ ~})~
                   ~%    (setf *~A* (qnew ~S))"
              *main-var*
              (sort (remove *main-var* (loop for var being the hash-keys in *global-vars* collect var) :test 'string=)
                    'string<)
              (nreverse *local-vars*)
              *main-var*
              *main-class*)
      (dolist (line (nreverse *code*))
        (write-string line out))
      (format out "~%    (qfun *~A* \"show\")))~
                   ~%~
                   ~%(ini)~%"
              *main-var*)))
  (setf *global-vars* nil
        *local-vars*  nil
        *main-var*    nil
        *main-class*  nil
        *code*        nil))

(defun trim (string)
  (string-trim " .;*" string))

(defun var-name (name)
  (let ((name* (trim name)))
    (if (gethash name* *global-vars*)
        (format nil "*~A*" name*)
        name*)))

(defun constructor-arg (class)
  (dolist (arg '("(QWidget*)"
                 "(QObject*)"
                 "(QColor)"
                 "(QSizePolicy::Policy,QSizePolicy::Policy)"
                 "(int,int,QSizePolicy::Policy,QSizePolicy::Policy)"))
    (when (find arg (cadar (qapropos* "constructor" class)) :test 'x:ends-with)
      (return arg))))

(defun prepare-args (args)
  (cond ((and (string= "QColor" (first args)) (find (length args) '(4 5)))
         (list (format nil "(qfun \"QColor\" \"fromRgb\"~{ ~A~})" (rest args))))
        (t
         (mapcar 'var-name args))))

(let (special-fun)
  (defun split (line)
    (setf special-fun nil)
    (let (list string-p arg)
      (flet ((add-arg ()
               (when arg
                 (setf arg (coerce (nreverse arg) 'string))
                 (let ((dot (char= #\. (char arg 0))))
                   (if (and (not string-p)
                            (find #\. arg)
                            (not (every 'digit-char-p (remove #\. arg))))
                       (progn
                         (setf special-fun (if dot :dot :fun))
                         (if dot
                             (push arg list)
                             (dolist (arg* (x:split arg #\.))
                               (push arg* list))))
                       (push arg list))
                   (setf arg nil)))))
        (x:do-string (ch line)
          (if (and (not string-p)
                   (char= #\Space ch))
              (add-arg)
              (progn
                (push ch arg)
                (when (char= #\" ch)
                  (when string-p
                    (add-arg))
                  (setf string-p (not string-p))))))
        (add-arg))
      (nreverse list)))
  (defun special-fun ()
    special-fun))

(defun qt-to-eql (qt-line &optional tr)
  (flet ((no (x line)
           (x:string-substitute " " x line))
         (to-list (line)
           (remove-if (lambda (x) (find x '("QSize" "QRect" "QString::fromUtf8")
                                        :test 'string=))
                      (split line))))
    (let* ((line (trim (no "(" (no ")" (no "," qt-line)))))
           (type (cond ((search "->" line)
                        :fun)
                       ((search "= new" line)
                        :new)
                       ((qid (subseq line 0 (position #\Space line)))
                        :new-local))))
      (setf line (to-list (no "->" (no "= new" line))))
      (when (special-fun)
        (setf type :fun))
      (dotimes (n (- (length line) 2))
        (let ((arg (nth (+ 2 n) line)))
          (setf (nth (+ 2 n) line)
                (cond ((search "::" arg)
                       (format nil "|~A|" (x:string-substitute "." "::" arg)))
                      ((string= "true" arg)
                       "t")
                      ((string= "false" arg)
                       "nil")
                      (t
                       arg)))))
      (when (eql :new-local type)
        (rotatef (first line) (second line))
        (push (first line) *local-vars*))
      (cond ((eql :dot (special-fun))
             (if (= 5 (length line))
                 (format nil "~%    (qfun ~A \"~A\" (qfun (qfun ~A \"~A\") \"~A\"))"
                         (var-name (first line))
                         (resolve-ambiguous (second line))
                         (var-name (third line))
                         (resolve-ambiguous (trim (fourth line)))
                         (resolve-ambiguous (trim (fifth line))))
                 (error "Not implemented: ~S" line)))
            ((eql :fun type)
             (format nil "~%    (qfun ~A \"~A\"~{ ~A~})"
                     (var-name (first line))
                     (resolve-ambiguous (second line))
                     (if tr
                         (list (format nil "(tr ~A)" (x:if-it (fifth line) x:it "\"\"")))
                         (prepare-args (nthcdr 2 line)))))
            ((find type '(:new :new-local))
             (format nil "~%    (setf ~A (qnew \"~A~A\"~{ ~A~}))"
                     (var-name (first line))
                     (second line)
                     (if (third line) (constructor-arg (second line)) "")
                     (prepare-args (nthcdr 2 line))))
            (t (error "Not implemented."))))))

(let (section)
  (defun c-to-lisp (c-line)
    (let ((line (string-trim '(#\Space #\Tab) c-line)))
      (when (and (not (x:empty-string line))
                 (not (find (char line 0) "/*#{"))
                 (not (cond ((x:starts-with "public:" line)
                             (setf section :defvar))
                            ((x:starts-with "void setupUi" line)
                             (let ((main  (x:split (subseq line (1+ (position #\( line)) (position #\) line)))))
                               (setf *main-var*   (trim (second main))
                                     *main-class* (first main)))
                             (setf (gethash *main-var* *global-vars*) *main-class*)
                             (setf section :ini))
                            ((x:starts-with "void retranslateUi" line)
                             (push (format nil "~%    ;; texts") *code*)
                             (setf section :tr))
                            ((x:starts-with "}" line)
                             (setf section :end))
                            ((dolist (skip '("QMetaObject::" "retranslateUi"))
                               (when (x:starts-with skip line)
                                 (return :skip)))))))
        (case section
          (:defvar
           (setf (gethash (trim (subseq line (position #\* line))) *global-vars*)
                 (subseq line 0 (position #\Space line)))
           nil)
          (:ini
           (unless (x:starts-with "if" line)
             (qt-to-eql line)))
          (:tr
           (qt-to-eql line :tr)))))))

(defun resolve-ambiguous (fun)
  (let ((fun* (assoc fun '(("addAction" . "addAction(QAction*)"))
                         :test 'string=)))
    (if fun* (cdr fun*) fun)))
