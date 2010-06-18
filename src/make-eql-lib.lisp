;; dummies
(progn
  (make-package :c)
  (defun c::build-static-library ()))

(defparameter *lisp-files* (list #-win32 "serve-event" "util" "package" "ini"))

(dolist (file *lisp-files*)
  (compile-file (format nil "lisp/~a" file) :system-p t))

(c:build-static-library "eql"
                        :lisp-files (mapcar #'(lambda (file)
                                                (format nil "lisp/~a.~a" file #+win32 "obj" #-win32 "o"))
                                            *lisp-files*)
                        :init-name "ini_EQL")
