;;; This is a simple GUI for CL-Sokoban, see http://www.cliki.net/CL-Sokoban 

(load (eql:in-home "examples/7-Sokoban/3rd-party/sokoban"))
(load (eql:in-home "examples/7-Sokoban/3rd-party/levels"))

(defpackage :eql-sokoban
  (:use :common-lisp :eql :cl-sokoban)
  (:export
   #:start))

(in-package :eql-sokoban)

(defconstant +item-types+ '((#\# . :wall)
                            (#\$ . :object)
                            (#\* . :object2)
                            (#\. . :goal)
                            (#\@ . :player)
                            (#\& . :player2)))

(defparameter *items*           nil)
(defparameter *item-size*       nil)
(defparameter *maze*            nil)
(defparameter *my-mazes*        (mapcar 'copy-maze *mazes*))
(defparameter *scene-size*      (list 600 500))
(defparameter *print-text-maze* nil "additionally print maze to terminal")

(defvar *scene* (qnew "QGraphicsScene"
                      "sceneRect" (append (list 0 0) *scene-size*)
                      "backgroundBrush" (qnew "QBrush(QColor)" "slategray")))
(defvar *view*  (qnew "QGraphicsView"
                      "windowTitle" "Sokoban"
                      "size" (list 650 550)))
(defvar *level* (qnew "QSlider(Qt::Orientation)" |Qt.Vertical|
                      "tickInterval" 5
                      "tickPosition" |QSlider.TicksRight|
                      "maximum" (1- (length *my-mazes*))))

(defun assoc* (item alist)
  (cdr (assoc item alist)))

(defun char-type (char)
  (cdr (assoc char +item-types+)))

(defun type-char (type)
  (car (find type +item-types+ :key 'cdr)))

(defun ini ()
  (x:do-with (qfun *view*)
    ("setScene" *scene*)
    ("setRenderHint" |QPainter.Antialiasing|)
    ("setCacheMode" |QGraphicsView.CacheBackground|)
    ("setViewportUpdateMode" |QGraphicsView.BoundingRectViewportUpdate|))
  (let ((zoom-in  (qnew "QToolButton"
                        "text" "Zoom In"))
        (zoom-out (qnew "QToolButton"
                        "text" "Zoom Out"))
        (main     (qnew "QWidget"
                        "windowTitle" "Sokoban"
                        "size" (qget *view* "size")))
        (help     (qnew "QLabel"
                        "text" "<b>Arrows</b> = Move, <b>N</b> = Next, <b>P</b> = Previous, <b>R</b> = Restart"))
        (hbox1    (qnew "QHBoxLayout"))
        (hbox2    (qnew "QHBoxLayout"))
        (layout   (qnew "QVBoxLayout")))
    (dolist (w (list *level* *view*))
      (qfun hbox1 "addWidget" w))
    (dolist (w (list zoom-in zoom-out help))
      (qfun hbox2 "addWidget" w))
    (dolist (lay (list hbox1 hbox2))
      (qfun layout "addLayout" lay))
    (qfun hbox2 "setStretchFactor(QWidget*,int)" help 1)
    (qfun main "setLayout" layout)
    (qconnect *level* "valueChanged(int)" (lambda (val) (set-maze) (draw)))
    (qconnect zoom-in  "clicked()" (lambda () (zoom :in)))
    (qconnect zoom-out "clicked()" (lambda () (zoom :out)))
    (qadd-event-filter nil |QEvent.KeyPress| 'key-pressed)
    (x:do-with (qfun main) "show" "raise")))

(defun set-maze ()
  (setf *maze* (nth (qget *level* "value") *my-mazes*))
  (create-items)
  (draw-items :wall))

(defun clear-items ()
  (qfun *scene* "clear")
  (setf *items* (mapcar (lambda (x) (list (cdr x))) +item-types+)))

(defun create-items ()
  (clear-items)
  (flet ((add (types)
           (dolist (type (x:ensure-list types))
             (let ((item (create-item type)))
               (push item (cdr (assoc type *items*)))
               (qfun *scene* "addItem" item)))))
    (dolist (row (maze-text *maze*))
      (x:do-string (char row)
        (unless (char= #\Space char)
          (let ((type (char-type char)))
            (cond ((find type '(:player :player2))
                   (add '(:player :player2)))
                  ((find type '(:object :object2))
                   (add '(:object :object2 :goal)))
                  ((eql :wall type)
                   (add :wall)))))))))

(let (pixmaps)
  (defun create-item (type)
    (let* ((char (type-char type))
           (file (in-home (format nil "examples/7-Sokoban/pics/~(~A~).png" type)))
           (pixmap (assoc file pixmaps :test 'string=))
           (item (if (or pixmap
                         (probe-file file))
                     (qnew "QGraphicsPixmapItem(QPixmap)"
                           (cdr (if pixmap
                                    pixmap
                                    (first (push (cons file (qnew "QPixmap(QString)" file))
                                                 pixmaps)))))
                     (let ((item (qnew "QGraphicsTextItem"))) ; simple text item dummies (when pics are missing)
                       (qfun item "setHtml"
                             (format nil "<span style='font-family:monospace; font-size:12pt; font-weight:bold; color:~A;'>~C"
                                     (case type
                                       (:wall    "blue")
                                       (:object  "orange")
                                       (:object2 "gold")
                                       (:goal    "white")
                                       (:player  "red")
                                       (:player2 "magenta"))
                                     char))
                       item))))
      (unless *item-size*
        (setf *item-size* (cddr (qfun item "boundingRect"))))
      item)))

(defun key-pressed (obj event)
  (flet ((change-level (x)
           (qset *level* "value" (+ x (qget *level* "value")))))
    (case (qfun* event "QKeyEvent" "key")
      (#.|Qt.Key_Up|
         (move :north *maze*))
      (#.|Qt.Key_Down|
         (move :south *maze*))
      (#.|Qt.Key_Left|
         (move :west *maze*))
      (#.|Qt.Key_Right|
         (move :east *maze*))
      (#.|Qt.Key_N|
         (change-level 1))
      (#.|Qt.Key_P|
         (change-level -1))
      (#.|Qt.Key_R|
         (let ((level (qget *level* "value")))
           (setf (nth level *my-mazes*)
                 (copy-maze (nth level *mazes*)))
           (set-maze)))
      (t (return-from key-pressed)))
    (draw)
    t)) ; event filter

(defun draw-items (type)
  (let ((char (type-char type))
        (items (assoc* type *items*))
        (y 0))
    (unless (eql :wall type)
      (dolist (item items)
        (qfun* item "QGraphicsItem" "setVisible" nil)))
    (dolist (row (maze-text *maze*))
      (let ((x 0))
        (x:do-string (curr-char row)
          (when (char= char curr-char)
            (x:do-with (qfun* (first items) "QGraphicsItem")
              ("setPos" (list x y))
              ("setVisible" t))
            (setf items (rest items)))
          (incf x (first *item-size*))))
      (incf y (second *item-size*)))))
  
(defun draw ()
  (dolist (type '(:player :object :goal :player2 :object2))
    (draw-items type))
  (when *print-text-maze*
    (format t "~{~&~A~%~}" (maze-text *maze*))))

(defun zoom (direction)
  (let ((f (if (eql :in direction) 3/2 2/3)))
    (qfun *view* "scale" f f)))

(defun start ()
  (ini)
  (set-maze)
  (draw)
  (zoom :out))

(start)
