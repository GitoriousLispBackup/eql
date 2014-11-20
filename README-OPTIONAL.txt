Wrapper functions
=================

If you want to use wrapper functions for all Qt functions, see:

  "src/lisp/all-wrappers.lisp"

Examples:

  (|show| widget)

  (|toString| (|currentTime.QTime|)) ; static function

  (|begin(QWidget*)| painter)


Notes
=====

To generate the wrappers for your Qt version (different from Qt 4.7) run:

  "src/lisp/define-all-wrappers.lisp"

---

If you want to add the wrappers permanently, build EQL as usual, then run

  eql make-eql-lib-wrappers.lisp

Re-link EQL doing something like:

  touch eql.cpp (or remove "tmp/eql.o*")
  qmake eql_lib.pro
  make

(The resulting shared library will be considerably bigger than before).

---

The convenience macro X:DO-WITH has been adapted to work with the wrappers:

  (x:do-with item
    (|setTextAlignment| 0 |Qt.AlignRight|)
    (|setText| 0 "123"))

---

See also note in Sokoban example (no more casts needed).

