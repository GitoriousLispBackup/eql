PREAMBLE
========

This is an experimental idea: please don't expect too much from it!


SO, WHAT IS IT?
===============

A simple client for EQL local-server, usable from any CL + CFFI.

See examples in "q.lisp" and "example.lisp".


WHY?
====

Say you have a non threaded CL, and want to use a GUI in Slime without any
setup/run/crash hassle.


BUILD / RUN
===========

- build plugin in "cpp/"
- run: 'eql local-server.lisp' (example 9)
       (optionally build/run executable in "<example 9>/exe/")
- load "q.lisp" (requires CFFI)


THE '#q' READER MACRO
=====================

This reader macro executes the following expression remotely in EQL,
passing back any return value(s).
Unreadable objects (such as QT-OBJECT instances) are returned as strings.

So, in most cases you won't even notice that the code is executed remotely.

Example:

  (* 3 #q (qmsg (+ 2 1)))

It has to be a reader macro, because we don't want EQL code to be read in CL
(packages, symbols).


SLIME NOTES
===========

To enable "eval defun" / "eval region" for '#q', wrap it like so:

  (progn
    #q
    ...

Important "eval region" note:

On errors in EQL code, a debug dialog will be shown; after correcting
the error, you sometimes will need to do "eval region" twice to take effect
(in these cases, "eval region" will return NIL the first time).

(The following is required for e.g. SBCL, but not for e.g. ECL.)

If your CL has threads enabled, you need to set your Swank communication
style to either :sigio or :fd-handler in your ".swank.lisp" file
(style :spawn uses threads, and would crash together with '#q').

  #+sbcl (setf swank:*communication-style* :sigio)

Symbol completion works for all EQL symbols (including enums), because they
are read in in "q.lisp".

'QTimer' note:

In order to avoid recursive debug loops, all timers with a parent will be
stopped before showing the debug dialog.
On sending the next command to EQL, the timers will be restarted.


'(ev &optional no-button)': EVENT DRIVEN EVAL REQUESTS FROM EQL
===============================================================

See '?' in "example.lisp" for passing data to EQL functions at execution time.

The function '(ev)' is needed in such cases, because we need a server listening
to requests from EQL (see "cpp/*").

In order to gracefully stop '(ev)', use the Qt button "Back to REPL" shown at
the top of the desktop while '(ev)' is running (note also the 'no-button'
argument).

Inside of a '?' expression you can use commas (as with backquote) in order to
evaluate any argument, including the function symbol:

  ?(cl-function ,eql-var cl-var)

If you don't need to pass data at execution time, you can forget about '(ev)'
(that is, you will never need to block your REPL).


QHELP / QMSG
============

These are simple convenience functions, see "q.lisp".

  (qhelp "changed" "QLineEdit") ; see QAPROPOS
  (qmsg 'hello)                 ; message box


NOTES
=====

Tested in CLISP, ECL, SBCL.

See examples "q-clock.lisp" and "q-wiggly.lisp" if you want to run existing
EQL programs.

