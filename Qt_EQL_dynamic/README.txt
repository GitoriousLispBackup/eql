BUILD / RUN
===========

Build the plugins in "cpp/", "cpp_calling_lisp/" before running the examples.



NOTES
=====

This offers the same possibilities as found in the "Qt_EQL/" example,
but with a better, more dynamic workflow, and without the restriction of
"CONFIG += no_keywords" in your "*.pro" file.

So, integrating any existing Qt/C++ project is straightforward, since you can
call any property/method/slot/signal of any Qt class, and calling Lisp from
C++ is somehow more convenient than using the ECL C functions directly,
see example of calling FORMAT in "cpp_calling_lisp/lib.cpp".

Linux only: see also function QAUTO-RELOAD-C++.
