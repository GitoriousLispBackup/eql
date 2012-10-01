(unless (find-package :eql)
  (error "Please use the EQL executable (see README)"))

(require :cmp)

(setf *break-on-signals* 'error)

(load "tr")

(unless (find-package :c)
  (make-package :c))

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *lisp-files*
  (list "my")
  "All Lisp files of the application.")

(dolist (f *lisp-files*)
  (let ((file (format nil "lisp/~A" f)))
    (load file)
    (compile-file file :system-p t)))

(c:build-static-library "my_lib"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "lisp/~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_app")

(eql:qq)
