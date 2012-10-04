;;;
;;; Simple demo:
;;;    0) load this file (from this directory)
;;;
;;;    1) make some changes in "cpp/lib.h", "cpp/lib.cpp"
;;;    2) compile the library
;;;    3) goto 1)
;;;
;;; Call plugin functions like this:
;;;     (qfun* *c++* :qt "myFunction")
;;;

(in-package :eql-user)

(qauto-reload-c++ *c++* "eql_cpp")

;; add notifier

(setf *c++-reloaded*
      (lambda (variable plugin)
        (format t "~%~%*** PLUGIN ~S CURRENTLY OFFERS: ***" plugin)
        (qapropos nil (symbol-value variable))))

