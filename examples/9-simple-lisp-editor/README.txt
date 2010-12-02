NOTES
=====

The main motivation behind this editor is the need for a popup completor for the (huge) Qt library.

So, this editor is not meant to substitute your standard Lisp environment.
Instead, if one needs to write a GUI using EQL, this could be a convenient alternative to edit the GUI related stuff.

The completor currently works for:

  qnew
  qlet
  qset
  qget
  qfun
  qenum
  qconnect
  qoverride
  qfind-child

It tries to be intelligent, for example:

  - it looks for the type (Qt class) for both global and local variables
  - it automatically cuts optional type lists in Qt function calls (qfun)

