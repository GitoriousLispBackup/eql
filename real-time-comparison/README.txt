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
It shows that CommonQt/SBCL and EQL have similar performance (I mean the GUI
part only, of course SBCL is _much_ faster than ECL), and both feel
responsive on Unix (on Windows, CommonQt/SBCL was much slower in my tests).

If you want to fully profile EQL/ECL, simply use a decent C profiler like
"oprofile".
My tests using "oprofile" showed that the EQL functions are never the
bottleneck (as expected), and that Qt has done a good job with Q_INVOKABLE,
which is really fast.

See functions QLOAD-C++ / QAUTO-RELOAD-C++ (Linux only) and "Qt_EQL_dynamic/"
if you want to use Qt/C++ code for your bottlenecks.

See also notes in "profiling.lisp".

