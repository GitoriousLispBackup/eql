# contact: gmail, polos.ruetz
# mailing list: http://groups.google.com/group/eql-user/topics
#
# MANY THANKS to the users of the eql-user mailing list for their contributions!



TESTED WITH
===========

* ECL 11.1.1 / 12.7.1 / 12.12.1 / 13.5.1 / 15.2.21 (all: threads + unicode)
* Qt 4.6 (not recommended), 4.7, 4.8
* Linux / OSX 10.4 / Windows XP, 7 (MSVC 2008, 2010)



REQUIREMENTS
============

* ECL >= 11.1.1 threads + unicode
* Qt4 >= 4.6 http://qt-project.org/downloads
         (Qt5 is currently not planned to be supported in the near future)

* Slime: any version that plays together with your ECL version (requires ECL threads)
         (on Windows you'll need ECL >= 12.12.1 / git >= 2012-09-01)



BUILD (see also: "Windows Easy Guide" in doc/)
=====

(N.B. for rebuilding, please see README-REBUILD.txt)

  [Windows]
    You first need to adapt the file src/windows.pri (include & library paths).
    
  [MSVC]
    substitute make with nmake

  [OSX]
    To force creation of a Makefile (instead of an Xcode project), use this flag:
        qmake -spec macx-g++

1) In src/ run:

    ecl -shell make-eql-lib.lisp

2) Do:

    qmake eql_lib.pro
    make

    qmake eql_exe.pro
    make

   This will build both the EQL executable and shared library.

3) cd ..

  [Linux]
    You need to create links to EQL, something like:
        cd /usr/lib
        sudo ln -s ~/eql/libeql.so.1 libeql.so.1
        cd /usr/bin
        sudo ln -s ~/eql/eql eql

  [OSX]
    You need to create links to EQL, something like:
        cd /usr/lib
        sudo ln -s ~/eql/libeql.1.dylib libeql.1.dylib
        cd /usr/bin
        sudo ln -s ~/eql/eql.app/Contents/MacOS/eql eql
        
  [Windows]
    Add your EQL directory to the Path environment variable, see:
    <Control Panel:System:Advanced:Environment Variables>



RUN
===

You can run a simple interactive REPL UI doing:
    eql -qgui

To run a Lisp file without top-level, do:
    eql examples/2-clock

(If you don't see the application window, it might be in the background.
Use your taskbar to show it.)

If you start the EQL executable without arguments, it will start the usual ECL top-level
(without processing Qt events).

To _not_ load ~/.eclrc on startup, do:
    eql -norc

To quit the tool, do:
    (eql:qquit) or
    (eql:qq)

In order to run (sort of) a top-level processing Qt events, do (requires ECL threads):
    eql -qtpl

    Note: If you want to use "ecl-readline" together with "-qtpl", just compile
          "eql/src/lisp/ecl-readline.lisp" (which depends on the "readline" C library).
          It will then be loaded automatically on startup.



QT MODULES
==========

To build an EQL module (corresponding to a Qt module), do the following in src/:

    qmake module_<name>.pro (e.g. qmake module_network.pro)
    make

  [Linux,OSX]
    You need to create links to the modules, see EQL library above.

In Lisp, use the function QREQUIRE to load a module:
    (qrequire :network)



NOTES
=====

For additional information see doc/index.html.



LICENSE
=======

MIT

for MAKE-QIMAGE (contributed by Mark Cox), please see LICENSE-MAKE-QIMAGE.txt

