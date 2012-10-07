;;; Lisp calling C++ calling Lisp

(in-package :eql-user)

(defvar *c++* (qload-c++ "eql_fun_cpp"))

(defun say-number (n)
  (format nil "~R" n))

(qfun* *c++* :qt "sayNumber" 123456789)

(qq)
