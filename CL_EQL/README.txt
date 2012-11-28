PREAMBLE
========

This is just an experimental idea: please don't expect too much from it!


SO, WHAT IS IT?
===============

A simple client for EQL local-server, usable from any CL + CFFI.

See examples in "q.lisp" and "example.lisp".


BUILD / RUN
===========

- build plugin in "cpp/"
- run: 'eql local-server.lisp' (example 9)
       (optionally build/run executable in "<example 9>/exe/")
- load "q.lisp" (requires CFFI)


WHY?
====

Say you have a non threaded CL, and want to use a GUI from Slime without
any setup/run/crash hassle.


THE #q READER MACRO
===================

This reader macro executes the following expression remotely in EQL,
passing back any return value(s).
So, in most cases you won't even notice that the code is executed remotely.

Example:

  (* 3 #q (qmsg (+ 2 1)))


(ev): EVENT DRIVEN EVAL REQUESTS FROM EQL
=========================================

See "#?" in "example.lisp" for passing data to EQL functions at execution time.

The function "(ev)" is needed in such cases, because we need a server listening
to requests from EQL (see "cpp/*").
In order to gracefully stop "(ev)", use the Qt button "Back to REPL" shown at
the top of the desktop while "(ev)" is running.

If you don't need to pass data at execution time, you can forget about "(ev)"
(that is, you will never need to block your REPL).

