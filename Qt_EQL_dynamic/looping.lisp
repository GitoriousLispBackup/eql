;;; Lisp calling C++ calling Lisp

(in-package :eql-user)

(defvar *c++* (qload-c++ (in-home "Qt_EQL_dynamic/eql_fun_cpp")))

(defun say-number (n)
  (format nil "~R" n))

;; see examples in "cpp_calling_lisp/lib.cpp"

(qfun+ *c++* "runExamples") ; note QFUN+

(qq)

