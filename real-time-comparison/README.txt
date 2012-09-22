BUILD / RUN
===========

qmake
make

eql test.lisp



SIMPLIFIED SUMMARY
==================

EQL function calls are about 10 times slower than direct C++ function calls.



...AND PROFILING ?
==================

For a profiling example (comparing CommonQt/SBCL and EQL) see "profiling.lisp".

It shows that CommonQt/SBCL and EQL have similar performance, and both feel
responsive on Unix (on Windows, CommonQt/SBCL was much slower in my tests).
