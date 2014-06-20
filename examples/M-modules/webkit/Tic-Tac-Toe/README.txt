WEBKIT APP DEMO
===============

Create a basic Html skeleton of your GUI, setting any
Html properties/callbacks conveniently from Lisp.

No Qt knowledge needed, just use the convenience functions
in "h-utils.lisp".


SLIME / THREADS NOTE
====================

Using the functions in "h-utils.lisp", you don't need to
care about "eval in GUI thread" (since all "h-utils" EQL
functions are already wrapped in QRUN*).

