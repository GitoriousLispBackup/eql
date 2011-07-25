HOWTO
=====


If you miss a Qt class, add it in ./my-class-lists/<module>/:
    q-names.lisp: QObject derived classes
    n-names.lisp: non QObject derived classes

Run these commands in order: (after setting the *qt-html-documentation-path* in share.lisp)
    ecl -shell parse.lisp
    ecl -shell generate.lisp

Take a look at missing-types.txt: 
These types are currently not available, as they must be integrated manually (by the author).

Make a clean rebuild of the project (see README-REBUILD.txt).
