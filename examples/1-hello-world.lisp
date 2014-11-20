#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

;;; hello world

(in-package :eql-user)

(|show| (qnew "QLabel"
              "text" "<h1>hello world"
              "pos" '(50 50)))
