NOTES
=====

Run the editor:
  
  eql run.lisp (assuming the EQL exe in your path)

The main motivation behind this (experimental!) editor is the need for a
popup completor for the (huge) Qt library.

So, this editor is not meant to substitute your standard Lisp environment.
Instead, if one needs to write a GUI using EQL, this could be a convenient
alternative to edit the GUI related stuff.

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

(The below is currently *very* *experimental*.)

The "Save and Run" action (Ctrl+R) will run your code in an independent
EQL Lisp process.

On errors, instead of entering the ECL debugger, the offending region will
be marked red (that is, in cases where ECL gives us this hint), and a
simple error message will be shown in the status-bar.
Additionally, some debug output will be displayed in the console window.

A simple "Eval Region" is implemented too, see status-bar note on startup.



BUILD NOTES
===========

If you really want to make an executable of this experimental(!) editor:

eql make-editor-lib.lisp
qmake
make (MSVC: nmake)

