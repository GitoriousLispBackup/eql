GENERATION OF C++ GLUE CODE
===========================


1) Add a special documentation string (first line) in the
   functions you want to call from JavaScript:

   (defun my-function (web-element arguments)
     "Qt: void myFunction(QWebElement, QVariantList)" 
     ...)

2) Run: eql qt.lisp

3) Build library in "lib/".


(More complex C++ glue code can be added manually in "lib/",
e.g. default/optional values.)

