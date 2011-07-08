;;; see "src/static-extras.*" for static methods added to QImage:
;;;
;;;     (qfun "QImage" "changeBrightness" image x)
;;;     (qfun "QImage" "changeContrast" image x)
;;;     (qfun "QImage" "changeGamma" image x)

(defpackage :image-manipulation
  (:use :common-lisp :eql)
  (:export))

(in-package :image-manipulation)

(defvar *main* (qload-ui (in-home "examples/data/image-manipulation.ui")))

(defvar-ui *main*
  *display*
  *brightness*
  *contrast*
  *gamma*
  *reset*)

(defvar *image*  (qnew "QImage(QString)" (in-home "examples/data/vernazza.png")))
(defvar *pixmap* (qfun "QPixmap" "fromImage" *image*))

(defun start ()
  (qfun *display* "setFixedSize" (qfun *image* "size"))
  (dolist (slider (list *brightness* *contrast* *gamma*))
    (x:do-with (qset slider)
      ("minimum" 0)
      ("maximum" 100)
      ("value" 50))
    (qconnect slider "valueChanged(int)" 'change))
  (qconnect *reset* "clicked()" 'reset)
  (qoverride *display* "paintEvent(QPaintEvent*)" 'paint)
  (x:do-with (qfun *main*)
    "show" "raise"))

(defun reset ()
  (dolist (slider (list *brightness* *contrast* *gamma*))
    (qset slider "value" 50)))

(let ((pnt (qnew "QPainter")))
  (defun paint (ev)
    (x:do-with (qfun pnt)
      ("begin(QWidget*)" *display*)
      ("drawPixmap(QPoint,QPixmap)" '(0 0) *pixmap*)
      "end")))

(defun change (value)
  ;; we use QLET here to force immediate deletion of temporary images (memory usage)
  (qlet ((img1 (qfun "QImage" "changeBrightness" *image* (- (qget *brightness* "value") 50)))
         (img2 (qfun "QImage" "changeContrast"   img1    (* 2 (qget *contrast* "value"))))
         (img3 (qfun "QImage" "changeGamma"      img2    (* 2 (qget *gamma* "value")))))
    (setf *pixmap* (qfun "QPixmap" "fromImage" img3)))
  (qfun *display* "repaint"))

(start)
