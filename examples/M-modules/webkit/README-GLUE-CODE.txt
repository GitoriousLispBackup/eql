GENERATION OF C++ GLUE CODE
===========================


1) Add a special documentation string (first line) in the
   functions you want to call from JavaScript:

   (defun my-function (web-element arguments)
     "qt: void myFunction(QWebElement, QVariantList)" 
     ...)

2) Run: eql qt.lisp

3) Build library in "lib/".

