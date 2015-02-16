;;; "Clock" example, directly loadable into any CL + CFFI.
;;;
;;; Slime note: for 'eval region', wrap #Q in PROGN (see DEFPARAMETER).

(load "q")

#q
(defpackage :clock
  (:use :common-lisp :eql)
  (:export
   #:*clock*
   #:start))

#q
(in-package :clock)

(progn #q (defparameter *show-seconds* t))
(progn #q (defparameter *show-minutes* t))

#q
(defvar *clock* (qnew "QWidget(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|
                      "size" '(170 170)
                      "pos" '(50 50)))

#q
(defun start ()
  (let ((timer (qnew "QTimer(QObject*)" *clock*)))
    (qconnect timer "timeout()" (lambda () (|update| *clock*)))
    (qoverride *clock* "paintEvent(QPaintEvent*)" 'paint)
    (|start| timer 500)
    (x:do-with *clock* |show| |raise|)))

#q
(defun pen (width &optional (color "black"))
  (x:let-it (qnew "QPen")
    (x:do-with x:it
      (|setCapStyle| |Qt.RoundCap|)
      (|setWidth| width)
      (|setColor| color))))

#q
(defun brush (color)
  (x:let-it (qnew "QBrush")
    (x:do-with x:it
      (|setStyle| |Qt.SolidPattern|)
      (|setColor| color))))

(progn #q (defparameter *pen-clock*        (pen 8 "steelblue")))
(progn #q (defparameter *pen-hour-marks*   (pen 4)))
(progn #q (defparameter *pen-minute-marks* (pen 2 "steelblue")))
(progn #q (defparameter *pen-hour*         (pen 7)))
(progn #q (defparameter *pen-minute*       (pen 5)))
(progn #q (defparameter *pen-second*       (pen 2 "red")))
(progn #q (defparameter *brush-clock*      (brush "white")))
(progn #q (defparameter *brush-second*     (brush "gold")))

#q
(defun paint (ev)
  (macrolet ((with-save (() &body body)
               `(progn (|save| p) ,@body (|restore| p))))
    (qlet ((p "QPainter(QWidget*)" *clock*))
      (let* ((size (|size| *clock*))
             (scale (/ (apply 'min size) 170)))
        (|translate| p (mapcar (lambda (x) (/ x 2)) size))
        (|scale| p scale scale))
      (|rotate| p -90)
      (|setRenderHint| p |QPainter.Antialiasing|)
      (|setPen| p *pen-clock*)
      (|setBrush|  p *brush-clock*)
      (|drawEllipse| p '(-75 -75 150 150))
      (|setPen| p *pen-hour-marks*)
      (dotimes (n 12)
        (|rotate| p 30)
        (|drawLine| p '(55 0 65 0)))
      (|setPen| p *pen-minute-marks*)
      (dotimes (n 60)
        (|rotate| p 6)
        (|drawLine| p '(63 0 65 0)))
      (multiple-value-bind (sec min hour)
          (get-decoded-time)
        (with-save ()
          (|rotate| p (+ (* 30 hour) (/ min 2)))
          (|setPen| p *pen-hour*)
          (|setOpacity| p 0.5)
          (|drawLine| p '(-10 0 36 0)))
        (when *show-minutes*
          (with-save ()
            (|rotate| p (* 6 min))
            (|setPen| p *pen-minute*)
            (|setOpacity| p 0.5)
            (|drawLine| p '(-15 0 65 0))))
        (when *show-seconds*
          (with-save ()
            (|rotate| p (* 6 sec))
            (|setPen| p *pen-second*)
            (|setBrush| p *brush-second*)
            (|drawEllipse| p '(-1.5 -1.5 3 3))
            (|setOpacity| p 0.7)
            (|drawLine| p '(-15 0 52 0))
            (|drawEllipse| p '(53 -4 8 8))))))))

#q
(start)
