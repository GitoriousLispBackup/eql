Wrapper functions
=================

If you want to use wrapper functions for all Qt functions, compile/load file

  "src/lisp/all-wrappers.lisp"

Example:

  (|toString| (|currentTime.QTime|))


Note
====

To generate the wrappers for your Qt version, run:

  "src/lisp/define-all-wrappers.lisp"

