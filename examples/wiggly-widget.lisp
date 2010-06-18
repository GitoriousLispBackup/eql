;;; copyright (c) 2010 power4projects software
;;;
;;; This is a port of the Qt Example "Wiggly Widget"

(defpackage :wiggly-widget
  (:use :common-lisp :util :eql)
  (:export
   #:start))

(in-package :wiggly-widget)

(defconstant +sinus+ #(0 38 71 92 100 92 71 38 0 -38 -71 -92 -100 -92 -71 -38))
(defconstant +light+ 2)

(defparameter *step* 0)

(defparameter *wiggly* (qnew "QWidget" "autoFillBackground" t))
(defparameter *edit*   (qnew "QLineEdit" "alignment" "AlignCenter"))
(defparameter *timer*  (qnew "QBasicTimer"))

(defun font-add-size (font add)
  (let ((f (split font #\,)))
    (setf (second f) (+ add (parse-integer (second f) :junk-allowed t)))
    (join f #\,)))

(defun start ()
  (qset *wiggly* "font" (font-add-size (qget *wiggly* "font") 20))
  (qfun *wiggly* "setBackgroundRole(QPalette::ColorRole)" +light+)
  (let ((dlg (qnew "QDialog" "size" (list 600 200)))
        (vbox (qnew "QVBoxLayout")))
    (qfun dlg "setLayout(QLayout*)" vbox)
    (with- (qfun vbox "addWidget(QWidget*)")
      (list *wiggly* *edit*))
    (qfun *timer* "start(int,QObject*)" 60 *wiggly*)
    (with- (qoverride *wiggly*)
      (list "paintEvent(QPaintEvent*)" "timerEvent(QTimerEvent*)")
      (list 'paint 'timeout))
    (qset *edit* "text" "EQL - Embedded Qt Lisp")
    (qfun dlg "show()")))

(let ((painter (qnew "QPainter"))
      (pen (qnew "QPen")))
  (defun paint (ev)
    (qfun painter "begin(QWidget*)" *wiggly*)
    (qlet ((fm (qnew "QFontMetrics(QFont)" (qget *wiggly* "font"))))
          (let* ((txt (qget *edit* "text"))
                 (x (/ (- (qget *wiggly* "width")
                          (qfun fm "width(QString)" txt))
                       2))
                 (y (/ (- (+ (qget *wiggly* "height") (qfun fm "ascent()"))
                          (qfun fm "descent()"))
                       2))
                 (h (qfun fm "height()")))
            (dotimes (i (length txt))
              (let ((ix (mod (+ i *step*) 16))
                    (ch (char txt i)))
                (qfun pen "setColor(QColor)" (qfun "QColor" "fromHsv(int,int,int)"
                                                   (* 16 (- 15 ix))
                                                   255
                                                   191))
                (qfun painter "setPen(QPen)" pen)
                (qfun painter "drawText(QPoint,QString)"
                      (list (floor x)
                            (floor (- y (/ (* h (svref +sinus+ ix)) 400))))
                      (string ch))
                (incf x (qfun fm "width(QChar)" ch))))))
    (qfun painter "end()")
    t)) ; overridden: no need to call QWidget::paintEvent()

(defun timeout (ev)
  (if (= (qfun ev "timerId()") (qfun *timer* "timerId()"))
      (progn
        (incf *step*)
        (qfun *wiggly* "update()")
        t)
      nil)) ; overridden: call QWidget::timerEvent()

(start)

