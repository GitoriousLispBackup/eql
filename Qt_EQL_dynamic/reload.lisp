;;;
;;; N.B: LINUX ONLY! (OSX: unloading may not work; Windows MSVC: you need to substitute "make -C cpp/")
;;;
;;; Simple demo:
;;;
;;;    0) do: eql reload.lisp -qtpl
;;;
;;;    1) make some changes in "cpp/lib.h", "cpp/lib.cpp"
;;;    2) do: (recompile-c++)
;;;    3) goto 1)
;;;
;;; Call plugin functions like this:
;;;
;;;     (qfun* *c++* :qt "myFunction")
;;;

(in-package :eql-user)

(defvar *c++* (qload-c++ "eql_cpp"))

(defun recompile-c++ ()
  (qload-c++ "eql_cpp" :unload)
  (ext:run-program "make" '("-C" "cpp/") :output t) ; Unix "make"
  (qapropos nil (setf *c++* (qload-c++ "eql_cpp"))))
