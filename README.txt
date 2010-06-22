# contact: gmail, polos.ruetz


REQUIREMENTS

- ECL >= 10.4 (preferably with unicode)
- Qt  >= 4.6 (4.5 will not work!) http://qt.nokia.com/
- SLIME from CVS (e.g. 2010-06-01)



PREPARE BUILD (optional; new users: skip this)

If you want to include the QtOpenGL and QtSvg modules: (experimental!)
- uncomment the modules in helper/qt-modules.lisp
- follow the helper/README (parse & generate)
- uncomment the modules in src/eql.pro (section: optional modules)



BUILD / REBUILD (see also: "Windows Easy Guide" in doc/)

1) Switch to the src/ directory, and run:
    ecl -shell make-eql-lib.lisp (build + rebuild)

2) Run:
    qmake
    make clean (rebuild only)
    make (nmake in Windows)

(In Windows you first need to adapt the win32 section of eql.pro).

This will build the eql executable (which depends only on the shared
libraries of both ECL and Qt).

3) cd ..

In OSX you may want to create a convenience link:
    ln -s eql.app/Contents/MacOS/eql eql



RUN

You can run a simple interactive REPL UI doing:
    ./eql -qgui

OSX and Unix only:
In order to run a top-level processing Qt events, do:
    ./eql -qtpl

To run a Lisp file without top-level, do:
    ./eql examples/clock

If you start the eql executable without arguments, it will
start the usual ECL top-level (without processing Qt events).

To quit the tool, do:
    (eql:qquit) or
    (eql:qq)



NOTE

For additional information see doc/index.html.



LICENSE

LGPL
