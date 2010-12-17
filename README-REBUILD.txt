REBUILD STEPS
=============

Change to eql/src/ and do:

1) remove the directory tmp/

2) ecl -shell make-eql-lib.lisp

3) qmake, make (MSVC: nmake) in this order:

    eql_lib.pro
    eql_exe.pro

    module_network.pro
    module_...
