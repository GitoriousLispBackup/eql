;;; Lisp calling C++ calling Lisp
;;;
;;; (see "cpp_calling_lisp/")

(in-package :eql-user)

(defvar *c++* (qload-c++ "eql_fun_cpp"))

(defun say-number (n)
  (format nil "~R" n))

(qfun+ *c++* "sayNumber" 123456789) ; note QFUN+

(qq)
