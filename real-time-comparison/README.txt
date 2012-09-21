In short: EQL is about 10 times (depending on the OS) slower than C++.


BUILD / RUN
===========

qmake
make

eql test.lisp


NOTES
=====

CommonQt versus EQL (on OSX):

ECL  + CommonQt: 20 times *slower* than EQL
SBCL + CommonQt:  2 times *faster* than EQL

(CommonQt + dependencies need some hacks to run with ECL 12.7.1)
