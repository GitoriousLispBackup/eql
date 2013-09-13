;;; This is a port of the Qt Example "Wiggly Widget"

(defpackage :wiggly-widget
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :wiggly-widget)

(defvar *sinus* #(0 38 71 92 100 92 71 38 0 -38 -71 -92 -100 -92 -71 -38))

(defvar *wiggly* (qnew "QWidget" "autoFillBackground" t))
(defvar *edit*   (qnew "QLineEdit" "alignment" |Qt.AlignCenter|))
(defvar *timer*  (qnew "QBasicTimer"))

(defparameter *step* 0)

(defun start ()
  (qset *wiggly* "font" (x:let-it (qfun "QApplication" "font")
                          (qfun x:it "setPointSize"
                                (+ 20 (qfun x:it "pointSize")))))
  (qfun *wiggly* "setBackgroundRole" |QPalette.Light|)
  (let ((dlg (qnew "QDialog" "size" (list 600 200)))
        (vbox (qnew "QVBoxLayout")))
    (qfun dlg "setLayout" vbox)
    (dolist (w (list *wiggly* *edit*))
      (qfun vbox "addWidget" w))
    (qfun *timer* "start" 50 *wiggly*)
    (x:do-with (qoverride *wiggly*)
      ("paintEvent(QPaintEvent*)" 'paint)
      ("timerEvent(QTimerEvent*)" 'timeout))
    (qset *edit* "text" "= never odd or even =")
    (x:do-with (qfun dlg) "show" "raise")))

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
          (x:do-with (qfun painter)
            ("setPen(QPen)" pen)
            ("drawText(QPoint,QString)" (list (floor x)
                                              (floor (- y (/ (* h (svref *sinus* ix)) 400))))
                                        (string ch)))
          (incf x (qfun metrics "width(QChar)" ch)))))))

(defun timeout (ev)
  (when (= (qfun ev "timerId") (qfun *timer* "timerId"))
    (incf *step*)
    (qfun *wiggly* "update"))
  (qcall-default))

(start)
