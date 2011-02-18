(progn
  (load "EQL/eql-local-server.fas")                 ; see example 9: make-local-server-fasl.lisp
  (eql:qset (eql:qapp) "quitOnLastWindowClosed" t)) ; to exit "local-server"

(defpackage :trafficlight
  (:use :common-lisp :eql)
  (:export
   #:paint-event))

(in-package :trafficlight)

(let ((painter (qnew "QPainter"))
      (pen (qnew "QPen"))
      (brush (qnew "QBrush(Qt::BrushStyle)" |Qt.SolidPattern|)))
  (defun paint-event (widget color width height)
    (qfun brush "setColor(QColor)" color)
    (qfun pen "setColor" "steelblue")
    (qfun pen "setWidth" 5)
    (x:do-with (qfun painter)
      ("begin(QWidget*)" widget)
      ("setRenderHint" |QPainter.Antialiasing|)
      ("setPen(QPen)" pen)
      ("setBrush(QBrush)" brush)
      ("drawEllipse(QRect)" (list 5 5 (- width 10) (- height 10)))
      ;;("drawRect(QRect)" (list 5 5 (- width 10) (- height 10)))
      "end")))
