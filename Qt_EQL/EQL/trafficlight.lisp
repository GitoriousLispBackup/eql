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
      ("end"))))

(defun run ()
  (qfun *qt-main* "resize" '(110 300))
  (qfun *qt-main* "show"))

(run)

;;; Example using QVariantList
;;;
;;; Passes a QVariant list to C++ (important: use QLET here!).
;;; Returns a QVariant list translated to Lisp objects.
;;;
;;; see ../Qt/trafficlight.h: callQt()

(defun call-qt ()
  (qlet ((a "QVariant(QString)" "hello from C++") ; string will be shown in C++ message box
         (b "QVariant(int)" 42)
         (c "QVariant(double)" pi)
         (d "QVariant(QByteArray)" (vector -50 0 50)))
    (qmsg (qfun+ *qt-main* "callQt" (list a b c d)))))
