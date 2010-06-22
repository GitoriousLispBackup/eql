;;; Widgets Tutorial - Creating a Window

(in-package :eql)

(let ((window (qnew "QWidget"
                    "size" (list 320 240)
                    "windowTitle" "Top-level widget")))
  (qfun window "show"))
