(unless (find-package :eql)
  (error "Please use the EQL executable (see README)"))

(setf *break-on-signals* 'error)

(load "../../my_app/tr")

(unless (find-package :c)
  (make-package :c))

(defparameter *lisp-files*
  (list "editor"))

(dolist (file *lisp-files*)
  (load file)
  (compile-file file :system-p t))

(c:build-static-library "editor_lib"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_app")

(eql:qq)
