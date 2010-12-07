# contact: gmail, polos.ruetz
# mailing list: http://groups.google.com/group/eql-user/topics



TESTED WITH
===========

* ECL from CVS (2010-10-29)
* Qt4.6.x, Qt4.7.0
* Linux, OSX 10.4, Windows XP & 7 (MSVC)



REQUIREMENTS
============

* ECL >= 10.4 Unicode (./configure --enable-unicode)
* Qt  >= 4.6 http://qt.nokia.com/
* SLIME from CVS (e.g. 2010-06-01)



BUILD / REBUILD (see also: "Windows Easy Guide" in doc/)
===============

  [Windows]
    You first need to adapt the file src/windows.pri (include & library paths).
    
  [MSVC]
    substitute make with nmake

  [GCC]
    If you experience long compile times (file src/gen/_lobject.cpp), uncomment this line in src/eql_lib.pro:
        QMAKE_CXXFLAGS += -fno-var-tracking-assignments 

  [OSX]
    To force creation of a Makefile (instead of an Xcode project), use this flag:
        qmake -spec macx-g++


0) Prepare build (note: you need to repeat this every time you change your Qt version)
   in src/ run:
 
    qmake first_metatype_id.pro
    make clean (rebuild only)
    make
    ./first_metatype_id (MSVC: first_metatype_id.exe)

   This will create the file first_metatype_id.h (which differs in Qt4.6 and Qt4.7)

1) In src/ run:
    ecl -shell make-eql-lib.lisp (build + rebuild)

2) Run:

    qmake eql_lib.pro
    make clean (rebuild only)
    make 

    qmake eql_exe.pro
    make clean (rebuild only)
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

If you start the EQL executable without arguments, it will start the usual ECL top-level
(without processing Qt events).

To quit the tool, do:
    (eql:qquit) or
    (eql:qq)

[Linux,OSX]
  In order to run a top-level processing Qt events, do:
    eql -qtpl


QT MODULES
==========

To build an EQL module (corresponding to a Qt module), do the following in src/:

    qmake module_<name>.pro (e.g. qmake module_network.pro)
    make clean (rebuild only)
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

LGPL



THANKS to all users of the eql-user mailing list for their contributions!
