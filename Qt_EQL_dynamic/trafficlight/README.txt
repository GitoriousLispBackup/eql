This is a simple example of integrating an existing Qt/C++ application


BUILD / RUN / CALL
==================

qmake
make

eql run.lisp -qtpl

  (qfun+ *qt-main* "stop")
  (qfun+ *qt-main* "start")

alternatively:

  (! "stop"  (:qt *qt-main*))
  (! "start" (:qt *qt-main*))

