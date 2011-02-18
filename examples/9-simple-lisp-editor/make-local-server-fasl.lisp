(unless (find-package :eql)
  (error "Please use the EQL executable"))

(require :cmp)

(setf *break-on-signals* 'error)

(unless (find-package :c)
  (make-package :c))

(defparameter *lisp-files* '("input-hook" "top-level" "query-dialog" "debug-dialog" "settings" "local-server"))

(dolist (f *lisp-files*)
  (let ((file (format nil "~A.lisp" f)))
    (load file)
    (compile-file file :system-p t)))

(c:build-fasl "eql-local-server"
              :lisp-files (mapcar (lambda (file)
                                    (format nil "~A.~A" file #+msvc "obj" #-msvc "o"))
                                  *lisp-files*))

(dolist (file *lisp-files*)
  (delete-file (format nil "~A.~A" file #+msvc "obj" #-msvc "o")))

(eql:qq)
