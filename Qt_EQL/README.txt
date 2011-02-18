[work in progress...]

Very short description:

For interactive development, the local-server is integrated in
EQL/trafficlight.lisp (see make-local-server-fasl.lisp from example 9).
Use the editor from example 9 for eval region etc.

See Qt/trafficlight.cpp:eql_fun() for an example of how to call a Lisp
function from Qt.

The parameter *qt-main* is bound to the main Qt widget.

To get the 3 child widgets, do:

    (qfind-child *qt-main* "red")
    (qfind-child *qt-main* "yellow")
    (qfind-child *qt-main* "green")
