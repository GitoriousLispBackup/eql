;;;
;;; This is a ported wiggly-widget example which can be run with
;;; both CommonQt/SBCL and EQL.
;;;
;;; It will run 10 seconds and output a profiling report.
;;;
;;;     sbcl --load profiling.lisp
;;;     eql profiling.lisp; eql profiling.fas;
;;;
;;; In my tests, CommonQt/SBCL was a little faster than EQL
;;; (except on Windows).
;;;
;;; But note that CommonQt/ECL is currently (2014) several times
;;; slower than EQL, and conses a lot more.
;;;

;;; Note for function PAINT:
;;;
;;; the difference between providing (ambiguous) type lists and omitting them is marginal,
;;; because inner loops are auto-optimizing, see "ecl_fun.cpp::qinvoke_method2()"
#+eql
(pushnew :type-lists *features*)

#+eql
(progn
  #-qt-wrapper-functions ; see README-OPTIONAL.txt
  (load (in-home "src/lisp/all-wrappers")))

#-eql
(pushnew :common-qt *features*)

#+eql
(when (string= "lisp" (pathname-type *load-pathname*))
  (require :profile)
  (require :cmp)
  (compile-file *load-pathname*)
  (format t "~%Please run the compiled file \"profiling.fas\".~%~%")
  (eql:qq))

#+common-qt
(ql:quickload :qt)

#+eql
(require :profile)

#+eql
(eval-when (:compile-toplevel :load-toplevel :execute)
  (set-dispatch-macro-character #\# #\_ (lambda (&rest args)))) ; ignore #_

(defpackage :wiggly-widget
  (:use :common-lisp
        #+common-qt :qt #+eql :eql
        #+common-qt :sb-profile #+eql :profile)
  (:export
   #:start))

(in-package :wiggly-widget)

#+common-qt
(named-readtables:in-readtable :qt)

(defvar *sinus* #(0 38 71 92 100 92 71 38 0 -38 -71 -92 -100 -92 -71 -38))
(defvar *step*  0)

#+common-qt
(defvar *qapp*)

(defvar *wiggly*)
(defvar *edit*)
(defvar *timer*)

#+common-qt
(defclass wiggly ()
  ()
  (:metaclass qt-class)
  (:qt-superclass "QWidget")
  (:override ("paintEvent" paint)))

#+common-qt
(defmethod initialize-instance :after ((instance wiggly) &key parent)
  (new instance)
  (#_setFont instance (let ((font (#_QApplication::font)))
                        (#_setPointSize font (+ 20 (#_pointSize font)))
                        font))
  (#_setBackgroundRole instance (#_QPalette::Light))
  (#_setAutoFillBackground instance t))

#+common-qt
(defun start ()
  (setf *qapp*   (make-qapplication) 
        *wiggly* (make-instance 'wiggly)
        *edit*   (#_new QLineEdit)
        *timer*  (#_new QTimer))
  (#_setAlignment *edit* (#_Qt::AlignCenter))
  (let ((dlg  (#_new QDialog))
        (vbox (#_new QVBoxLayout)))
    (#_setLayout dlg vbox)
    (dolist (w (list *wiggly* *edit*))
      (#_addWidget vbox w))
    (#_resize dlg 600 200)
    (#_setText *edit* "1234567890987654321")
    (connect *timer* (QSIGNAL "timeout()") 'timeout)
    (#_start *timer* 10)
    (#_show dlg)
    (#_raise dlg)
    (#_exec *qapp*)))

#+eql
(defun new-wiggly ()
  (x:let-it (qnew "QWidget"
                  "font" (x:let-it (|font.QApplication|)
                           (|setPointSize| x:it (+ 20 (|pointSize| x:it))))
                  "autoFillBackground" t)
    (|setBackgroundRole| x:it |QPalette.Light|)
    (qoverride x:it "paintEvent(QPaintEvent*)" 'paint)))

#+eql
(defun start ()
  (setf *wiggly* (new-wiggly)
        *edit*   (qnew "QLineEdit" "alignment" |Qt.AlignCenter|)
        *timer*  (qnew "QTimer"))
  (let ((dlg  (qnew "QDialog" "size" (list 600 200)))
        (vbox (qnew "QVBoxLayout")))
    (|setLayout| dlg vbox)
    (dolist (w (list *wiggly* *edit*))
      (|addWidget| vbox w))
    (|setText| *edit* "1234567890987654321")
    (qconnect *timer* "timeout()" 'timeout)
    (|start| *timer* 10)
    (x:do-with dlg |show| |raise|)))

#+common-qt
(let (painter pen metrics)
  (defmethod paint ((this wiggly) event)
    (unless painter
      (setf painter (#_new QPainter)
            pen     (#_new QPen)
            metrics (#_new QFontMetrics (#_font *wiggly*))))
    (let* ((text (#_text *edit*))
           (x (/ (- (#_width *wiggly*)
                    (#_width metrics text))
                 2))
           (y (/ (- (+ (#_height *wiggly*) (#_ascent metrics))
                    (#_descent metrics))
                 2))
           (h (#_height metrics)))
      (#_begin painter *wiggly*)
      (dotimes (i (length text))
        (let ((ix (mod (+ i *step*) 16))
              (ch (char text i)))
          (#_setColor pen (#_QColor::fromHsv (* 16 (- 15 ix)) 255 191))
          (#_setPen painter pen)
          (#_drawText painter
                      (#_new QPoint (floor x) (floor (- y (/ (* h (svref *sinus* ix)) 400))))
                      (string ch))
          (incf x (#_width metrics (#_new QChar (char-code ch))))))
      (#_end painter))))

#+eql
(let (painter pen metrics)
  (defun paint (event)
    (unless painter
      (setf painter (qnew "QPainter")
            pen     (qnew "QPen")
            metrics (qnew "QFontMetrics(QFont)" (|font| *wiggly*))))
    (let* ((text (|text| *edit*))
           (x (/ (- (|width| *wiggly*)
                    (|width| metrics text))
                 2))
           (y (/ (- (+ (|height| *wiggly*) (|ascent| metrics))
                    (|descent| metrics))
                 2))
           (h (|height| metrics)))
      (|begin| painter *wiggly*)
      (dotimes (i (length text))
        (let ((ix (mod (+ i *step*) 16))
              (ch (char text i)))
          (|setColor| pen (|fromHsv.QColor| (* 16 (- 15 ix)) 255 191))
          #+type-lists
          (progn
            (x:do-with painter
              (|setPen(QPen)| pen)
              (|drawText(QPoint...)| (list (floor x) (floor (- y (/ (* h (svref *sinus* ix)) 400))))
                                     (string ch)))
            (incf x (|width(QChar)| metrics ch)))
          #-type-lists
          (progn
            (x:do-with painter
              (|setPen| pen)
              (|drawText| (list (floor x) (floor (- y (/ (* h (svref *sinus* ix)) 400))))
                          (string ch)))
            (incf x (|width| metrics ch)))))
      (|end| painter))))

(defvar *count* 0)
(defvar *max*   1000)

#+common-qt
(defun timeout ()
  (when (= *max* (incf *count*))
    (report)
    (sb-ext:quit))
  (incf *step*)
  (#_update *wiggly*))

#+eql
(defun timeout ()
  (when (= *max* (incf *count*))
    (report)
    (qq))
  (incf *step*)
  (|update| *wiggly*))

(profile
  paint
  timeout)

(start)

