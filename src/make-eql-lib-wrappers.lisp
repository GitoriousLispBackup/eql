#-eql
(error "Please use the EQL executable to run this file")

(require :cmp)

(defparameter *lisp-files* (list "x" "package" "ini" "enums1" "enums2" "enums3" "special-extensions" "all-wrappers"))

(compile-file "lisp/all-wrappers.lisp" :system-p t)

(c:build-static-library "ini"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "lisp/~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_EQL")

(eql:qq)

