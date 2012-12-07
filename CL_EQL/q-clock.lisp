;;; "Clock" example, directly loadable into any CL + CFFI.
;;;
;;; Slime note: for 'eval region', wrap #Q in PROGN (see function PAINT).

(load "q.lisp")

#q
(defpackage :clock
  (:use :common-lisp :eql)
  (:export
   #:*clock*
   #:start))

#q
(in-package :clock)

#q
(defvar *clock* (qnew "QWidget(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|
                      "size" (list 170 170)
                      "pos" (list 50 50)))

#q
(defun start ()
  (let ((timer (qnew "QTimer(QObject*)" *clock*))) ; parent: see STOP-ALL-TIMERS in "local-server.lisp"
    (qconnect timer "timeout()" (lambda () (qfun *clock* "update")))
    (qoverride *clock* "paintEvent(QPaintEvent*)" 'paint)
    (qfun timer "start" 500)
    (qfun *clock* "show")
    (qfun *clock* "raise")))

#q
(defun pen (width &optional (color "black"))
  (let ((pen (qnew "QPen")))
    (qfun pen "setCapStyle" |Qt.RoundCap|)
    (qfun pen "setWidth" width)
    (qfun pen "setColor" color)
    pen))

#q
(defun brush (color)
  (let ((brush (qnew "QBrush")))
    (qfun brush "setStyle" |Qt.SolidPattern|)
    (qfun brush "setColor(QColor)" color)
    brush))

(progn ; for 'eval region' in Slime
  #q
  (let ((painter (qnew "QPainter"))
        (pen-clock        (pen 8 "steelblue"))
        (pen-hour-marks   (pen 4))
        (pen-minute-marks (pen 2 "steelblue"))
        (pen-hour         (pen 7))
        (pen-minute       (pen 5))
        (pen-second       (pen 2 "red"))
        (brush-clock  (brush "white"))
        (brush-second (brush "gold")))
    (defun paint (ev)
      (flet ((p (&rest args)
               (apply 'qfun painter args)))
        (macrolet ((with-save (() &body body)
                     `(progn (p "save") ,@body (p "restore"))))
          (p "begin(QWidget*)" *clock*)
          (let* ((size (qget *clock* "size"))
                 (scale (/ (apply 'min size) 170)))
            (p "translate(QPointF)" (mapcar (lambda (x) (/ x 2)) size))
            (p "scale" scale scale))
          (p "rotate" -90)
          (p "setRenderHint" |QPainter.Antialiasing|)
          (p "setPen(QPen)" pen-clock)
          (p "setBrush(QBrush)"  brush-clock)
          (p "drawEllipse(QRect)" '(-75 -75 150 150))
          (p "setPen(QPen)" pen-hour-marks)
          (dotimes (n 12)
            (p "rotate" 30)
            (p "drawLine(QLine)" '(55 0 65 0)))
          (p "setPen(QPen)" pen-minute-marks)
          (dotimes (n 60)
            (p "rotate" 6)
            (p "drawLine(QLine)" '(63 0 65 0)))
          (multiple-value-bind (sec min hour)
              (get-decoded-time)
            (with-save ()
              (p "rotate" (+ (* 30 hour) (/ min 2)))
              (p "setPen(QPen)" pen-hour)
              (p "setOpacity" 0.5)
              (p "drawLine(QLine)" '(-10 0 36 0)))
            (with-save ()
              (p "rotate" (* 6 min))
              (p "setPen(QPen)" pen-minute)
              (p "setOpacity" 0.5)
              (p "drawLine(QLine)" '(-15 0 65 0)))
            (with-save ()
              (p "rotate" (* 6 sec))
              (p "setPen(QPen)" pen-second)
              (p "setBrush(QBrush)" brush-second)
              (p "drawEllipse(QRectF)" '(-1.5 -1.5 3 3))
              (p "setOpacity" 0.7)
              (p "drawLine(QLine)" '(-15 0 52 0))
              (p "drawEllipse(QRect)" '(53 -4 8 8))))
          (p "end"))))))

#q
(start)

