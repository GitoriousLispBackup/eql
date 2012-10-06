BUILD / RUN
===========

Build the plugin in "cpp/" before running the examples.
See also description in "auto-reload.lisp".



NOTES
=====

This offers an easy way to dynamically integrate Qt/C++ code.

QAUTO-RELOAD-C++ can be used to have a really dynamic workflow (as in Lisp),
extended to your Qt/C++ plugin methods/signals/slots/properties.

The above means: if you recompile a plugin (e.g. after adding a new function),
it will be immediately available in Lisp.

Please note that the "QObject*" returned by the "ini()" function can be any
"QObject" inherited class.

So, this offers the same possibilities as found in the "Qt_EQL/" example,
(e.g. calling Lisp from C++), but with a better, really dynamic workflow.

