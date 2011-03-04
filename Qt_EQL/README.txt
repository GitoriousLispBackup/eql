INTRO
=====

This is a simple example of embedding EQL in existing Qt/C++ projects.
So, after statically linking a Qt/C++ application to EQL, you can:
  - call C++ from Lisp
  - call Lisp from C++

You'll find the simple Lisp editor from example 9 to be integrated in this
example (which allows to run the Qt application natively, keeping it listening
to the simple editor, for eval region etc.).

(For your own applications, you obviously don't need to add the editor & server
from example 9.)


BUILD
=====

    1) Qt/trafficlight.pro

    2) Qt_EQL.pro

    3) in eql/examples/9-simple-lisp-editor/:
       $ eql make-local-server-fasl.lisp
       $ eql make-editor-fasl.lisp
       copy all of:
           eql-local-server.fas
           eql-editor.fas
           data/
       from: eql/examples/9-simple-lisp-editor/
       to:   eql/Qt_EQL/EQL/


RUN
===       

    1) Qt_EQL (executable)

    2) in EQL/:
       $ eql eql-editor.fas trafficlight.lisp
       eval the line:
           (in-package :trafficlight)
       just play around with "eval region"...


See Qt/trafficlight.cpp:eql_fun() for an example of how to call a Lisp
function from C++. The syntax is like this:

    eql_fun("my-package:my-function",
            Q_ARG(QWidget*, this),
            Q_ARG(QStringList, list),
            Q_ARG(int, maximum()));

The variable eql:*qt-main* is bound to the main Qt widget.

To get the 3 child widgets, identified by QObject::objectName(), do:

    (qfind-child *qt-main* "red")
    (qfind-child *qt-main* "yellow")
    (qfind-child *qt-main* "green")

From Lisp you can call: (note "qfun*" and ":qt")

    (qfun* *qt-main* :qt "stop")
    (qfun* *qt-main* :qt "start")

This is possible because these 2 methods are declared Q_INVOKABLE
in Qt/trafficlight.h.

In order to call generic Qt functions, signals, slots from *qt-main* and child
objects, simply use the standard qfun (not qfun* as above), qget etc.

You can't use qoverride for external Qt/C++ classes.

The class name returned by qt-object-name is the first vanilla Qt class
encountered walking up the super classes; in this example, *qt-main* is shown of
type "QWidget", because the TrafficLight class directly inherits QWidget.

--

To prepare a Qt/C++ project to be linked with EQL (as in this example), you
need to make these 2 changes in your *.pro file:

    TEMPLATE = lib
    CONFIG   += staticlib

Following, include the above library name in your Qt_EQL.pro file:

    LIBS += -lmy_qt_app

Additionally, you need to adapt the main.cpp, as shown in this example,
including Qt header file(s), creating the Qt main class, calling EQL.exec() etc.

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
