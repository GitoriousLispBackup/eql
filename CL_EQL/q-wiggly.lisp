;;; "Wiggly Widget" example, directly loadable into any CL + CFFI.
;;;
;;; Slime note: for 'eval region', wrap #Q in PROGN (see *SINUS*, PAINT).

(load "q.lisp")

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
  (defvar *timer*  (qnew "QBasicTimer"))

  (defparameter *step* 0))
   
#q
(defun start ()
  (qset *wiggly* "font" (let ((font (qnew "QFont(QFont)" (qfun "QApplication" "font"))))
                          (qfun font "setPointSize"
                                (+ 10 (qfun font "pointSize")))
                          font))
  (qfun *wiggly* "setBackgroundRole" |QPalette.Light|)
  (let ((dlg (qnew "QDialog" "size" (list 700 200)))
        (vbox (qnew "QVBoxLayout")))
    (qfun dlg "setLayout" vbox)
    (dolist (w (list *wiggly* *edit*))
      (qfun vbox "addWidget" w))
    (qfun *timer* "start" 42 *wiggly*)
    (qoverride *wiggly* "paintEvent(QPaintEvent*)" 'paint)
    (qoverride *wiggly* "timerEvent(QTimerEvent*)" 'timeout)
    (qset *edit* "text" "Some Lisps are more Common than others.")
    (qfun dlg "show")
    (qfun dlg "raise")))

(progn ; for 'eval region' in Slime
  #q
  (defun paint (ev)
    (qlet ((painter "QPainter(QWidget*)" *wiggly*) ; local QPainter variable: no need to call "begin", "end"
           (pen "QPen")
           (metrics "QFontMetrics(QFont)" (qget *wiggly* "font")))
      (let* ((txt (qget *edit* "text"))
             (x (/ (- (qget *wiggly* "width")
                      (qfun metrics "width(QString)" txt))
                   2))
             (y (/ (- (+ (qget *wiggly* "height") (qfun metrics "ascent"))
                      (qfun metrics "descent"))
                   2))
             (h (qfun metrics "height")))
        (dotimes (i (length txt))
          (let ((ix (mod (+ i *step*) 16))
                (ch (char txt i)))
            (qfun pen "setColor" (qfun "QColor" "fromHsv" (* 16 (- 15 ix)) 255 191))
            (qfun painter "setPen(QPen)" pen)
            (qfun painter "drawText(QPoint,QString)" (list (floor x)
                                                           (floor (- y (/ (* h (svref *sinus* ix)) 400))))
                  (string ch))
            (incf x (qfun metrics "width(QChar)" ch))))))))

#q 
(defun timeout (ev)
  (when (= (qfun ev "timerId") (qfun *timer* "timerId"))
    (incf *step*)
    (qfun *wiggly* "update"))
  (qcall-default))

#q
(start)

