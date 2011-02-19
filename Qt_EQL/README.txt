[work in progress...]


Short description:
==================

Build:

    1) Qt/trafficlight.pro

    2) EQL_Qt.pro

    3) in example 9, run:
       eql make-local-server-fasl.lisp
       and copy the resulting eql-local-server.fas to EQL/

Run:        

    1) run the EQL_Qt executable

    2) in example 9, run:
       eql editor.lisp ../../Qt_EQL/EQL/trafficlight.lisp
       eval the line: (in-package :trafficlight)
       [...]


See Qt/trafficlight.cpp:eql_fun() for an example of how to call a Lisp
function from Qt.

The parameter *qt-main* is bound to the main Qt widget.

To get the 3 child widgets, identified by QObject::objectName(), do:

    (qfind-child *qt-main* "red")
    (qfind-child *qt-main* "yellow")
    (qfind-child *qt-main* "green")

From Lisp you can call: (note "qfun*" and ":qt")

    (qfun* *qt-main* :qt "stop")
    (qfun* *qt-main* :qt "start")

This is possible because these 2 methods are declared Q_INVOKABLE
in Qt/trafficlight.h

--

You need to add:
    
    #include "eql_fun.h"

in the header file(s) of your Qt project which you include in main.cpp, and in
the cpp files which use eql_fun().

Since Qt has its own keywords which would clash with some ECL/C keywords, you
need to substitute some Qt keywords (only in the header file(s) which you need
to include in main.cpp):

    Q_SLOTS   instead of slots
    Q_SIGNALS instead of signals
    Q_FOREACH instead of foreach
    QSLOT     instead of SLOT
    QSIGNAL   instead of SIGNAL
