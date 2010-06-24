HOWTO

1) Build the EQL shared library:

    - in src/eql.pro uncomment the line
        CONFIG += eql_dll

    - in src/ do: (win32: nmake instead of make)
        qmake
        make

2) An example can be found in my_app/. It consists of a single Lisp file (my_app/lisp/my.lisp).

   - add all of your lisp files to the variable *lisp-files* in my_app/make-my-lib.lisp
     (assuming that all of your lisp files are situated in my_app/lisp/)

   - in my_app/ do: (that is, use your eql executable to build your library)
        ../eql make-my-lib.lisp (win32: ..\eql make-my-lib.lisp) 

3) Adapt the my_app/main.cpp (translations, initial Lisp form to evaluate, package name).

   - in my_app/ do: (win32: nmake instead of make)
        qmake
        make clean
        make

Now you should find a my_app executable, which depends on the eql shared library.

