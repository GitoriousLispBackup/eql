;;; "Wiggly Widget" example, directly loadable into any CL + CFFI.
;;;
;;; Slime note: for 'eval region', wrap #Q in PROGN (see *SINUS*).

(load "q")

#q
(defpackage :wiggly
  (:use :common-lisp :eql)
  (:export
   *sinus*
   *wiggly*
   *edit*
   *timer*
   #:start))

#q 
(in-package :wiggly)

(progn ; for 'eval region' in Slime
  #q (defparameter *sinus* #(0 38 71 92 100 92 71 38 0 -38 -71 -92 -100 -92 -71 -38)))
   
#q
(progn
  (defvar *wiggly* (qnew "QWidget" "autoFillBackground" t))
  (defvar *edit*   (qnew "QLineEdit" "alignment" |Qt.AlignCenter|))
  (defvar *timer*  (qnew "QTimer"))

  (defparameter *step* 0))
   
#q
(defun start ()
  (qset *wiggly* "font" (let ((font (qnew "QFont(QFont)" (! "font" "QApplication"))))
                          (! "setPointSize" font
                             (+ 10 (! "pointSize" font)))
                          font))
  (! "setBackgroundRole" *wiggly* |QPalette.Light|)
  (let ((dlg (qnew "QDialog" "size" (list 700 200)))
        (vbox (qnew "QVBoxLayout")))
    (! "setLayout" dlg vbox)
    (dolist (w (list *wiggly* *edit*))
      (! "addWidget" vbox w))
    (qoverride *wiggly* "paintEvent(QPaintEvent*)" 'paint)
    (qconnect *timer* "timeout()" 'timeout)
    (! "start" *timer* 42)
    (qset *edit* "text" "Some Lisps are more Common than others.")
    (! "show" dlg)
    (! "raise" dlg)))

#q
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
          (! "setPen(QPen)" painter pen)
          (! "drawText(QPoint,QString)" painter (list (floor x)
                                                         (floor (- y (/ (* h (svref *sinus* ix)) 400))))
                (string ch))
          (incf x (! "width(QChar)" metrics ch)))))))

#q 
(defun timeout ()
  (incf *step*)
  (! "update" *wiggly*))

#q
(start)

