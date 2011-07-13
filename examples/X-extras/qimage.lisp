;;; see "src/extras.*" for extra methods added to QImage:
;;;
;;; (qfun image "changeBrightness" x)
;;; (qfun image "changeContrast" x)
;;; (qfun image "changeGamma" x)

(defpackage :image-manipulation
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :image-manipulation)

(defvar *main* (qload-ui (in-home "examples/data/image-manipulation.ui")))

(defvar-ui *main*
  *display*
  *brightness*
  *contrast*
  *gamma*
  *reset*
  *color*
  *choose-color*
  *opacity*
  *reset-color*)

(defvar *image*  (qnew "QImage(QString)" (in-home "examples/data/vernazza.jpg")))
(defvar *pixmap* (qfun "QPixmap" "fromImage" *image*))
(defvar *filter* (qnew "QPixmap(QSize)" (qfun *pixmap* "size")))

(defun start ()
  (qfun *display* "setFixedSize" (qfun *image* "size"))
  (dolist (slider (list *brightness* *contrast* *gamma*))
    (x:do-with (qset slider)
      ("minimum" -100)
      ("maximum" 100))
    (qconnect slider "valueChanged(int)" 'change))
  (reset)
  (reset-color)
  (qconnect *color* "textChanged(QString)" 'repaint)
  (qconnect *opacity* "valueChanged(int)" 'repaint)
  (qconnect *choose-color* "clicked()" 'color-dialog)
  (qconnect *reset* "clicked()" 'reset)
  (qconnect *reset-color* "clicked()" 'reset-color)
  (qoverride *display* "paintEvent(QPaintEvent*)" 'paint)
  (x:do-with (qfun *main*)
    "show" "raise"))

(let ((pnt (qnew "QPainter")))
  (defun paint (ev)
    (flet ((set-filter (color)
             (qfun *filter* "fill" color)
             (x:do-with (qfun pnt)
               ("setOpacity" (/ (qget *opacity* "value") 100))
               ("drawPixmap(QPoint,QPixmap)" '(0 0) *filter*))))
      (let ((color (qget *color* "text")))
        (x:do-with (qfun pnt)
          ("begin(QWidget*)" *display*)
          ("drawPixmap(QPoint,QPixmap)" '(0 0) *pixmap*))
        (when (= #.(length "#RRGGBB") (length color))
          (set-filter color))
        (qfun pnt "end")))))

(defun repaint (arg)
  (qfun *display* "repaint"))

(defun change (value)
  (flet ((adjust-1 (x)
           (floor (* 3/4 x)))
         (adjust-2 (x)
           (floor (expt 100 (/ (+ 100 x) 100)))))
    ;; we use QLET here to force immediate deletion of temporary images (memory usage)
    (qlet ((img1 (qfun *image* "changeBrightness" (adjust-1 (qget *brightness* "value")))) ; -75   0     75
           (img2 (qfun img1    "changeContrast"   (adjust-2 (qget *contrast* "value"))))   ;   1 100 10,000
           (img3 (qfun img2    "changeGamma"      (adjust-2 (qget *gamma* "value")))))     ;   1 100 10,000
      (qdel *pixmap*)
      (setf *pixmap* (qfun "QPixmap" "fromImage" img3)))
    (qfun *display* "repaint")))

(defun reset ()
  (dolist (slider (list *brightness* *contrast* *gamma*))
    (qset slider "value" 0)))

(defun reset-color ()
  (qset *color* "text" "#ffaa00")
  (qset *opacity* "value" 0))

(defun color-dialog ()
  (x:when-it (qfun "QColorDialog" "getColor")
    (qset *color* "text" x:it)))

(start)
