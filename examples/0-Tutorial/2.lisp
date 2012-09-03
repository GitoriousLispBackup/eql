;;; Ported Qt Widgets Tutorial - Child Widgets

(in-package :eql-user)

(let ((window (qnew "QWidget"
                    "size" (list 320 240)
                    "windowTitle" "Child widget"))
      (button (qnew "QPushButton"
                    "text" "Press me"
                    "pos" (list 100 100))))
  (qfun button "setParent" window)
  (qfun window "show"))
