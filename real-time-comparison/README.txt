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

If you want to fully profile EQL/ECL, simply use a decent C profiler like
"oprofile".
My tests using "oprofile" showed that the EQL functions are never the
bottleneck (as expected), and that Qt has done a good job with Q_INVOKABLE,
which is really fast.

The (obvious) conclusion is to use either embedded C (ECL) or custom Qt/C++
libraries (see function QLOAD-C++ and example in "my_app") for your bottlenecks.

