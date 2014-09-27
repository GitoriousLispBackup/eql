Wrapper functions
=================

If you want to use wrapper functions for all Qt functions, compile/load file

  "src/lisp/all-wrappers.lisp"

Examples:

  (|show| widget)

  (|toString| (|currentTime.QTime|)) ; static function

  (|begin(QWidget*)| painter)


Notes
=====

To generate the wrappers for your Qt version, run:

  "src/lisp/define-all-wrappers.lisp"

---

If you want to add the wrappers permanently, build EQL as usual, then run

  eql make-eql-lib-wrappers.lisp

Re-link EQL doing something like:

  touch eql.cpp
  qmake eql_lib.pro
  make

(The resulting shared library will be considerably bigger than before).

---

See also note in Sokoban example (no more casts needed).

