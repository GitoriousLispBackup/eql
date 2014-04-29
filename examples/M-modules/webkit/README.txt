EQL WebKit examples
===================

If you already know Common Lisp, and have some basic knowledge of
Html/JavaScript, you can easily create a GUI, without learning much of
Qt, and without relying on a web-server.

A list of features:

1) full Lisp access to QtWebKit, see e.g. QWebElement in Qt Assistant;
   a simple example:

       document.getElementById("x")        // JavaScript
       (! "findFirstElement" (frame) "#x") ;  Lisp

   (passing QWebElements between JavaScript and Lisp is just native)

2) JavaScript / Lisp bridge: call Lisp functions directly from Html/JS;
   see QWebInspector [Scripts] and [Console] for debugging and executing JS;
   (test your Lisp functions by directly calling them from the QWebInspector
   console).

3) embed your own custom QWidgets in Html (see "plugin-widget" example),
   as they integrate natively here

