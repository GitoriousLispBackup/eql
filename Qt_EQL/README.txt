INTRO
=====

This is a simple example of embedding EQL in existing Qt/C++ projects.
So, after statically linking a Qt/C++ application to EQL, you can:
  - call C++ from Lisp
  - call Lisp from C++

For interactive development there are 2 alternatives:

1) Slime

2) The simple (not really stable) Lisp editor from example 9



BUILD (MSVC: nmake instead of make)
=====

    ALTERNATIVE 1: Slime

        a) Qt/trafficlight.pro

        b) Qt_EQL_Slime.pro


    ALTERNATIVE 2: Simple Lisp Editor (example 9):

        a) Qt/trafficlight.pro

        b) Qt_EQL.pro

        c) in eql/examples/9-simple-lisp-editor/:

           $ eql make-local-server-fasl.lisp
           $ eql make-editor-fasl.lisp

           copy both:
               eql-local-server.fas
               eql-editor.fas
           from: eql/examples/9-simple-lisp-editor/
           to:   eql/Qt_EQL/EQL/



RUN
===       

    ALTERNATIVE 1: Slime (see "eql/doc/Slime.htm")

        start the swank server using the Qt_EQL (instead of the EQL) executable

           ./Qt_EQL ~/slime/eql-start-swank.lisp


    ALTERNATIVE 2: Simple Lisp Editor (example 9):
        
        1) ./Qt_EQL

        2) in EQL/:

           $ eql eql-editor.fas trafficlight.lisp

           eval the form:
           (in-package :trafficlight)

           just play around with "eval region"...



--

See Qt/trafficlight.cpp:eql_fun() for an example how to call Lisp from C++.

The syntax is like this:

    QVariant ret =                     // return value; optional

    eql_fun("my-package:my-function",

            QVariant::String,          // return type; optional
                                       // for all return types, see: ecl_fun.cpp:toQVariant()

            Q_ARG(QWidget*, this),     // for all argument types, see: ecl_fun.cpp:to_lisp_arg()
            Q_ARG(QStringList, list),
            Q_ARG(int, maximum()));

You may pass up to 10 arguments. The return value/type are optional.
If you want to return a Qt object, pass QMetaType::VoidStar as type specifier,
and cast the return value like this:

    QWidget* w = Q_PTR(QWidget*, ret);

--

The variable eql:*qt-main* is bound to the main Qt widget.

To get the 3 child widgets, identified by QObject::objectName(), do:

    (qfind-child *qt-main* "red")
    (qfind-child *qt-main* "yellow")
    (qfind-child *qt-main* "green")

From Lisp you can call: (note QFUN+)

    (qfun+ *qt-main* "stop")
    (qfun+ *qt-main* "start")

alternatively:

    (! "stop"  (:qt *qt-main*))
    (! "start" (:qt *qt-main*))

This is possible because these 2 methods are declared Q_INVOKABLE
in Qt/trafficlight.h.

So, in order to call either methods declared Q_INVOKABLE, or user defined
signals/slots, use qfun+ (to avoid name clashes with ordinary Qt methods).

To list all user defined properties, methods, signals, slots of a class
defined in C++, see the special usage of qapropos (passing an object instead
of a class name).

For calling generic functions, signals, slots from *qt-main* and child
objects, simply use the standard qfun.

All of: qconnect, qget, qset don't need this distinction.

You (quite obviously) can't use qoverride for external Qt/C++ classes (to do
the equivalent, simply call a Lisp function from an overridden method in C++).

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
