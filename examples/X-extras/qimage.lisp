;;; see "src/extras.*" for extra methods added to QImage:
;;;
;;; (|changeBrightness| image x)
;;; (|changeContrast| image x)
;;; (|changeGamma| image x)
;;;
;;; optionally pass image file as command line argument

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(defpackage :image-manipulation
  (:nicknames :img)
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
  *reset-color*
  *flip-h*
  *flip-v*
  *scale*)

(defvar *image* (qnew "QImage(QString)" (x:if-it (third (remove-if (lambda (arg) (x:starts-with "-" arg))
                                                                   (|arguments.QCoreApplication|)))
                                                 x:it
                                                 (in-home "examples/data/vernazza.jpg"))))

(defvar *pixmap* (|fromImage.QPixmap| *image*))

(defvar *saving* nil)

(defun start ()
  (|setFixedSize| *display* (|size| *image*))
  (dolist (slider (list *brightness* *contrast* *gamma*))
    (x:do-with (qset slider)
      ("minimum" -100)
      ("maximum" 100))
    (qconnect slider "valueChanged(int)" (lambda (value) (change-values))))
  (|setText| *color* "#ffaa00")
  (qconnect *color* "textChanged(QString)" 'update)
  (qconnect *opacity* "valueChanged(int)" 'update)
  (qconnect *scale* "valueChanged(int)" 'update)
  (qconnect *scale* "sliderReleased()" 'adjust-size)
  (qconnect *choose-color* "clicked()" 'color-dialog)
  (qconnect *reset* "clicked()" 'reset)
  (qconnect *reset-color* "clicked()" (lambda () (|setValue| *opacity* 0)))
  (qconnect *flip-h* "clicked()" (lambda () (flip :h)))
  (qconnect *flip-v* "clicked()" (lambda () (flip :v)))
  (qoverride *display* "paintEvent(QPaintEvent*)" 'paint)
  (reset)
  (qlater (lambda ()
            (when (minusp (|x| *main*))
              (|move| *main* (list 0 (|y| *main*))))
            (|resize| *main* '(0 0))
            (in-package :img)))
  (x:do-with *main* |show| |raise|))

(defun paint (event)
  (qlet ((painter "QPainter(QWidget*)" *display*))
    (unless *saving*
      (let ((scale (/ (|value| *scale*)
                      (|maximum| *scale*))))
        (|scale| painter scale scale)))
    (|drawPixmap| painter '(0 0) *pixmap*)
    (when (|isSliderDown| *scale*)
      (|showText.QToolTip| (mapcar '+ (|pos| *display*) (|pos| *main*))
                           (format nil "~{~D~^ x ~}" (display-size))))
    (let ((color (|text| *color*)))
      (when (= #.(length "#RRGGBB") (length color))
        (|setOpacity| painter (/ (|value| *opacity*) 100))
        (|fillRect| painter (|rect| *pixmap*) color)))))

(defun update (&optional arg)
  (|update| *display*))

(defun update-pixmap (pixmap)
  (qdel *pixmap*)
  (setf *pixmap* pixmap)
  (update))

(defun display-size ()
  (mapcar (lambda (x)
            (truncate (+ 0.5 (* x (/ (|value| *scale*)
                                     (|maximum| *scale*))))))
          (|size| *image*)))

(defun adjust-size ()
  (|setFixedSize| *display* (display-size))
  (qlater (lambda () (|resize| *main* '(0 0)))))

(defun change-values ()
  (flet ((adjust-1 (x)
           (floor (* 3/4 x)))
         (adjust-2 (x)
           (floor (expt 100 (/ (+ 100 x) 100)))))
    ;; QLET: enforce immediate deletion of temporary images (GC/finalizing would waste much memory here)
    (qlet ((img1 (|changeBrightness| *image* (adjust-1 (|value| *brightness*)))) ; -75   0     75
           (img2 (|changeContrast|   img1    (adjust-2 (|value| *contrast*))))   ;   1 100 10,000
           (img3 (|changeGamma|      img2    (adjust-2 (|value| *gamma*)))))     ;   1 100 10,000
      (update-pixmap (|fromImage.QPixmap| img3)))))

(defun flip (direction)
  (let ((img (|mirrored| *image*
                (eql :h direction)
                (eql :v direction))))
    (qdel *image*)
    (setf *image* img)
    (change-values)))

(defun reset ()
  (dolist (slider (list *brightness* *contrast* *gamma*))
    (|setValue| slider 0)))

(defun color-dialog ()
  (x:when-it (|getColor.QColorDialog|)
    (|setText| *color* (|name| x:it))))

(defun save (&optional (name "image.png") (format "PNG"))
  (let ((*saving* t))
    (|save| (|grabWidget.QPixmap| *display* (|rect| *image*))
            name format)))

(start)
