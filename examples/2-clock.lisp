;;; This is (kind of) a port of the Qt Script Example "Clock"

(defpackage :clock
  (:use :common-lisp :eql)
  (:export
   #:*clock*
   #:start))

(in-package :clock)

(defvar *clock* (qnew "QWidget(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|
                      "size" '(170 170)
                      "pos" '(50 50)))

(defvar *show-seconds* t)
(defvar *show-minutes* t)

(defun start ()
  (let ((timer (qnew "QTimer(QObject*)" *clock*)))
    (qconnect timer "timeout()" (lambda () (! "update" *clock*)))
    (qoverride *clock* "paintEvent(QPaintEvent*)" 'paint)
    (! "start" timer 500)
    (x:do-with *clock* "show" "raise")))

(defun pen (width &optional (color "black"))
  (x:let-it (qnew "QPen")
    (x:do-with x:it
      ("setCapStyle" |Qt.RoundCap|)
      ("setWidth" width)
      ("setColor" color))))

(defun brush (color)
  (x:let-it (qnew "QBrush")
    (x:do-with x:it
      ("setStyle" |Qt.SolidPattern|)
      ("setColor(QColor)" color))))

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
    (flet ((! (&rest args)
             (apply 'qfun painter args)))
      (macrolet ((with-save (() &body body)
                   `(progn (! "save") ,@body (! "restore"))))
        (! "begin(QWidget*)" *clock*)
        (let* ((size (qget *clock* "size"))
               (scale (/ (apply 'min size) 170)))
          (! "translate(QPointF)" (mapcar (lambda (x) (/ x 2)) size))
          (! "scale" scale scale))
        (! "rotate" -90)
        (! "setRenderHint" |QPainter.Antialiasing|)
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
          (when *show-minutes*
            (with-save ()
              (! "rotate" (* 6 min))
              (! "setPen(QPen)" pen-minute)
              (! "setOpacity" 0.5)
              (! "drawLine(QLine)" '(-15 0 65 0))))
          (when *show-seconds*
            (with-save ()
              (! "rotate" (* 6 sec))
              (! "setPen(QPen)" pen-second)
              (! "setBrush(QBrush)" brush-second)
              (! "drawEllipse(QRectF)" '(-1.5 -1.5 3 3))
              (! "setOpacity" 0.7)
              (! "drawLine(QLine)" '(-15 0 52 0))
              (! "drawEllipse(QRect)" '(53 -4 8 8)))))
        (! "end")))))

(start)
