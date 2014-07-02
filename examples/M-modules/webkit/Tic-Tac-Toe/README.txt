WEBKIT APP DEMO
===============

After creating a basic Html skeleton of the GUI, any Html
properties/callbacks can be set from Lisp. 

No Qt knowledge required, just use the convenience functions
in "h-utils.lisp".


WEB ELEMENT FUNCTIONS
=====================

All QWebElement methods have convenience wrappers:

  (hget "*" :onclick)
  (geometry "#c1")


SLIME / THREADS NOTE
====================

Using the functions in "h-utils.lisp", you don't need to
care about "eval in GUI thread" (all EQL functions are wrapped
in QRUN*).

