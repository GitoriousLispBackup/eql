;;; This is a port of the Qt OpenGL Example "Grabber"

(defpackage :gl-widget
  (:use :common-lisp :eql)
  (:export
   #:*gl-widget*
   #:*timer*
   #:*x-rotation-changed*
   #:*y-rotation-changed*
   #:*z-rotation-changed*
   #:ini-gl-widget
   #:set-x-rotation
   #:set-y-rotation
   #:set-z-rotation))

(provide :gl-widget)

(in-package :gl-widget)

(defconstant +360+ (* 360 16))

(defvar *gl-widget* (qnew "QGLWidget"))
(defvar *timer*     (qnew "QTimer"))

(defparameter *gear1*     0)
(defparameter *gear2*     0)
(defparameter *gear3*     0)
(defparameter *x-rot*     0)
(defparameter *y-rot*     0)
(defparameter *z-rot*     0)
(defparameter *gear1-rot* 0)
(defparameter *last-pos*  (list 0 0))

(defparameter *x-rotation-changed* nil)
(defparameter *y-rotation-changed* nil)
(defparameter *z-rotation-changed* nil)

(defun ini-gl-widget ()
  (x:do-with (qoverride *gl-widget*)
    (|initializeGL()|                'initialize-gl)
    (|paintGL()|                     'paint-gl)
    (|resizeGL(int,int)|             'resize-gl)
    (|mousePressEvent(QMouseEvent*)| 'mouse-press-event)
    (|mouseMoveEvent(QMouseEvent*)|  'mouse-move-event))
  (qconnect *timer* "timeout()" 'advance-gears)
  (|start| *timer* 20))

(defmacro set-rotation (axis)
  (flet ((axis-symbol (frm)
           (intern (format nil frm axis))))
    (let ((rot     (axis-symbol "*~A-ROT*"))
          (changed (axis-symbol "*~A-ROTATION-CHANGED*")))
      `(defun ,(axis-symbol "SET-~A-ROTATION") (angle)
         (setf angle (normalize-angle angle))
         (when (/= angle ,rot)
           (setf ,rot angle)
           (when ,changed
             (funcall ,changed angle))
           (|updateGL| *gl-widget*))))))

(set-rotation :x)
(set-rotation :y)
(set-rotation :z)

(defun initialize-gl ()
  (gl:light :light0 :position #(5 5 10 1))
  (gl:enable :lighting)
  (gl:enable :light0)
  (gl:enable :depth-test)
  (setf *gear1* (make-gear #(0.8 0.1 0.0 1.0) 1.0 4.0 1.0 0.7 20)
        *gear2* (make-gear #(0.0 0.8 0.2 1.0) 0.5 2.0 2.0 0.7 10)
        *gear3* (make-gear #(0.2 0.2 1.0 1.0) 1.3 2.0 0.5 0.7 10))
  (gl:enable :normalize)
  (gl:clear-color 0 0 0 1))

(defun paint-gl ()
  (gl:clear :color-buffer :depth-buffer)
  (gl:push-matrix)
  (gl:rotate (/ *x-rot* 16) 1 0 0)
  (gl:rotate (/ *y-rot* 16) 0 1 0)
  (gl:rotate (/ *z-rot* 16) 0 0 1)
  (draw-gear *gear1* -3.0 -2.0 0.0 (/ *gear1-rot* 16))
  (draw-gear *gear2*  3.1 -2.0 0.0 (- (* -2 (/ *gear1-rot* 16)) 9))
  (gl:rotate 90 1 0 0)
  (draw-gear *gear3* -3.1 -1.8 -2.2 (- (* 2 (/ *gear1-rot* 16)) 2))
  (gl:pop-matrix))

(defun resize-gl (width height)
  (if (|isVisible| *gl-widget*) ; needed in OSX
      (let ((side (min width height)))
        (gl:viewport (/ (- width side) 2) (/ (- height side) 2) side side)
        (gl:matrix-mode :projection)
        (gl:load-identity)
        (gl:frustum -1 1 -1 1 5 60)
        (gl:matrix-mode :modelview)
        (gl:load-identity)
        (gl:translate 0 0 -40))
      (qsingle-shot 0 (lambda () (apply 'resize-gl (|size| *gl-widget*))))))

(defun mouse-press-event (event)
  (setf *last-pos* (|pos| event)))

(defun mouse-move-event (event)
  (let ((dx (- (|x| event) (first  *last-pos*)))
        (dy (- (|y| event) (second *last-pos*)))
        (buttons (|buttons| event)))
    (flet ((button (enum)
             (plusp (logand enum buttons))))
      (cond ((button |Qt.LeftButton|)
             (set-x-rotation (+ *x-rot* (* 8 dy)))
             (set-y-rotation (+ *y-rot* (* 8 dx))))
            ((button |Qt.RightButton|)
             (set-x-rotation (+ *x-rot* (* 8 dy)))
             (set-z-rotation (+ *z-rot* (* 8 dx)))))
      (setf *last-pos* (|pos| event)))))

(defun advance-gears ()
  (incf *gear1-rot* (* 2 16))
  (|updateGL| *gl-widget*))

(defun make-gear (reflectance inner-radius outer-radius thickness tooth-size tooth-count)
  (let ((list (gl:gen-lists 1))
        (r0 inner-radius)
        (r1 (- outer-radius (/ tooth-size 2)))
        (r2 (+ outer-radius (/ tooth-size 2)))
        (delta (/ (/ (* 2 pi) tooth-count) 4))
        (z (/ thickness 2)))
    (gl:new-list list :compile)
    (gl:material :front :ambient-and-diffuse reflectance)
    (gl:shade-model :flat)
    (dotimes (i 2)
      (let ((sign (if (zerop i) 1 -1)))
        (gl:normal 0 0 sign)
        (gl:begin :quad-strip)
        (dotimes (j (1+ tooth-count))
          (let ((angle (/ (* 2 pi j) tooth-count)))
            (gl:vertex (* r0 (cos angle)) (* r0 (sin angle)) (* sign z))
            (gl:vertex (* r1 (cos angle)) (* r1 (sin angle)) (* sign z))
            (gl:vertex (* r0 (cos angle)) (* r0 (sin angle)) (* sign z))
            (gl:vertex (* r1 (cos (+ angle (* 3 delta))))
                       (* r1 (sin (+ angle (* 3 delta))))
                       (* sign z))))
        (gl:end)
        (gl:begin :quads)
        (dotimes (j tooth-count)
          (let ((angle (/ (* 2 pi j) tooth-count)))
            (gl:vertex (* r1 (cos angle)) (* r1 (sin angle)) (* sign z))
            (gl:vertex (* r2 (cos (+ angle delta)))
                       (* r2 (sin (+ angle delta)))
                       (* sign z))
            (gl:vertex (* r2 (cos (+ angle (* 2 delta))))
                       (* r2 (sin (+ angle (* 2 delta))))
                       (* sign z))
            (gl:vertex (* r1 (cos (+ angle (* 3 delta))))
                       (* r1 (sin (+ angle (* 3 delta))))
                       (* sign z))))
        (gl:end)))
    (gl:begin :quad-strip)
    (dotimes (i tooth-count)
      (dotimes (j 2)
        (let ((angle (/ (* 2 pi (+ i (/ j 2)))
                        tooth-count))
              (s1 r1)
              (s2 r2))
          (when (= 1 j)
            (rotatef s1 s2))
          (gl:normal (cos angle) (sin angle) 0)
          (gl:vertex (* s1 (cos angle)) (* s1 (sin angle)) z)
          (gl:vertex (* s1 (cos angle)) (* s1 (sin angle)) (- z))
          (gl:normal (- (* s2 (sin (+ angle delta))) (* s1 (sin angle)))
                     (- (* s1 (cos angle)) (* s2 (cos (+ angle delta))))
                     0)
          (gl:vertex (* s2 (cos (+ angle delta))) (* s2 (sin (+ angle delta))) z)
          (gl:vertex (* s2 (cos (+ angle delta))) (* s2 (sin (+ angle delta))) (- z)))))
    (gl:vertex r1 0 z)
    (gl:vertex r1 0 (- z))
    (gl:end)
    (gl:shade-model :smooth)
    (gl:begin :quad-strip)
    (dotimes (i (1+ tooth-count))
      (let ((angle (/ (* i 2 pi) tooth-count)))
        (gl:normal (- (cos angle)) (- (sin angle)) 0)
        (gl:vertex (* r0 (cos angle)) (* r0 (sin angle)) z)
        (gl:vertex (* r0 (cos angle)) (* r0 (sin angle)) (- z))))
    (gl:end)
    (gl:end-list)
    list))

(defun draw-gear (gear dx dy dz angle)
  (gl:push-matrix)
  (gl:translate dx dy dz)
  (gl:rotate angle 0 0 1)
  (gl:call-list gear)
  (gl:pop-matrix))

(defun normalize-angle (angle)
  (x:while (minusp angle)
    (incf angle +360+))
  (x:while (> angle +360+)
    (decf angle +360+))
  angle)
