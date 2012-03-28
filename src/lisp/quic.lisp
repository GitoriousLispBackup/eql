;;; copyright (c) 2012 Polos Ruetz
;;;
;;; user interface compiler (work in progress)

(defpackage :quic
  (:use :common-lisp :eql)
  (:export
   #:run))

(in-package :quic)

(defvar *defvars*)
(defvar *qlets*)
(defvar *lets-ini*)
(defvar *lets-tr*)
(defvar *main-var*)
(defvar *main-class*)
(defvar *line-nr*)
(defvar *section*)

(defmacro with-setq-reset ((&rest vars) &body body)
  (let ((set-nil (mapcar (lambda (x) (list 'setq x nil)) vars)))
    `(progn
       ,@set-nil
       ,@body
       ,@set-nil)))

(defun run (&optional (ui.h "ui.h") (ui.lisp "ui.lisp"))
  (with-setq-reset (*defvars* *qlets* *lets-ini* *lets-tr* *main-var* *main-class* *line-nr* *section*)
    (setf *defvars* (make-hash-table :test 'equal)
          *line-nr* 0)
    (with-open-file (in ui.h :direction :input)
      (with-open-file (out ui.lisp :direction :output :if-exists :supersede)
        (format out "(defpackage :ui~%  (:use :common-lisp :eql)")
        (let (code tr)
          (loop
            (incf *line-nr*)
            (let ((line (read-line in nil :eof)))
              (when (eql :eof line)
                (return))
              (x:when-it (c-to-lisp line)
                (if (eql :tr *section*)
                    (push x:it tr)
                    (push x:it code)))))
          (let ((max-len 0))
            (format out "~%  (:export~%   ;; all DEFVARs except layouts, spacers~{~%   #:~A~}~
                         ~%   #:ini~
                         ~%   #:retranslate-ui))~
                         ~%~
                         ~%(in-package :ui)~
                         ~%~
                         ~%(defvar ~A)~A (main widget)~
                         ~{~%(defvar ~{~A)~A~}~}~
                         ~%~
                         ~%(defun ini ()~
                         ~%  (qlet (~{~A~^ ~})~
                         ~%    (let (~{~A~^ ~})~
                         ~%      (setf ~A (qnew ~S))"
                    (let (export)
                      (maphash (lambda (var class)
                                 (setf max-len (max (length var) max-len))
                                 (when (notany (lambda (skip) (search skip class)) '("Layout" "Spacer"))
                                   (push (var-name var) export)))
                               *defvars*)
                      (sort export 'string<))
                    (var-name *main-var*)
                    (format nil "~A ; ~A" (make-string (- max-len (length *main-var*))) *main-class*)
                    (let (defvars)
                      (maphash (lambda (var class)
                                 (unless (string= *main-var* var)
                                   (push (list (var-name var) (format nil "~A ; ~A"
                                                                      (make-string (- max-len (length var)))
                                                                      class))
                                         defvars)))
                               *defvars*)
                      (sort defvars 'string< :key 'first))
                    (mapcar 'var-name (reverse *qlets*))
                    (mapcar 'var-name (reverse *lets-ini*))
                    (var-name *main-var*)
                    *main-class*))
          (dolist (line (nreverse code))
            (write-string line out))
          (format out "~%      (retranslate-ui)~
                       ~%      (qfun ~A \"show\"))))~
                       ~%~
                       ~%(defun retranslate-ui ()~
                       ~%  (let (~{~A~^ ~})"
                  (var-name *main-var*)
                  (mapcar 'var-name (reverse *lets-tr*)))
          (dolist (line (nreverse tr))
            (write-string line out))
          (format out "))~%~%(ini)~%"))))))

(defun trim (string)
  (string-trim " .;*" string))

(defun var-name (name)
  (let* ((name*  (trim name))
         (global (gethash name* *defvars*))
         (local  (or (find name* *qlets*    :test 'string=)
                     (find name* *lets-ini* :test 'string=)
                     (find name* *lets-tr*  :test 'string=))))
    (when global
      (setf name* (format nil "*~A*" name*)))
    (if (or global local)
        (string-downcase (substitute #\- #\_ name*))
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
                                       (format nil "(logior |~A|)" (string-trim " |" (string-substitute "| |" "|" arg))))
                                      (t
                                       (if (string= "QString" arg)
                                           "\"\""
                                           (var-name arg)))))
                              args*))))))

(let (special-fun)
  (defun split (line)
    (setf special-fun nil)
    (let ((ex-char #\?)
          list in-string arg)
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
        (x:do-string (char line)
          (if (and (not in-string)
                   (char= #\Space char))
              (add-arg)
              (progn
                (push char arg)
                (when (and (char= #\" char)
                           (char/= #\\ ex-char))
                  (when in-string
                    (add-arg))
                  (setf in-string (not in-string)))))
          (setf ex-char char))
        (add-arg))
      (nreverse list)))
  (defun special-fun ()
    special-fun))

(defun string-substitute (new old str)
  (let ((l (length old)))
    (with-output-to-string (s)
      (do ((e (search old str) (search old str :start2 (+ e l)))
           (b 0 (+ e l)))
          ((not e) (write-string (subseq str b) s))
        (write-string (subseq str b e) s)
        (write-string (if (evenp (count #\" (subseq str e))) ; exclude strings
                          new
                          old)
                      s)))))

(defun no (no line)
  (if (stringp no)
      (string-substitute " " no line)
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

(defun insert-tr (line string-lines-pos)
  (let* ((pos (position-if (lambda (x) (search ".translate" x)) line))
         (tr-string (if pos (nth (+ 2 pos) line) "\"\""))
         line*)
    (if pos
        (let ((start (eql :start string-lines-pos)))
          (dotimes (n (length line))
            (cond ((= n pos)
                   (when (= pos 7) ; 2 QFUN calls
                     (push ")" line*))
                   (push (format nil "(tr ~A~A"
                                 (if start (string-right-trim "\"\\n" tr-string) tr-string)
                                 (if start "" ")"))
                         line*))
                  ((or (< n pos)
                       (> n (+ 4 pos)))
                   (push (nth n line) line*))))
          (nreverse line*))
        line)))

(let (string-lines-pos)
  (defun qt-to-eql (qt-line &optional tr)
    (let ((string-start (and tr (x:starts-with "\"" qt-line)))
          (string-end   (and tr (x:ends-with   "\"" qt-line))))
      (setf string-lines-pos (if tr
                                 (cond ((and string-start string-end)
                                        :mid)
                                       (string-start
                                        :end)
                                       (string-end
                                        :start))
                                 nil)))
    (if (eql :mid string-lines-pos)
        (format nil "~A~%" (string-trim "\"\\n" (subseq qt-line 0 (position #\" qt-line :from-end t))))
        (flet ((to-list (line)
                 (remove-if (lambda (x) (find x '("QSize" "QRect" "QString::fromUtf8")
                                              :test 'string=))
                            (split line)))
               (show-warning (line)
                 (format *debug-io* "~%Not implemented, see line ~D of \"ui.h\":~%~%[Qt] ~A~%[??] ~S~%" *line-nr* qt-line line)
                 (format nil "~%;;[?] ~A" qt-line)))
          (let* ((line (trim (no #\( (no #\) (no #\, qt-line)))))
                 (type (cond ((search "->" line)
                              :fun)
                             ((search "= new" line)
                              :new)
                             ((x:starts-with "new " line)
                              :new-item)
                             ((qid (subseq line 0 (position #\Space line)))
                              :new-local))))
            (setf line (to-list (string-substitute " (qfun " "->" (no "new " line))))
            (when (special-fun)
              (setf type :fun))
            (when (search "::" (first line))
              (setf type :fun-static))
            (dotimes (n (- (length line) 2))
              (let ((arg (nth (+ 2 n) line)))
                (setf (nth (+ 2 n) line)
                      (cond ((search "::" arg)
                             (format nil "|~A|" (string-substitute "." "::" arg)))
                            ((string= "true" arg)
                             "t")
                            ((string= "false" arg)
                             "nil")
                            (t
                             arg)))))
            (when (eql :new-local type)
              (rotatef (first line) (second line))
              (push (first line) *qlets*))
            (let ((var-pos (x:when-it (position "=" line :test 'string=)
                             (1- x:it))))
              (when var-pos
                (let ((name (trim (nth var-pos line))))
                  (unless (gethash name *defvars*)
                    (if tr
                        (push name *lets-tr*)
                        (push name *lets-ini*))))
                (setf line (remove "=" line :test 'string=)))
              (cond ((and var-pos
                          (not (find type '(:new :new-local))))
                     ;; special case: set helper variables
                     (format nil "~%    (setf ~A (qfun ~A \"~A\"~{ ~A~}))"
                             (var-name (nth var-pos line))
                             (var-name (nth (1+ var-pos) line))
                             (nth (+ 3 var-pos) line)
                             (prepare-args (nthcdr (+ 4 var-pos) line))))
                    ((find type '(:new :new-local))
                     ;; qnew
                     (when (qid (first line)) ; helper variable
                       (setf line (rest line)))
                     (format nil "~%~A    (setf ~A (qnew \"~A~A\"~{ ~A~}))"
                             (if tr "" "  ")
                             (var-name (first line))
                             (second line)
                             (if (third line) (constructor-arg (second line)) "")
                             (prepare-args (nthcdr 2 line))))
                    ((eql :new-item type)
                     ;; qnew item
                     (format nil "~%~A    (qnew \"~A~A\"~{ ~A~})"
                             (if tr "" "  ")
                             (first line)
                             (if (second line) (constructor-arg (first line)) "")
                             (prepare-args (rest line))))
                    ((x:starts-with "QObject::connect" qt-line)
                     ;; qconnect
                     (let ((line* (mapcar (lambda (x) (string-trim " " x)) (x:split qt-line #\,))))
                       (format nil "~%    (qconnect ~A \"~A\" ~A \"~A\")"
                               (var-name (subseq (first line*) 17))
                               (subseq (second line*) 7 (- (length (second line*)) 1))
                               (var-name (third line*))
                               (subseq (fourth line*) 5 (- (length (fourth line*)) 3)))))
                    ((x:starts-with "<< QApplication::translate" qt-line)
                     ;; single string of string-list
                     (format nil "~%      (tr ~A)" (fourth line)))
                    ((string= ");" qt-line)
                     ;; end string-list
                     (format nil "~%    ))"))
                    ((eql :dot (special-fun))
                     ;; special function call
                     (let ((line* (remove "(qfun" line :test 'string=)))
                       (if (= 5 (length line*))
                           (format nil "~%~A    (qfun ~A \"~A\" (qfun (qfun ~A \"~A\") \"~A\"))"
                                   (if tr "" "  ")
                                   (var-name (first line*))
                                   (resolve-ambiguous (second line*))
                                   (var-name (third line*))
                                   (resolve-ambiguous (fourth line*))
                                   (resolve-ambiguous (fifth line*)))
                           (show-warning line*))))
                    ((or (eql :fun type) tr)
                     (when (or tr (eql :start string-lines-pos))
                       (setf line (insert-tr line string-lines-pos)))
                     (if (and tr (eql :end string-lines-pos))
                         (format nil "~A))" (subseq qt-line 1 (1+ (position #\" qt-line :from-end t))))
                         (if (and (not tr)
                                  (= 2 (count "(qfun" line :test 'x:starts-with))
                                  (= 6 (length line)))
                             (progn
                               ;; special function call
                               (format nil "~%~A~{    (qfun (qfun ~A \"~A\") \"~A\" ~A)~}"
                                       (if tr "" "  ")
                                       (prepare-args (remove "(qfun" line :test 'string=))))
                             (progn
                               ;; normal function
                               (dotimes (n (length line))
                                 (when (string= "(qfun" (nth n line))
                                   (rotatef (nth (1- n) line) (nth n line))))
                               (when (special-fun)
                                 (setf line (cons "(qfun" line)))
                               (let ((string-list-p (x:ends-with "QStringList()" qt-line)))
                                 (format nil "~%~A    ~A ~A \"~A\"~{ ~A~}~A"
                                         (if tr "" "  ")
                                         (first line)
                                         (var-name (second line))
                                         (resolve-ambiguous (third line))
                                         (let ((args (prepare-args (nthcdr (if (eql :fun type) 3 2) line))))
                                           (if string-list-p
                                               (append (nbutlast args 1) (list "(list")) ; start string-list
                                               args))
                                         (make-string (if (find "(tr " line :test 'x:starts-with)
                                                          (if (eql :start string-lines-pos) 0 1)
                                                          (- (count "(qfun" line :test 'string=) (if string-list-p 1 0)))
                                                      :initial-element #\) )))))))
                    ((eql :fun-static type)
                     ;; static function
                     (let ((p (search "::" (first line))))
                       (format nil "~%~A    (qfun \"~A\" \"~A\"~{ ~A~})"
                               (if tr "" "  ")
                               (subseq (first line) 0 p)
                               (resolve-ambiguous (subseq (first line) (+ 2 p)))
                               (prepare-args (nthcdr (if (eql :fun type) 2 1) line)))))
                    (t (show-warning line)))))))))
  
(defun c-to-lisp (c-line)
  (let ((line (string-trim '(#\Space #\Tab) c-line)))
    (when (and (not (x:empty-string line))
               (not (find (char line 0) "/*#{"))
               (not (cond ((x:starts-with "public:" line)
                           (setf *section* :defvar))
                          ((x:starts-with "void setupUi" line)
                           (let ((main  (x:split (subseq line (1+ (position #\( line)) (position #\) line)))))
                             (setf *main-var*   (trim (second main))
                                   *main-class* (first main)))
                           (setf (gethash *main-var* *defvars*) *main-class*)
                           (setf *section* :ini))
                          ((x:starts-with "void retranslateUi" line)
                           (setf *section* :tr))
                          ((x:starts-with "}" line)
                           (setf *section* :end))
                          ((dolist (skip '("QMetaObject::" "retranslateUi"))
                             (when (x:starts-with skip line)
                               (return :skip)))))))
      (case *section*
        (:defvar
         (setf (gethash (trim (subseq line (position #\* line))) *defvars*)
               (subseq line 0 (position #\Space line)))
         nil)
        (:ini
         (unless (x:starts-with "if" line)
           (qt-to-eql line)))
        (:tr
         (qt-to-eql line :tr))))))

(defun resolve-ambiguous (fun)
  (let* ((fun1 (trim fun))
         (fun2 (assoc fun1 '(("addAction" . "addAction(QAction*)"))
                      :test 'string=)))
    (if fun2 (cdr fun2) fun1)))
