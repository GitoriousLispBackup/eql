(unless (find :unicode *features*)
  (error "Please build ECL with unicode support (configure --enable-unicode)"))

(require :cmp)

(setf *break-on-signals* 'error)

(unless (find-package :c)
  (make-package :c))

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *lisp-files* (list "x" "package" "ini" "enums1" "enums2" "special-extensions"))

(dolist (f *lisp-files*)
  (let ((file (format nil "lisp/~A" f)))
    (when (probe-file file)
      (delete-file (format nil "~A.~A" file #+msvc "obj" #-msvc "o")))
    (compile-file file :system-p t)))

(c:build-static-library "ini"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "lisp/~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_EQL")
