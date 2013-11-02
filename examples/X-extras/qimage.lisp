;;; see "src/extras.*" for extra methods added to QImage:
;;;
;;; (! "changeBrightness" image x)
;;; (! "changeContrast" image x)
;;; (! "changeGamma" image x)
;;;
;;; optionally pass image file as command line argument

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

(defvar *image* (qnew "QImage(QString)" (x:if-it (third (remove-if (lambda (arg) (x:starts-with "-" arg))
                                                                   (! "arguments" "QApplication")))
                                                 x:it
                                                 (in-home "examples/data/vernazza.jpg"))))

(defvar *pixmap* (! "fromImage" "QPixmap" *image*))

(defun start ()
  (! "setFixedSize" *display* (! "size" *image*))
  (dolist (slider (list *brightness* *contrast* *gamma*))
    (x:do-with (qset slider)
      ("minimum" -100)
      ("maximum" 100))
    (qconnect slider "valueChanged(int)" 'change))
  (qset *color* "text" "#ffaa00")
  (qconnect *color* "textChanged(QString)" 'update)
  (qconnect *opacity* "valueChanged(int)" 'update)
  (qconnect *choose-color* "clicked()" 'color-dialog)
  (qconnect *reset* "clicked()" 'reset)
  (qconnect *reset-color* "clicked()" (lambda () (qset *opacity* "value" 0)))
  (qoverride *display* "paintEvent(QPaintEvent*)" 'paint)
  (reset)
  (x:do-with *main* "show" "raise"))

(defun paint (ev)
  (qlet ((painter "QPainter(QWidget*)" *display*))
    (! "drawPixmap(QPoint,QPixmap)" painter '(0 0) *pixmap*)
    (let ((color (! "text" *color*)))
      (when (= #.(length "#RRGGBB") (length color))
        (! "setOpacity" painter (/ (qget *opacity* "value") 100))
        (! "fillRect(QRect,QColor)" painter (! "rect" *pixmap*) color)))))

(defun update (&optional arg)
  (! "update" *display*))

(defun change (value)
  (flet ((adjust-1 (x)
           (floor (* 3/4 x)))
         (adjust-2 (x)
           (floor (expt 100 (/ (+ 100 x) 100)))))
    ;; we use QLET here to force immediate deletion of temporary images (memory usage)
    (qlet ((img1 (! "changeBrightness" *image* (adjust-1 (qget *brightness* "value")))) ; -75   0     75
           (img2 (! "changeContrast"   img1    (adjust-2 (qget *contrast* "value"))))   ;   1 100 10,000
           (img3 (! "changeGamma"      img2    (adjust-2 (qget *gamma* "value")))))     ;   1 100 10,000
      (qdel *pixmap*)
      (setf *pixmap* (! "fromImage" "QPixmap" img3)))
    (update)))

(defun reset ()
  (dolist (slider (list *brightness* *contrast* *gamma*))
    (qset slider "value" 0)))

(defun color-dialog ()
  (x:when-it (! "getColor" "QColorDialog")
    (qset *color* "text" (! "name" x:it))))

(start)
