;;; This is a port of the Qt Example "Colliding Mice"
;;;
;;; Note (OSX only):
;;;
;;; Seldom crashes (OSX 10.4, Qt 4.6.2) are not related to this tool, as they happen even in the original Qt example.
;;;
;;; The good news: if a seg.fault happens (in C++), just choose the restart option "Abort" (below "Continue"),
;;; and the application will continue to run.

(defpackage :colliding-mice
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :colliding-mice)

(defconstant +2pi+ (* 2 pi))

(defvar *graphics-scene* (qnew "QGraphicsScene"
                               "sceneRect" (list -300 -300 600 600)))
(defvar *timer*          (qnew "QTimer"))
(defvar *mouse-count*    0)

(defstruct mouse ; DEFSTRUCT (instead of DEFCLASS) is simpler in this case
  (item          (qnew "QGraphicsItem"))
  (brush         (brush (qfun "QColor" "fromRgb" (random 256) (random 256) (random 256))))
  (angle         0)
  (speed         0)
  (eye-direction 0))

(defmethod the-qt-object ((object mouse)) ; see example "X-extras/CLOS-encapsulation.lisp"
  (mouse-item object))

(let ((shape (let ((p (qnew "QPainterPath")))
               (qfun p "addRect" (list -10 -20 20 40))
               p)))
  (defun new-mouse ()
    (incf *mouse-count*)
    (let ((mouse (make-mouse)))
      (qfun mouse "setRotation" (random (* 360 16)))
      (qoverride mouse "boundingRect()"
                 (lambda () '(-18.5 -22.5 36.5 60.5)))
      (qoverride mouse "shape()"
                 (lambda () shape))
      (qoverride mouse "paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"
                 (lambda (painter s w) (paint mouse painter)))
      (qoverride mouse "advance(int)"
                 (lambda (step) (advance mouse step)))
      mouse)))

(defun brush (color &optional (style |Qt.SolidPattern|))
  (let ((b (qnew "QBrush")))
    (qfun b "setStyle" style)
    (when color
      (qfun b "setColor(QColor)" color))
    b))

(let ((white (brush "white"))
      (black (brush "black"))
      (olive (brush "olive"))
      (red   (brush "red"))
      (no-brush (brush nil |Qt.NoBrush|))
      (tail (let ((p (qnew "QPainterPath")))
              (x:do-with (qfun p)
                ("moveTo" '(0 20))
                ("cubicTo" '(-5 22) '(-5 22) '(0 25))
                ("cubicTo" '(5  27) '(5  32) '(0 30))
                ("cubicTo" '(-5 32) '(-5 42) '(0 35)))
              p)))
  (defun paint (mouse painter)
    (flet ((! (fun arg)
             (qfun painter fun arg)))
      (! "setBrush(QBrush)" (mouse-brush mouse))
      (! "drawEllipse(QRect)" '(-10 -20 20 40))
      ;; eyes
      (! "setBrush(QBrush)" white)
      (! "drawEllipse(QRect)" '(-10 -17 8 8))
      (! "drawEllipse(QRect)" '(2 -17 8 8))
      ;; nose
      (! "setBrush(QBrush)" black)
      (! "drawEllipse(QRect)" '(-2 -22 4 4))
      ;; pupils
      (let ((dir (mouse-eye-direction mouse)))
        (! "drawEllipse(QRectF)" (list (- dir 8) -17 4 4))
        (! "drawEllipse(QRectF)" (list (+ dir 4) -17 4 4)))
      ;; ears
      (! "setBrush(QBrush)" (if (null (qfuns mouse "scene" ("collidingItems" mouse)))
                                olive
                                red))
      (! "drawEllipse(QRect)" '(-17 -12 16 16))
      (! "drawEllipse(QRect)" '(1 -12 16 16))
      ;; tail
      (! "setBrush(QBrush)" no-brush)
      (! "drawPath" tail))))

(defun advance (mouse step)
  (unless (zerop step)
    (labels ((normalize-angle (a)
               (x:while (minusp a)
                 (incf a +2pi+))
               (x:while (> a +2pi+)
                 (decf a +2pi+))
               a)
             (dx (line)
               (- (third line) (first line)))
             (dy (line)
               (- (fourth line) (second line)))
             (len (line)
               (let ((x (dx line))
                     (y (dy line)))
                 (sqrt (+ (* x x) (* y y)))))
             (map-from (p)
               (qfun mouse "mapFromScene(QPointF)" p))
             (map-to (p)
               (qfun mouse "mapToScene(QPointF)" p)))
      (let ((line-to-center (append '(0 0) (map-from '(0 0)))))
        (if (> (len line-to-center) 150)
            (let ((angle-to-center (acos (/ (dx line-to-center) (len line-to-center)))))
              (when (minusp (dy line-to-center))
                (setf angle-to-center (- +2pi+ angle-to-center)))
              (setf angle-to-center (normalize-angle (+ (- pi angle-to-center)
                                                        (/ pi 2))))
              (cond ((< (/ pi 4) angle-to-center pi)
                     ;; rotate left
                     (incf (mouse-angle mouse)
                           (if (< (mouse-angle mouse) (/ (- pi) 2)) 0.25 -0.25)))
                    ((and (>= angle-to-center pi)
                          (< angle-to-center (+ pi (/ pi 2) (/ pi 4))))
                     ;; rotate right
                     (incf (mouse-angle mouse)
                           (if (< (mouse-angle mouse) (/ pi 2)) 0.25 -0.25)))))
            (let ((sin (sin (mouse-angle mouse))))
              (incf (mouse-angle mouse) (cond ((minusp sin) 0.25)
                                              ((plusp sin) -0.25)
                                              (t 0))))))
      ;; try not to crash with any other mice
      (let ((danger-mice (qfuns mouse "scene"
                                ("items(QPolygonF,Qt::ItemSelectionMode,Qt::SortOrder)" (append (map-to '(0 0))
                                                                                                (map-to '(-30 -50))
                                                                                                (map-to '(30 -50)))
                                                                                        |Qt.IntersectsItemShape|
                                                                                        |Qt.AscendingOrder|))))
        (dolist (danger-mouse danger-mice)
          (unless (qeql mouse danger-mouse)
            (let* ((line-to-mouse (append '(0 0)
                                          (qfun mouse "mapFromItem(const QGraphicsItem*,QPointF)"
                                                danger-mouse '(0 0))))
                   (angle-to-mouse (acos (/ (dx line-to-mouse) (len line-to-mouse)))))
              (when (minusp (dy line-to-mouse))
                (setf angle-to-mouse (- +2pi+ angle-to-mouse)))
              (setf angle-to-mouse (normalize-angle (+ (- pi angle-to-mouse)
                                                       (/ pi 2))))
              (cond ((and (>= angle-to-mouse 0)
                          (< angle-to-mouse (/ pi 2)))
                     ;; rotate right
                     (incf (mouse-angle mouse) 0.5))
                    ((and (<= angle-to-mouse +2pi+)
                          (> angle-to-mouse (- +2pi+ (/ pi 2))))
                     ;; rotate left
                     (decf (mouse-angle mouse) 0.5))))))
        ;; add some random movement
        (when (and (> (length danger-mice) 1)
                   (zerop (random 10)))
          (let ((rnd (/ (random 100) 500))
                (angle (mouse-angle mouse)))
            (setf (mouse-angle mouse)
                  (if (zerop (random 2)) (+ angle rnd) (- angle rnd)))))
        (incf (mouse-speed mouse) (/ (- (random 100) 50) 100))
        (let ((dx (* 10 (sin (mouse-angle mouse)))))
          (setf (mouse-eye-direction mouse)
                (if (< (abs (/ dx 5)) 1) 0 (/ dx 5)))
          (qfun mouse "setRotation"
                (+ dx (qfun mouse "rotation")))
          (qfun mouse "setPos"
                (qfun mouse "mapToParent(QPointF)"
                      (list 0 (- (+ 3 (* 3 (sin (mouse-speed mouse)))))))))))))

(defun start ()
  (setf *random-state* (make-random-state t))
  (let ((view (qnew "QGraphicsView"
                    "windowTitle" "Colliding Mice"
                    "size" (list 400 300))))
    (qfun *graphics-scene* "setItemIndexMethod" |QGraphicsScene.NoIndex|)
    (x:do-with (qfun view)
      ("setScene" *graphics-scene*)
      ("setRenderHint" |QPainter.Antialiasing|)
      ("setBackgroundBrush" (qnew "QBrush(QPixmap)"
                                  (qnew "QPixmap(QString)"
                                        (in-home "examples/data/icons/cheese.jpg"))))
      ("setCacheMode" |QGraphicsView.CacheBackground|)
      ("setViewportUpdateMode" |QGraphicsView.BoundingRectViewportUpdate|)
      ("setDragMode" |QGraphicsView.ScrollHandDrag|))
    (let ((count 7))
      (dotimes (i count)
        (flet ((pos (fun)
                 (truncate (* 200 (funcall fun (/ (* i +2pi+) count))))))
          (let ((item (new-mouse)))
            (qfun item "setPos" (list (pos 'sin) (pos 'cos)))
            (qfun *graphics-scene* "addItem" item)))))
    (qconnect *timer* "timeout()" *graphics-scene* "advance()")
    (qfun *timer* "start" 30)
    (x:do-with (qfun view) "show" "raise")))

;;; for playing around interactively

(defun m+ (&optional (n 1))
  "Add n mice."
  (dotimes (i n)
    (let ((item (new-mouse)))
      (qfun item "setPos" (list (- 100 (random 200)) (- 100 (random 200))))
      (qfun *graphics-scene* "addItem" item)))
  *mouse-count*)

(defun m- (&optional (n 1))
  "Remove n mice."
  (dotimes (i n)
    (when (zerop *mouse-count*)
      (return))
    (decf *mouse-count*)
    (qdel (first (last (qfun *graphics-scene* "items")))))
  *mouse-count*)

(defun iv (&optional (ms 30))
  "Change move interval."
  (qset *timer* "interval" ms))

#|
(require :profile)

(progn
  (use-package :profile)
  (profile:profile
   paint
   advance))
|#

(start)
