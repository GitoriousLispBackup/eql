;;;
;;; OSX note: unloading may not work!
;;;
;;; Simple demo:
;;;
;;;    0) do: eql reload.lisp -qtpl
;;;
;;;    1) make some changes in "cpp/lib.h", "cpp/lib.cpp"
;;;    2) do: (recompile-c++)
;;;    3) goto 1)
;;;
;;; Call plugin functions using QFUN+:
;;;
;;;     (qfun+ *c++* "myFunction")
;;;

(in-package :eql-user)

(defvar *c++* (qload-c++ (in-home "Qt_EQL_dynamic/eql_cpp")))

(defun recompile-c++ ()
  (qload-c++ (in-home "Qt_EQL_dynamic/eql_cpp")
             :unload)
  (ext:run-program #+msvc "make.bat" #-msvc "make"
                   #+msvc nil        #-msvc '("-C" "cpp/")
                   :output t)
  (setf *c++* (qload-c++ (in-home "Qt_EQL_dynamic/eql_cpp")))
  (assert (qt-object-p *c++*))
  (qapropos nil *c++*))
