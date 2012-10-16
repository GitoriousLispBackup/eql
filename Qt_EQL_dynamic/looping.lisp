;;; Lisp calling C++ calling Lisp

(in-package :eql-user)

(defvar *c++* (qload-c++ "eql_fun_cpp"))

(defun say-number (n)
  (format nil "~R" n))

(defun new-widget (name)
  (qnew name))

;; see examples in "cpp_calling_lisp/lib.cpp"

(qfun+ *c++* "runExamples") ; note QFUN+

(qq)

