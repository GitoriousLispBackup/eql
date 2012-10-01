(in-package :eql-user)

(defparameter *c++* (qload-c++ "eql_cpp"))

(qapropos nil *c++*)

;; test

(qlet ((var "QVariant(int)" 42))
  (assert (= 42
             (qfun (qfun* *c++* :qt "returnMe" var) ; note "qfun*" and ":qt"
                   "toInt"))))

(qq)

