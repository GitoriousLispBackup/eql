;;;
;;; This is a ported wiggly-widget example which can be run with
;;; both CommonQt/SBCL and EQL.
;;;
;;; It will run 10 seconds and output a profiling report.
;;;
;;;     sbcl --load profiling.lisp
;;;     eql profiling.lisp
;;;
;;; In my tests CommonQt/SBCL was slightely faster on Linux,
;;; and EQL was slightely faster on OSX.
;;;

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
  (:override ("paintEvent" paint)
             ("timerEvent" timeout)))

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
        *timer*  (#_new QBasicTimer))
  (#_setAlignment *edit* (#_Qt::AlignCenter))
  (let ((dlg  (#_new QDialog))
        (vbox (#_new QVBoxLayout)))
    (#_setLayout dlg vbox)
    (dolist (w (list *wiggly* *edit*))
      (#_addWidget vbox w))
    (#_resize dlg 600 200)
    (#_setText *edit* "1234567890987654321")
    (#_start *timer* 10 *wiggly*)
    (#_show dlg)
    (#_raise dlg)
    (#_exec *qapp*)))

#+eql
(defun new-wiggly ()
  (let ((w (qnew "QWidget"
                 "font" (let ((font (qfun "QApplication" "font")))
                          (qfun font "setPointSize" (+ 20 (qfun font "pointSize")))
                          font)
                 "autoFillBackground" t)))
    (qfun w "setBackgroundRole" |QPalette.Light|)
    (x:do-with (qoverride w)
      ("paintEvent(QPaintEvent*)" 'paint)
      ("timerEvent(QTimerEvent*)" 'timeout))
    w))

#+eql
(defun start ()
  (setf *wiggly* (new-wiggly)
        *edit*   (qnew "QLineEdit" "alignment" |Qt.AlignCenter|)
        *timer*  (qnew "QBasicTimer"))
  (let ((dlg  (qnew "QDialog" "size" (list 600 200)))
        (vbox (qnew "QVBoxLayout")))
    (qfun dlg "setLayout" vbox)
    (dolist (w (list *wiggly* *edit*))
      (qfun vbox "addWidget" w))
    (qset *edit* "text" "1234567890987654321")
    (qfun *timer* "start" 10 *wiggly*)
    (x:do-with (qfun dlg) "show" "raise")))

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
            metrics (qnew "QFontMetrics(QFont)" (qget *wiggly* "font"))))
    (let* ((text (qget *edit* "text"))
           (x (/ (- (qget *wiggly* "width")
                    (qfun metrics "width(QString)" text))
                 2))
           (y (/ (- (+ (qget *wiggly* "height") (qfun metrics "ascent"))
                    (qfun metrics "descent"))
                 2))
           (h (qfun metrics "height")))
      (qfun painter "begin(QWidget*)" *wiggly*)
      (dotimes (i (length text))
        (let ((ix (mod (+ i *step*) 16))
              (ch (char text i)))
          (qfun pen "setColor" (qfun "QColor" "fromHsv" (* 16 (- 15 ix)) 255 191))
          (x:do-with (qfun painter)
            ("setPen(QPen)" pen)
            ("drawText(QPoint,QString)" (list (floor x) (floor (- y (/ (* h (svref *sinus* ix)) 400))))
                                        (string ch)))
          (incf x (qfun metrics "width(QChar)" ch))))
      (qfun painter "end"))))

(defvar *count* 0)
(defvar *max*   1000)

#+common-qt
(defmethod timeout ((this wiggly) event)
  (when (= (#_timerId event) (#_timerId *timer*))
    (when (= *max* (incf *count*))
      (report)
      (sb-ext:quit))
    (incf *step*)
    (#_update *wiggly*))
  (call-next-qmethod))

#+eql
(defun timeout (event)
  (when (= (qfun event "timerId") (qfun *timer* "timerId"))
    (when (= *max* (incf *count*))
      (report)
      (qsingle-shot 0 'qq)) ; needed with -qtpl
    (incf *step*)
    (qfun *wiggly* "update"))
  (qcall-default))

(profile
  paint
  timeout)

(start)

