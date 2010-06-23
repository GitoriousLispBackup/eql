(defpackage :example
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :example)

(defun start ()
  (qfun (qnew "QLabel" "text" (tr "<h1>example application"))
	"show"))
