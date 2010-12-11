NOTES
=====

Run the editor:
  
  0) You'll need the :network module (see QREQUIRE).

  1) Run the independent local Lisp server:
      eql local-server

  2) Run the editor:
      eql editor

The main motivation behind this (experimental!) editor is the need for a
popup completor for the (huge) Qt library.

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



USAGE NOTES
===========

This is currently only an experimental snapshot of a simple "scratch buffer"
like editor.

"Eval Region" note: (see initial status-bar message)
Remember to change to the desired package prior to eval anything.
