REBUILD STEPS
=============

Change to eql/src/ and do:

1) remove the directory tmp/

2) ecl -shell make-eql-lib.lisp

3) qmake, make (MSVC: nmake) in this order:

    first_metatype_id.pro (on every change of Qt lib; run resulting exe afterwards)

    eql_lib.pro
    eql_exe.pro

    module_network.pro
    module_...



NOTES
=====

If you forget to build & run the first_metatype_id after changing your Qt
version, EQL will just build fine, but you will see very strange error
messages when running Lisp code.

This id changes for example when switching from Qt4.6 to Qt4.7.
