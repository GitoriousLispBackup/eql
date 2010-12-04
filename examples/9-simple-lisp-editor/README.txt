NOTES
=====

The main motivation behind this editor is the need for a popup completor
for the (huge) Qt library.

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

The "Save and Run" action (Ctrl+R) will start an independent EQL process
running your code.

During execution the editor window will be shown minimized.
After closing your application window, the editor will be shown again.

On errors, the usual ECL debugger will be entered, from which you exit with:

  (eql:qq)

The above command will act only to the process running your code, and not
to the process running the editor.
