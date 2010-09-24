(defpackage :example
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :example)

(defun start ()
  (qfun (qnew "QLabel"
              "text" (tr (format nil "<h2>~a ~{~r~^ ~}, I want to sleep until ~r."
                                 (string-capitalize (format nil "~r" 1))
                                 (loop for i from 2 to 7 collect i)
                                 11)))
        "show"))
