(unless (find-package :eql)
  (error "Please use the eql executable (see README)"))

(setf *break-on-signals* 'error)

(load "tr")

(make-package :c)

(defparameter *lisp-files* (list "my")) ; list all files of your application

(dolist (f *lisp-files*)
  (let ((file (format nil "lisp/~a" f)))
    (load file)
    (compile-file file :system-p t)))

(c:build-static-library "my_lib"
                        :lisp-files (mapcar #'(lambda (file)
                                                (format nil "lisp/~a.~a" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_app")

(eql:qq)
