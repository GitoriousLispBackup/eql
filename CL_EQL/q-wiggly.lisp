;;; "Wiggly Widget" example, directly loadable into any CL + CFFI.
;;;
;;; Slime note: for 'eval region', wrap #Q in PROGN (see DEFPARAMETER *CURVE*).

(load "q")

#q
(defpackage :wiggly-widget
  (:nicknames :wiggly)
  (:use :common-lisp :eql)
  (:export
   #:start))

#q
(in-package :wiggly-widget)

(progn #q
  (defparameter *curve* #.(coerce (loop :for i :below 16 :collect (round (* 100 (sin (* i (/ pi 8))))))
                                  'vector)
    "Vector of 16 values ranging from -100 to 100."))

#q
(defvar *wiggly* (qnew "QWidget"
                       "font" (x:let-it (|font.QApplication|)
                                (|setPointSize| x:it (+ 20 (|pointSize| x:it))))
                       "autoFillBackground" t))

#q
(defvar *edit*   (qnew "QLineEdit" "alignment" |Qt.AlignCenter|))

#q
(defvar *timer*  (qnew "QTimer"))

#q
(defparameter *step* 0)

#q
(defun start ()
  (|setBackgroundRole| *wiggly* |QPalette.Light|)
  (let ((dlg (qnew "QDialog" "size" '(600 200)))
        (vbox (qnew "QVBoxLayout")))
    (|setLayout| dlg vbox)
    (dolist (w (list *wiggly* *edit*))
      (|addWidget| vbox w))
    (qconnect *timer* "timeout()" 'timeout)
    (qoverride *wiggly* "paintEvent(QPaintEvent*)" 'paint)
    (|start| *timer* 50)
    (|setText| *edit* "= never odd or even =")
    (x:do-with dlg |show| |raise|)))

#q
(defun paint (ev)
  (qlet ((painter "QPainter(QWidget*)" *wiggly*) ; local QPainter variable: no need to call "begin", "end"
         (pen "QPen")
         (metrics "QFontMetrics(QFont)" (|font| *wiggly*)))
    (let* ((txt (|text| *edit*))
           (x (/ (- (|width| *wiggly*)
                    (|width| metrics txt))
                 2))
           (y (/ (- (+ (|height| *wiggly*) (|ascent| metrics))
                    (|descent| metrics))
                 2))
           (h (|height| metrics)))
      (dotimes (i (length txt))
        (let ((ix (mod (+ i *step*) 16))
              (ch (char txt i)))
          (|setColor| pen (|fromHsv.QColor| (* 16 (- 15 ix)) 255 191))
          (x:do-with painter
            (|setPen| pen)
            (|drawText| (list (floor x)
                              (floor (- y (/ (* h (svref *curve* ix)) 400))))
                        (string ch)))
          (incf x (|width| metrics ch)))))))

#q
(defun timeout ()
  (incf *step*)
  (|update| *wiggly*))

#q
(start)

