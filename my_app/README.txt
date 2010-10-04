HOWTO

1) An example can be found in my_app/. It consists of a single Lisp file (my_app/lisp/my.lisp).

  - add all of your lisp files to the variable *lisp-files* in my_app/make-my-lib.lisp
    (assuming that all of your lisp files are situated in my_app/lisp/)

  - in my_app/ do: (that is, use your EQL executable to build your library)
      ../eql make-my-lib.lisp (MSVC: ..\eql make-my-lib.lisp) 

2) Adapt the my_app/main.cpp (translations, initial Lisp form to evaluate, package name).

  - in my_app/ do: (MSVC: nmake instead of make)
      qmake
      make clean
      make

  [Windows]: (suggestion) create a hardlink to the eql.dll:
      fsutil hardlink create eql.dll ..\eql.dll

Now you should find a my_app executable, which depends on the EQL shared library.

