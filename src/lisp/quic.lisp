;;; copyright (c) 2012 Polos Ruetz
;;;
;;; user interface compiler (work in progress)

(defpackage :quic
  (:use :common-lisp :eql)
  (:export
   #:run))

(in-package :quic)

(defvar *global-vars*)
(defvar *local-vars*)
(defvar *main-var*)
(defvar *main-class*)
(defvar *code*)
(defvar *line-nr*)

(defun run (&optional (ui.h "ui.h") (ui.lisp "ui.lisp"))
  (setf *global-vars* (make-hash-table :test 'equal)
        *local-vars*  nil
        *main-var*    nil
        *main-class*  nil
        *code*        nil
        *line-nr*     0)
  (with-open-file (in ui.h :direction :input)
    (with-open-file (out ui.lisp :direction :output :if-exists :supersede)
      (format out "(defpackage :ui~
                   ~%  (:use :common-lisp :eql)~
                   ~%  (:export))~
                   ~%~
                   ~%(in-package :ui)~%")
      (loop
        (incf *line-nr*)
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
        *code*        nil
        *line-nr*     nil))

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
                 "(QListWidget*)"
                 "(QColor)"
                 "(QSizePolicy::Policy,QSizePolicy::Policy)"
                 "(int,int,QSizePolicy::Policy,QSizePolicy::Policy)"))
    (when (find arg (cadar (qapropos* "constructor" class)) :test 'x:ends-with)
      (return arg))))

(defun prepare-args (args)
  (remove-if (lambda (x) (search "static_cast<" x))
             (cond ((and (string= "QColor" (first args)) (find (length args) '(4 5)))
                    (list (format nil "(qfun \"QColor\" \"fromRgb\"~{ ~A~})" (rest args))))
                   (t
                    (let ((args* args))
                      (when (string= "(qfun" (first args))
                        (setf args* (copy-list args))
                        (setf (third args*) (format nil "\"~A\"" (third args*))))
                      (mapcar (lambda (arg)
                                (cond ((> (count #\| arg) 2)
                                       (format nil "(logior |~A|)" (string-trim " |" (x:string-substitute "| |" "|" arg))))
                                      (t
                                       (if (string= "QString" arg)
                                           "\"\""
                                           (var-name arg)))))
                              args*))))))

(let (special-fun)
  (defun split (line)
    (setf special-fun nil)
    (let (list in-string arg)
      (flet ((add-arg ()
               (when arg
                 (setf arg (coerce (nreverse arg) 'string))
                 (let ((dot (char= #\. (char arg 0))))
                   (if (and (not in-string)
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
          (if (and (not in-string)
                   (char= #\Space ch))
              (add-arg)
              (progn
                (push ch arg)
                (when (char= #\" ch)
                  (when in-string
                    (add-arg))
                  (setf in-string (not in-string))))))
        (add-arg))
      (nreverse list)))
  (defun special-fun ()
    special-fun))

(defun no (no line)
  (if (stringp no)
      (x:string-substitute " " no line)
      (let (line* in-string)
        (x:do-string (ch line)
          (push (if (and (not in-string)
                         (char= no ch))
                    #\Space
                    ch)
                line*)
          (when (char= #\" ch)
            (setf in-string (not in-string))))
        (coerce (nreverse line*) 'string))))

(defun qt-to-eql (qt-line &optional tr)
  (flet ((to-list (line)
           (remove-if (lambda (x) (find x '("QSize" "QRect" "QString::fromUtf8")
                                        :test 'string=))
                      (split line)))
         (show-warning (line)
           (format *debug-io* "~%Not implemented, see line ~D of \"ui.h\":~%~%[Qt] ~A~%[??] ~S~%" *line-nr* qt-line line)
           (format nil "~%;[?] ~A" qt-line)))
    (let* ((line (trim (no #\( (no #\) (no #\, qt-line)))))
           (type (cond ((search "->" line)
                        :fun)
                       ((search "= new" line)
                        :new)
                       ((x:starts-with "new " line)
                        :new-item)
                       ((qid (subseq line 0 (position #\Space line)))
                        :new-local))))
      (setf line (to-list (x:string-substitute " (qfun " "->" (no "new " (no "= new" line)))))
      (when (special-fun)
        (setf type :fun))
      (when (search "::" (first line))
        (setf type :fun-static))
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
      (cond ((x:starts-with "QObject::connect" qt-line)
             (let ((line* (mapcar (lambda (x) (string-trim " " x)) (x:split qt-line #\,))))
               (format nil "~%    (qconnect ~A \"~A\" ~A \"~A\")"
                       (var-name (subseq (first line*) 17))
                       (subseq (second line*) 7 (- (length (second line*)) 1))
                       (var-name (third line*))
                       (subseq (fourth line*) 5 (- (length (fourth line*)) 3)))))
            ((x:starts-with "const bool" qt-line)       ; TODO
             (show-warning line))
            ((x:starts-with "QListWidgetItem" qt-line)  ; TODO
             (show-warning line))
            ((x:starts-with "<< QApplication::translate" qt-line)
             (format nil "~%      (tr ~A)" (fourth line)))
            ((string= ");" qt-line)
             (format nil "~%    ))"))
            ((eql :dot (special-fun))
             (let ((line* (remove "(qfun" line :test 'string=)))
               (if (= 5 (length line*))
                   (format nil "~%    (qfun ~A \"~A\" (qfun (qfun ~A \"~A\") \"~A\"))"
                           (var-name (first line*))
                           (resolve-ambiguous (second line*))
                           (var-name (third line*))
                           (resolve-ambiguous (fourth line*))
                           (resolve-ambiguous (fifth line*)))
                   (show-warning line*))))
            ((eql :fun type)
             (dotimes (n (length line))
               (when (string= "(qfun" (nth n line))
                 (rotatef (nth (1- n) line) (nth n line))))
             (when (special-fun)
               (setf line (cons "(qfun" line)))
             (let ((string-list-p (x:ends-with "QStringList()" qt-line)))
               (format nil "~%    ~A ~A \"~A\"~{ ~A~}~A"
                       (first line)
                       (var-name (second line))
                       (resolve-ambiguous (third line))
                       (if (and tr (search ".translate" (fourth line)))
                           (list (format nil "(tr ~A)" (x:if-it (sixth line) x:it "\"\"")))
                           (let ((args (prepare-args (nthcdr (if (eql :fun type) 3 2) line))))
                             (if string-list-p
                                 (append (nbutlast args 1) (list "(list"))
                                 args)))
                       (make-string (- (count "(qfun" line :test 'string=) (if string-list-p 1 0))
                                    :initial-element #\) ))))
            ((eql :fun-static type)
             (let ((p (search "::" (first line))))
               (format nil "~%    (qfun \"~A\" \"~A\"~{ ~A~})"
                       (subseq (first line) 0 p)
                       (resolve-ambiguous (subseq (first line) (+ 2 p)))
                       (prepare-args (nthcdr (if (eql :fun type) 2 1) line)))))
            ((find type '(:new :new-local))
             (format nil "~%    (setf ~A (qnew \"~A~A\"~{ ~A~}))"
                     (var-name (first line))
                     (second line)
                     (if (third line) (constructor-arg (second line)) "")
                     (prepare-args (nthcdr 2 line))))
            ((eql :new-item type)
             (format nil "~%    (qnew \"~A~A\"~{ ~A~})"
                     (first line)
                     (if (second line) (constructor-arg (first line)) "")
                     (prepare-args (rest line))))
            (t (show-warning line))))))

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
  (let* ((fun1 (trim fun))
         (fun2 (assoc fun1 '(("addAction" . "addAction(QAction*)"))
                      :test 'string=)))
    (if fun2 (cdr fun2) fun1)))
