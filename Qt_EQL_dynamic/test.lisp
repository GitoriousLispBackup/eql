(in-package :eql-user)

(defparameter *c++* (qload-c++ "eql_cpp"))

(when *c++*
  (qapropos nil *c++*))

;; test

(when *c++*
  (qlet ((var "QVariant(int)" 42))
    (assert (= 42
               (qfun (qfun* *c++* :qt "returnMe" var) ; note "qfun*" and ":qt"
                     "toInt")))))

(qq)

