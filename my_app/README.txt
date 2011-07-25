HOWTO
=====


1) This example/template consists of a single Lisp file (lisp/my.lisp).

  a) add all of your lisp files to the variable *lisp-files* in make-my-lib.lisp
    (assuming that all of your lisp files are in lisp/)

  b) do: (that is, use your EQL executable to build your library)
    eql make-my-lib.lisp

2) Adapt the main.cpp (translations, initial Lisp form to evaluate, package name).

3) Do:
  
  remove the directory tmp/ (if present)
  qmake
  make (MSVC: nmake)

Now you should find a my_app executable.
