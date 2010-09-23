(defpackage :example
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :example)

(defun start ()
  (qfun (qnew "QLabel"
              "text" (tr (format nil "<h2>~{~r~^ ~}, I want to sleep until ~r."
                                 (loop for i from 1 to 7 collect i)
                                 11)))
        "show"))
