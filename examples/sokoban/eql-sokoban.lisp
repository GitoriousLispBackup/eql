;;; copyright (c) 2010 power4projects software
;;;
;;; This is a simple GUI for CL-Sokoban, see http://www.cliki.net/CL-Sokoban 

(load (eql:in-home "examples/sokoban/3rd-party/sokoban"))
(load (eql:in-home "examples/sokoban/3rd-party/levels"))

(defpackage :eql-sokoban
  (:use :common-lisp :util :eql :cl-sokoban)
  (:export
   #:start))

(in-package :eql-sokoban)

(defconstant +antialiasing+ 1 "render hint")

(defconstant +item-types+ '((#\# . :wall)
                            (#\$ . :object)
                            (#\* . :object2)
                            (#\. . :goal)
                            (#\@ . :player)
                            (#\& . :player2)))

(defparameter *items*           nil)
(defparameter *item-size*       nil)
(defparameter *level*           0)
(defparameter *maze*            nil)
(defparameter *my-mazes*        (mapcar #'copy-maze *mazes*))
(defparameter *scene*           nil)
(defparameter *view*            nil)
(defparameter *scene-size*      (list 600 500))
(defparameter *print-text-maze* nil "additionally print maze to terminal")

(defmacro key (name)
  `(qenum "Qt::Key" ,name))

(defun assoc* (item alist)
  (cdr (assoc item alist)))

(defun char-type (char)
  (cdr (assoc char +item-types+)))

(defun type-char (type)
  (car (find type +item-types+ :key #'cdr)))

(defun create-view ()
  (setf *scene* (qnew "QGraphicsScene"
                      "sceneRect" (append (list 0 0) *scene-size*)
                      "backgroundBrush" (qnew "QBrush(QColor)" "slategray"))
        *view*  (qnew "QGraphicsView"
                      "windowTitle" "Sokoban"
                      "size" (list 650 550)))
  (qoverride *scene* "keyPressEvent(QKeyEvent*)" 'key-pressed)
  (do- (qfun *view*)
    ("setScene" *scene*)
    ("setRenderHint" +antialiasing+)
    ("setCacheMode" "CacheBackground")
    ("setViewportUpdateMode" "BoundingRectViewportUpdate"))
  (flet ((button (text)
           (qnew "QToolButton"
                 "text" text
                 "focusPolicy" "NoFocus")))
    (let ((zoom-in  (button "Zoom In"))
          (zoom-out (button "Zoom Out"))
          (main   (qnew "QWidget"
                        "windowTitle" "Sokoban"
                        "size" (qget *view* "size")))
          (help   (qnew "QLabel"
                        "text" "<b>Arrows</b> = Move, <b>N</b> = Next, <b>P</b> = Previous, <b>R</b> = Restart"))
          (hbox   (qnew "QHBoxLayout"))
          (layout (qnew "QVBoxLayout")))
      (dolist (w (list zoom-in zoom-out help))
        (qfun hbox "addWidget" w))
      (qfun hbox "setStretchFactor(QWidget*,int)" help 1)
      (qfun main "setLayout" layout)
      (do- (qfun layout)
        ("addWidget" *view*)
        ("addLayout" hbox))
      (qconnect zoom-in  "clicked()" #'(lambda () (zoom :in)))
      (qconnect zoom-out "clicked()" #'(lambda () (zoom :out)))
      (qfun main "show"))))

(defun set-maze ()
  (setf *level* (min (max 0 *level*) (1- (length *my-mazes*))))
  (setf *maze* (nth *level* *my-mazes*))
  (create-items)
  (draw-items :wall))

(defun clear-items ()
  (qfun *scene* "clear")
  (setf *items* (mapcar #'(lambda (x) (list (cdr x))) +item-types+)))

(defun create-items ()
  (clear-items)
  (flet ((add (types)
           (dolist (type (ensure-list types))
             (let ((item (create-item type)))
               (push item (cdr (assoc type *items*)))
               (qfun *scene* "addItem" item)))))
    (dolist (row (maze-text *maze*))
      (do-string (char row)
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
           (file (in-home (format nil "examples/sokoban/pics/~(~a~).png" type)))
           (pixmap (assoc file pixmaps :test #'string=))
           (item (if (or pixmap
                         (probe-file file))
                     (qnew "QGraphicsPixmapItem(QPixmap)"
                           (cdr (if pixmap
                                    pixmap
                                    (first (push (cons file (qnew "QPixmap(QString)" file))
                                                 pixmaps)))))
                     (let ((item (qnew "QGraphicsTextItem"))) ; simple text item dummies (when pics are missing)
                       (qfun item "setHtml"
                             (format nil "<span style='font-family:monospace; font-size:12pt; font-weight:bold; color:~a;'>~c"
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

(defun key-pressed (event)
  (case (qfun event "key")
          (#.(key "Key_Up")
             (move :north *maze*))
          (#.(key "Key_Down")
             (move :south *maze*))
          (#.(key "Key_Left")
             (move :west *maze*))
          (#.(key "Key_Right")
             (move :east *maze*))
          (#.(key "Key_N")
             (incf *level*)
             (set-maze))
          (#.(key "Key_P")
             (decf *level*)
             (set-maze))
          (#.(key "Key_R")
             (setf (nth *level* *my-mazes*)
                   (copy-maze (nth *level* *mazes*)))
             (set-maze)))
  (draw))

(defun draw-items (type)
  (let* ((char (type-char type))
         (size (maze-dimensions *maze*))
         (items (assoc* type *items*))
         (y 0))
    (unless (eql :wall type)
      (dolist (item items)
        (qfun* item "QGraphicsItem" "setVisible" nil)))
    (dolist (row (maze-text *maze*))
      (let ((x 0))
        (do-string (curr-char row)
          (when (char= char curr-char)
            (do- (qfun* (first items) "QGraphicsItem")
              ("setPos" (list x y))
              ("setVisible" t))
            (setf items (rest items)))
          (incf x (first *item-size*))))
      (incf y (second *item-size*)))))
  
(defun draw ()
  (when *print-text-maze*
    (format t "~{~&~A~%~}" (maze-text *maze*)))
  (dolist (type '(:player :object :goal :player2 :object2))
    (draw-items type)))

(defun zoom (direction)
  (let ((f (if (eql :in direction) 3/2 2/3)))
    (qfun *view* "scale" f f)))

(defun start ()
  (create-view)
  (set-maze)
  (draw)
  (zoom :out))

(start)
