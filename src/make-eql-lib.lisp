(unless (find :unicode *features*)
  (error "Please build ECL with unicode support (configure --enable-unicode)"))

(setf *break-on-signals* 'error)

(make-package :c)

(defparameter *lisp-files* (list #-win32 "serve-event" "util" "package" "ini"))

(dolist (file *lisp-files*)
  (compile-file (format nil "lisp/~a" file) :system-p t))

(c:build-static-library "ini"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "lisp/~a.~a" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_EQL")
