;;; copyright (c) 2010 power4projects software
;;;
;;; This is (kind of) a port of the Qt Script Example "Clock"

(defpackage :clock
  (:use :common-lisp :util :eql)
  (:export
   #:*clock*
   #:start))

(in-package :clock)

(defconstant +antialiasing+ 1 "render hint")

(defparameter *clock* (qnew "QWidget(QWidget*,Qt::WindowFlags)" nil "WindowStaysOnTopHint"
                            "size" (list 170 170)
                            "pos" (list 50 50)))

(defun start ()
  (let ((timer (qnew "QTimer")))
    (qconnect timer "timeout()" #'(lambda () (qfun *clock* "update")))
    (qoverride *clock* "paintEvent(QPaintEvent*)" 'paint)
    (qfun timer "start" 500)
    (qfun *clock* "show")))

(defun pen (width &optional (color "black"))
  (let ((pen (qnew "QPen")))
    (do- (qfun pen)
      ("setCapStyle" "RoundCap")
      ("setWidth" width)
      ("setColor" color))
    pen))

(defun brush (color)
  (let ((brush (qnew "QBrush")))
    (do- (qfun brush)
      ("setStyle" "SolidPattern")
      ("setColor(QColor)" color))
    brush))

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
    (flet ((! (&rest rest)
             (apply #'qfun painter rest)))
      (macrolet ((with-save (() &body body)
                   `(progn (! "save") ,@body (! "restore"))))
        (! "begin(QWidget*)" *clock*)
        (let* ((size  (qget *clock* "size"))
               (scale (/ (apply #'min size) 170)))
          (! "translate(QPointF)" (mapcar #'(lambda (x) (/ x 2)) size))
          (! "scale" scale scale))
        (! "rotate" -90)
        (! "setRenderHint" +antialiasing+)
        (! "setPen(QPen)" pen-clock)
        (! "setBrush(QBrush)"  brush-clock)
        (! "drawEllipse(QRect)" '(-75 -75 150 150))
        (! "setPen(QPen)" pen-hour-marks)
        (dotimes (n 12)
          (! "rotate" 30)
          (! "drawLine(QLine)" '(55 0 65 0)))
        (! "setPen(QPen)" pen-minute-marks)
        (dotimes (n 60)
          (! "rotate" 6)
          (! "drawLine(QLine)" '(63 0 65 0)))
        (multiple-value-bind (sec min hour)
            (get-decoded-time)
          (with-save ()
            (! "rotate" (+ (* 30 hour) (/ min 2)))
            (! "setPen(QPen)" pen-hour)
            (! "setOpacity" 0.5)
            (! "drawLine(QLine)" '(-10 0 36 0)))
          (with-save ()
            (! "rotate" (* 6 min))
            (! "setPen(QPen)" pen-minute)
            (! "setOpacity" 0.5)
            (! "drawLine(QLine)" '(-15 0 65 0)))
          (with-save ()
            (! "rotate" (* 6 sec))
            (! "setPen(QPen)" pen-second)
            (! "setBrush(QBrush)" brush-second)
            (! "drawEllipse(QRectF)" '(-1.5 -1.5 3 3))
            (! "setOpacity" 0.7)
            (! "drawLine(QLine)" '(-15 0 52 0))
            (! "drawEllipse(QRect)" '(53 -4 8 8))))
        (! "end")))
    t)) ; overridden

(start)
