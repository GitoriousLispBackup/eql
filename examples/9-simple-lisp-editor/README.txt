NOTES
=====

This is currently only an experimental snapshot of a simple "scratch buffer"
like editor.

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

"Eval Region" note: (see initial status-bar message)
Remember to change to the desired package prior to eval anything.

The "Save and Run" action (Ctrl+R) will load the current code in the local
Lisp server process.

Qt events are processed natively (no performance loss!), while keeping
your program interactive (you can send any command using "Eval Region").

The local Lisp server accepts keyboard input only when breaking into the
debugger. But you obviously can stop the server (Ctrl+C) and continue
(:c at the command prompt) at any time.
