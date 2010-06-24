(make-package :c)

(defvar *lisp-files* (list "my")) ; list all files of your application

(dolist (file *lisp-files*)
  (compile-file (format nil "lisp/~a" file) :system-p t))

(c:build-static-library "my_lib"
                        :lisp-files (mapcar #'(lambda (file)
                                                (format nil "lisp/~a.~a" file #+win32 "obj" #-win32 "o"))
                                            *lisp-files*)
                        :init-name "ini_app")

(eql:qq)
