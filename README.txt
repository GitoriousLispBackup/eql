# contact: gmail, polos.ruetz
# mailing list: http://groups.google.com/group/eql-user/topics


TESTED WITH: (patches for other configurations welcome!)

- ECL 10.4.1 unicode
- Qt 4.6.x (OSX: Carbon)
- Linux, OSX 10.4, Windows XP & 7 (Visual Studio Express 2008)



REQUIREMENTS

- ECL >= 10.4 official releases only (not CVS HEAD), enabling unicode
- Qt  >= 4.6 (4.5 will not work) http://qt.nokia.com/
- SLIME from CVS (e.g. 2010-06-01)



PREPARE BUILD (optional; new users: skip this)

If you want to include additional modules:
- uncomment the modules in helper/qt-modules.lisp
- follow the helper/README (parse & generate)
- uncomment the modules in src/eql_lib.pro (section: optional modules)



BUILD / REBUILD (see also: "Windows Easy Guide" in doc/)

[Windows]
    You first need to adapt the win32 section of both src/eql_lib.pro and src/eql_exe.pro.

[GCC]
    If you use a recent GCC (e.g. 4.5) you need to uncomment this line in src/eql_lib.pro:
        QMAKE_CXXFLAGS += -fno-var-tracking-assignments 

1) Switch to the src/ directory, and run:
    ecl -shell make-eql-lib.lisp (build + rebuild)

2) Run: (MSVC: nmake instead of make)
    qmake eql_lib.pro
    make clean (rebuild only)
    make 

    qmake eql_exe.pro
    make clean (rebuild only)
    make 

This will build both the EQL executable and shared library.

3) cd ..

[Linux]
    You need to create a link to the EQL shared library, something like:
        cd /usr/lib
        sudo ln -s ~/eql/libeql.so.1 libeql.so.1

[OSX]
    You need to create a link to the EQL shared library, something like:
        cd /usr/lib
        sudo ln -s ~/eql/libeql.1.dylib libeql.1.dylib
    You may want to create a convenience link:
        ln -s eql.app/Contents/MacOS/eql eql



RUN

You can run a simple interactive REPL UI doing:
    ./eql -qgui (MSVC: eql -qgui)

OSX and Unix only:
In order to run a top-level processing Qt events, do:
    ./eql -qtpl

To run a Lisp file without top-level, do:
    ./eql examples/clock (MSVC: eql examples/clock)

If you start the eql executable without arguments, it will
start the usual ECL top-level (without processing Qt events).

To quit the tool, do:
    (eql:qquit) or
    (eql:qq)



NOTES

For additional information see doc/index.html.

An interesting side note: the EQL library size varies quite a bit on different platforms:
- Windows MSVC 2008:     ~3 MB
- Mac OSX 10.4 GCC 4.0:  ~6 MB
- Linux GCC 4.5:        ~20 MB (and no, UPX doesn't work here)



LICENSE

LGPL

