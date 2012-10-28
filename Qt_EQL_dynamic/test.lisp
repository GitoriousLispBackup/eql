(in-package :eql-user)

(defvar *c++* (qload-c++ (in-home "Qt_EQL_dynamic/eql_cpp")))

(assert (qt-object-p *c++*))

(qapropos nil *c++*)

;; test call

(qlet ((a "QVariant(QString)"    "hello from C++")
       (b "QVariant(int)"        42)
       (c "QVariant(double)"     pi)
       (d "QVariant(QByteArray)" (vector 69 81 76)))
  (qmsg (qfun+ *c++* "hello" (list a b c d)))) ; note QFUN+

(qq)
