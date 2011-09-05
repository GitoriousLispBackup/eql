(unless eql:*slime-mode*
  ;; optional: Lisp server for listening to an editor
  (let ((file "EQL/eql-local-server.fas"))                  ; see example 9: make-local-server-fasl.lisp
    (if (probe-file file)
        (progn
          (load file)                 
          (eql:qset (eql:qapp) "quitOnLastWindowClosed" t)) ; to exit "local-server"
        (warn "eql-local-server.fas not found."))))

(setf eql:*break-on-errors* t) ; see (documentation 'eql:*break-on-errors* 'variable)

(defpackage :trafficlight
  (:use :common-lisp :eql)
  (:export
   #:run
   #:paint-event))

(in-package :trafficlight)

(let ((painter (qnew "QPainter"))
      (pen (qnew "QPen"))
      (brush (qnew "QBrush(Qt::BrushStyle)" |Qt.SolidPattern|)))
  (defun paint-event (widget color width height)
    ;;(x:d widget (qget widget "objectName") color) ; debug output
    ;;(local-server:output)                         ; get output buffer (for editor output widget)
    (qfun brush "setColor(QColor)" color)
    (qfun pen "setColor" "steelblue")
    (qfun pen "setWidth" 5)
    (x:do-with (qfun painter)
      ("begin(QWidget*)" widget)
      ("setRenderHint" |QPainter.Antialiasing|)
      ("setPen(QPen)" pen)
      ("setBrush(QBrush)" brush)
      ;;("drawRect(QRect)" (list 5 5 (- width 10) (- height 10))) ; square
      ("drawEllipse(QRect)" (list 5 5 (- width 10) (- height 10))) ; circle
      "end")))

(defun run ()
  (qfun *qt-main* "resize" '(110 300))
  (qfun *qt-main* "show"))

(unless *slime-mode*
  (run))
