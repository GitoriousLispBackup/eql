;;; copyright (c) 2010-2012 Polos Ruetz

(require :x)

(defparameter *help* nil)

(defun add-cpp-docu ()
  (with-open-file (s (eql:in-home "src/ecl_fun.cpp") :direction :input)
    (let (curr ex)
      (flet ((add-curr ()
               (when curr
                 (push (reverse curr) *help*)
                 (setf curr nil)))
             (trim (str)
               (string-trim '(#\/ #\Space) str)))
        (loop
           (let ((line (read-line s nil :eof)))
             (when (eql :eof line)
               (return))
             (setf line (string-trim " " line))
             (when (x:starts-with "///" line)
               (when (x:starts-with "cl_object " ex)
                 (add-curr)
                 (let ((fun (trim (subseq ex 10))))
                   (push (substitute #\- #\_ (string-trim "2" (subseq fun 0 (position #\( fun))))
                         curr)))
               (push (trim line) curr))
             (setf ex line)))
        (add-curr)))))

(defun add-lisp-docu ()
  (do-external-symbols (sym (find-package :eql))
    (let ((name (symbol-name sym)))
      (when (or (char= #\Q (char name 0))
                (find name '("DEFVAR-UI" "TR") :test 'string=))
        (x:when-it (documentation sym 'function)
          (let ((fun  (string-downcase (symbol-name sym)))
                (docu (mapcar #'(lambda (s) (string-trim " " s)) (x:split x:it #\Newline))))
            (unless (string= fun (subseq (second docu) 7))
              (push (cons fun docu) *help*))))))))

(defun help ()
  (setf *help* nil)
  (add-cpp-docu)
  (add-lisp-docu)
  (with-open-file (s (eql:in-home "doc/auto-doc.htm") :direction :output :if-exists :supersede)
    (write-string "<html><body>" s)
    (flet ((el (tag x)
             (format nil "<~A>~A</~A>" tag x tag))
           (! (x)
             (format s "~A~%" x))
           (tab ()
             (write-string "  " s)))
      (setf *help* (sort *help* #'string< :key #'first))
      (dolist (curr *help*)
        (! "<p>")
        (! (el "b" (format nil "~A ~A" (string-upcase (first curr)) (subseq (second curr) 6))))
        (let ((n 2))
          (when (x:starts-with "alias:" (third curr))
            (incf n)
            (! "<br>")
            (! (el "b" (string-upcase (subseq (third curr) 7)))))
          (! (el "p" (nth n curr)))
          (let ((examples (nthcdr (1+ n) curr)))
            (when examples
              (! "<pre>")
              (dolist (example examples)
                (tab)
                (! example))
              (! "</pre>"))))
        (! "</p><br>"))
      (write-string "</body></html>" s))))

(progn
  (help)
  (eql:qq))
