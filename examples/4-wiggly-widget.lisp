;;; This is a port of the Qt Example "Wiggly Widget"

(defpackage :wiggly-widget
  (:nicknames :wiggly)
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :wiggly-widget)

(defvar *sinus* #(0 38 71 92 100 92 71 38 0 -38 -71 -92 -100 -92 -71 -38))

(defvar *wiggly* (qnew "QWidget"
                       "font" (x:let-it (! "font" "QApplication")
                                (! "setPointSize" x:it
                                   (+ 20 (! "pointSize" x:it))))
                       "autoFillBackground" t))

(defvar *edit*   (qnew "QLineEdit" "alignment" |Qt.AlignCenter|))
(defvar *timer*  (qnew "QTimer"))

(defparameter *step* 0)

(defun start ()
  (! "setBackgroundRole" *wiggly* |QPalette.Light|)
  (let ((dlg (qnew "QDialog" "size" '(600 200)))
        (vbox (qnew "QVBoxLayout")))
    (! "setLayout" dlg vbox)
    (dolist (w (list *wiggly* *edit*))
      (! "addWidget" vbox w))
    (qconnect *timer* "timeout()" 'timeout)
    (qoverride *wiggly* "paintEvent(QPaintEvent*)" 'paint)
    (! "start" *timer* 50)
    (qset *edit* "text" "= never odd or even =")
    (x:do-with dlg "show" "raise")))

(defun paint (ev)
  (qlet ((painter "QPainter(QWidget*)" *wiggly*) ; local QPainter variable: no need to call "begin", "end"
         (pen "QPen")
         (metrics "QFontMetrics(QFont)" (qget *wiggly* "font")))
    (let* ((txt (qget *edit* "text"))
           (x (/ (- (qget *wiggly* "width")
                    (! "width(QString)" metrics txt))
                 2))
           (y (/ (- (+ (qget *wiggly* "height") (! "ascent" metrics))
                    (! "descent" metrics))
                 2))
           (h (! "height" metrics)))
      (dotimes (i (length txt))
        (let ((ix (mod (+ i *step*) 16))
              (ch (char txt i)))
          (! "setColor" pen (! "fromHsv" "QColor" (* 16 (- 15 ix)) 255 191))
          (x:do-with painter
            ("setPen(QPen)" pen)
            ("drawText(QPoint,QString)" (list (floor x)
                                              (floor (- y (/ (* h (svref *sinus* ix)) 400))))
                                        (string ch)))
          (incf x (! "width(QChar)" metrics ch)))))))

(defun timeout ()
  (incf *step*)
  (! "update" *wiggly*))

(progn
  (start)
  (qsingle-shot 0 (lambda () (in-package :wiggly))))

