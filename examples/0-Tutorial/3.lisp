;;; Ported Qt Widgets Tutorial - Using Layouts

(in-package :eql-user)

(let ((window    (qnew "QWidget"
                       "windowTitle" "Window layout"))
      (label     (qnew "QLabel"
                       "text" "Name:"))
      (line-edit (qnew "QLineEdit"))
      (layout    (qnew "QHBoxLayout")))
  (dolist (w (list label line-edit))
    (qfun layout "addWidget" w))
  (qfun window "setLayout" layout)
  (qfun window "show"))
