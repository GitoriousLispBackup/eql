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

The main motivation behind this editor is the need for a popup completer
for the (huge) Qt library.

The completer currently works for:

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

Qt events are processed natively through QApplication::exec(), while keeping
your program interactive.

The local Lisp server accepts keyboard input only when breaking into the
debugger. But you obviously can stop the server (Ctrl+C) and continue
(:c at the command prompt) at any time.

Remember to always exit the debugger (e.g. ECL debugger command :q) before
sending another command from the editor.

"Eval Region" note: (see initial status-bar message)
Remember to change to the desired package prior to eval anything.

The "Save and Run" action (Ctrl+R) will load the current code in the local
Lisp server process (if you don't see the application window, it might be
in the background. Use your taskbar to show it).

When using "Save and Run", on errors, after the local-server entered the
debugger, you can enter the ECL debugger command :f, which will send the
position of the offending region to the editor, and it will be marked red.
