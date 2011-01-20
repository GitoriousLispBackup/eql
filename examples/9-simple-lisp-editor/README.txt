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

Please see the context menu of the editor window for generic editor commands
(offered by Qt, which include some other commands too, like Ctrl+<arrow key>).

Qt events are processed natively through QApplication::exec(), while keeping
your program interactive (no performance loss).

"Eval Region" note: (see initial status-bar message)
Remember to change to the desired package prior to eval anything.

On errors, the local Lisp server will pop up a debug dialog, asking for an
ECL debug command.

If you want to pause/continue the local-server process, use the usual Ctrl+C
(terminal command) and :c (ECL command).

The "Save and Run" action (Ctrl+R) will load the current code in the local
Lisp server process (if you don't see the application window, it might be
in the background. Use your taskbar to show it).

When using "Save and Run", on errors, after the local-server entered the
debugger, you can enter the ECL debugger command :f, which will send the
position of the offending region to the editor, and it will be marked red.

Closing & re-opening the editor does not affect the local-server process.
You may even open multiple editor instances, which will all connect to the
same local-server.
