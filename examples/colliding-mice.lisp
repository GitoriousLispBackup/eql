;;; copyright (c) 2010 power4projects software
;;;
;;; This is a port of the Qt Example "Colliding Mice"
;;;
;;; Note: very seldom crashes (at least in OSX) are not related to this tool, as they happen even in the original Qt example.

(defpackage :colliding-mice
  (:use :common-lisp :util :eql)
  (:export
   #:start))

(in-package :colliding-mice)

(defconstant +antialiasing+ 1)
(defconstant +no-index+     -1)
(defconstant +2pi+          (* 2 pi))

(defparameter *mouse-count* 7)

(defstruct mouse
  (item (qnew "QGraphicsItem"))
  (brush (brush (qfun "QColor" "fromRgb(int,int,int)"
                      (random 256) (random 256) (random 256))))
  (angle 0)
  (speed 0)
  (eye-direction 0))

(let ((shape (let ((p (qnew "QPainterPath")))
               (qfun p "addRect(QRectF)" (list -10 -20 20 40))
               p)))
  (defun mouse ()
    (let* ((mouse (make-mouse))
           (item (mouse-item mouse)))
      (qfun item "setRotation(qreal)" (random (* 360 16)))
      (qoverride item "boundingRect()"
                 #'(lambda () '(-18.5 -22.5 36.5 60.5)))
      (qoverride item "shape()"
                 #'(lambda () shape))
      (qoverride item "paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"
                 #'(lambda (painter s w) (paint mouse painter)))
      (qoverride item "advance(int)"
                 #'(lambda (step) (advance mouse step)))
      item)))

(defun brush (color &optional (style "SolidPattern"))
  (let ((b (qnew "QBrush")))
    (qfun b "setStyle(Qt::BrushStyle)" style)
    (when color
      (qfun b "setColor(QColor)" color))
    b))

(let ((white (brush "white"))
      (black (brush "black"))
      (olive (brush "olive"))
      (red   (brush "red"))
      (no-brush (brush nil "NoBrush"))
      (tail (let ((p (qnew "QPainterPath")))
              (qfun p "moveTo(QPointF)" '(0 20))
              (qfun p "cubicTo(QPointF,QPointF,QPointF)" '(-5 22) '(-5 22) '(0 25))
              (qfun p "cubicTo(QPointF,QPointF,QPointF)" '(5  27) '(5  32) '(0 30))
              (qfun p "cubicTo(QPointF,QPointF,QPointF)" '(-5 32) '(-5 42) '(0 35))
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
      (let ((me (mouse-item mouse)))
        (! "setBrush(QBrush)" (if (null (qfun (qfun me "scene()")
                                              "collidingItems(const QGraphicsItem*)" me))
                                  olive
                                  red)))
      (! "drawEllipse(QRect)" '(-17 -12 16 16))
      (! "drawEllipse(QRect)" '(1 -12 16 16))
      ;; tail
      (! "setBrush(QBrush)" no-brush)
      (! "drawPath(QPainterPath)" tail))))

(defun advance (mouse step)
  (unless (zerop step)
    (let ((me (mouse-item mouse)))
      (labels ((normalize-angle (a)
                 (while (< a 0)
                   (incf a +2pi+))
                 (while (> a +2pi+)
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
                 (qfun me "mapFromScene(QPointF)" p))
               (map-to (p)
                 (qfun me "mapToScene(QPointF)" p)))
        (let ((line-to-center (append '(0 0) (map-from '(0 0)))))
          (if (> (len line-to-center) 150)
              (let ((angle-to-center (acos (/ (dx line-to-center) (len line-to-center)))))
                (when (< (dy line-to-center) 0)
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
                (incf (mouse-angle mouse) (cond ((< sin 0) 0.25)
                                                ((> sin 0) -0.25)
                                                (t 0))))))
        ;; try not to crash with any other mice
        (let ((danger-mice (qfun (qfun me "scene()")
                                 "items(QPolygonF,Qt::ItemSelectionMode,Qt::SortOrder)"
                                 (append (map-to '(0 0))
                                         (map-to '(-30 -50))
                                         (map-to '(30 -50)))
                                 "IntersectsItemShape"
                                 "AscendingOrder")))
          (dolist (danger-mouse danger-mice)
            (unless (qeql me danger-mouse)
              (let* ((line-to-mouse (append '(0 0)
                                            (qfun me "mapFromItem(const QGraphicsItem*,QPointF)"
                                                  danger-mouse '(0 0))))
                     (angle-to-mouse (acos (/ (dx line-to-mouse) (len line-to-mouse)))))
                (when (< (dy line-to-mouse) 0)
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
            (qfun me "setRotation(qreal)"
                  (+ dx (qfun me "rotation()")))
            (qfun me "setPos(QPointF)"
                  (qfun me "mapToParent(QPointF)"
                        (list 0 (- (+ 3 (* 3 (sin (mouse-speed mouse))))))))))))))

(defun start ()
  (setf *random-state* (make-random-state t))
  (let ((scene (qnew "QGraphicsScene"
                     "sceneRect" (list -300 -300 600 600)))
        (view (qnew "QGraphicsView"
                    "windowTitle" "Colliding Mice"
                    "size" (list 400 300)))
        (timer (qnew "QTimer")))
    (qfun scene "setItemIndexMethod(QGraphicsScene::ItemIndexMethod)" +no-index+)
    (qfun view "setScene(QGraphicsScene*)" scene)
    (qfun view "setRenderHint(QPainter::RenderHint)" +antialiasing+)
    (qfun view "setBackgroundBrush(QBrush)"
          (let ((brush (qnew "QBrush")))
            (qfun brush "setTexture(QPixmap)"
                  (let ((pix (qnew "QPixmap")))
                    (qfun pix "load(QString)" (in-home "examples/icons/cheese.jpg"))
                    pix))
            brush))
    (qfun view "setCacheMode(QGraphicsView::CacheMode)" "CacheBackground")
    (qfun view "setViewportUpdateMode(QGraphicsView::ViewportUpdateMode)" "BoundingRectViewportUpdate")
    (qfun view "setDragMode(QGraphicsView::DragMode)" "ScrollHandDrag")
    (dotimes (i *mouse-count*)
      (flet ((p ()
               (/ (* i +2pi+) *mouse-count*)))
        (let ((item (mouse)))
          (qfun item "setPos(QPointF)" (list (* 200 (sin (p)))
                                             (* 200 (cos (p)))))
          (qfun scene "addItem(QGraphicsItem*)" item))))
    (qconnect timer "timeout()" scene "advance()")
    (qfun timer "start(int)" 30)
    (qfun view "show()")))

(start)
