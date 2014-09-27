#-eql
(error "Please use the EQL executable to run this file")

(require :cmp)

(setf *break-on-signals* 'error)

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *all-wrappers*'("all-wrappers-1" "all-wrappers-2" "all-wrappers-3" "all-wrappers-4"
                              "all-wrappers-5" "all-wrappers-6" "all-wrappers-7" "all-wrappers-8"))

(defparameter *lisp-files*   (append '("x" "package" "ini" "enums1" "enums2" "enums3" "special-extensions")
                                     *all-wrappers*))

(dolist (file *all-wrappers*) 
  (compile-file (format nil "lisp/~A.lisp" file) :system-p t))

(c:build-static-library "ini"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "lisp/~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_EQL")

(eql:qq)

