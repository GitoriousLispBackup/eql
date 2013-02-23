;;; copyright (c) 2011-2013 Polos Ruetz
;;;
;;; customized to work with Qt 4.7

(load "load-modules")
(load "../src/lisp/x")
(load "share")

(use-package :x)

(let (html)
  (defun read-html (class)
    (let ((path (html-file class)))
      (if (probe-file path)
          (with-open-file (s path :direction :input)
            (setf html (make-string (file-length s)))
            (read-sequence html s))
          (progn
            (incf *not-found*)
            (warn (format nil "Html file not found: ~S" path))))))
  (defun parse (class s)
    (let ((tb2 0))
      (loop
        (let ((tb1 (search* "class=\"tblConst\">Constant<" html tb2)))
          (unless tb1
            (return))
          (setf tb2 (search* "</table>" html tb1))
          (let ((enums (subseq html tb1 tb2))
                (val2 0))
            (loop
              (let ((name1 (search* (format nil "<tt>~A::" class) enums val2)))
                (unless name1
                  (return))
                (let* ((name2 (search* "</tt></td>" enums name1))
                       (val1 (search* "><tt>" enums name2)))
                  (if val1
                      (progn
                        (setf val2  (search* "</tt></td>" enums val1))
                        (let ((name (subseq enums (+ name1 4) name2))
                              (val (subseq enums (+ val1 5) val2)))
                          (format s "~%(\"|~A|\" . ~A)"
                                  (x:string-substitute "." "::" name)
                                  (x:string-substitute "#x" "0x" val)
                                  val)))
                      (setf val2 name2)))))))))))
 
(defun parse-classes (classes s)
  (dolist (class classes)
    (let ((class* (string-left-trim "/" class)))
      (read-html class*)
      (format t "~%enums ~A" class*)
      (parse class* s))))

(defun start ()
  (with-open-file (s "../src/lisp/enum-lists/parsed-enums.lisp" :direction :output :if-exists :supersede)
    (write-char #\( s)
    (dolist (names (list *q-names* *n-names*))
      (parse-classes (mapcar (lambda (name)
                               (string-trim "= " (if-it (position #\( name)
                                                     (subseq name 0 it)
                                                     name)))
                             names)
                     s))
    (terpri s)
    (write-char #\) s))
  (if (zerop *not-found*)
      (format t "~%OK~%~%")
      (warn (format nil "Html files not found: ~D" *not-found*))))

(start)
