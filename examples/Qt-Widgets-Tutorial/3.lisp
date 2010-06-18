;;; Widgets Tutorial - Using Layouts

(in-package :eql)

(let ((window    (qnew "QWidget"
                       "windowTitle" "Window layout"))
      (label     (qnew "QLabel"
                       "text" "Name:"))
      (line-edit (qnew "QLineEdit"))
      (layout (qnew "QHBoxLayout")))
  (dolist (w (list label line-edit))
    (qfun layout "addWidget(QWidget*)" w))
  (qfun window "setLayout(QLayout*)" layout)
  (qfun window "show()"))
