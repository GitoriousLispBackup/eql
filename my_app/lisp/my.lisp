(defpackage :example
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :example)

(defparameter *alarm* 11)

(defun start ()
  (qfun (qnew "QLabel"
              "text" (tr (format nil "<h3>~A ~{~R~^ ~},<br>I want to sleep until ~R."
                                 (string-capitalize (format nil "~R" 1))
                                 (loop for i from 2 to 7 collect i)
                                 *alarm*))
              "alignment" |Qt.AlignCenter|
              "margin" 10)
        "show"))

;;; example of a custom Qt/C++ library (e.g. for performace reasons)

(in-package :eql-user)

(defvar *c++*)

(qload-c++ "eql_cpp" '*c++*) ; see directory "cpp/"

(qlet ((var "QVariant(int)" 42))
  (assert (= 42
             (qfun (qfun* *c++* :qt "returnMe" var) ; note "qfun*" and ":qt"
                   "toInt"))))

