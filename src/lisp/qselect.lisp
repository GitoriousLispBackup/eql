;;; copyright (c) 2010-2012 Polos Ruetz
;;;
;;; Allows to visually select any (child) widget.
;;; On selecting, the widget will be highlighted and bound to the variable qsel:*q* 

(defpackage :qselect
  (:nicknames :qsel)
  (:use :common-lisp :eql)
  (:export
   #:*q*))

(in-package :eql)

(let (initialized)
  (defun %qselect (on-selected)
    (unless initialized
      (setf initialized t)
      (qadd-event-filter nil |QEvent.MouseButtonPress| 'qsel::object-selected))
    (setf qsel::*on-selected* on-selected)
    (qsel::select-mode)))

(in-package :qselect)

(defvar *q*           nil)
(defvar *on-selected* nil)

(let ((cross-cursor (qnew "QCursor(Qt::CursorShape)" |Qt.CrossCursor|))
      listen)
  (defun object-selected (object event)
    (when listen
      (setf listen nil)
      (setf *q* object)
      (setf (qt-object-unique object) (qfuns *q* ("property" "EQL.unique") "toUInt"))
      (indicate)
      (qfun "QApplication" "restoreOverrideCursor")
      (when *on-selected*
        (funcall *on-selected* object))
      t)) ; event filter
  (defun select-mode ()
    (if (qfun "QApplication" "topLevelWidgets")
        (progn
          (setf listen t)
          (qfun "QApplication" "setOverrideCursor" cross-cursor))
        (qmsg (tr "Please create widgets first.")))))

(defun indicate ()
  (let ((object *q*))
    (loop
       (let ((p (qfun object "parentWidget")))
         (if (qnull-object p)
             (return)
             (setf object p))))
    (indicate-start object *q*)))

(defun indicate-start (parent child)
  (let ((indicate (qnew "QLabel"
                    "size" (nthcdr 2 (qget parent "geometry")))))
    (qfun indicate "setParent" parent)
    (qfun indicate "move" '(0 0))
    (let* ((pix (qfun "QPixmap" "grabWidget" parent))
           (dark (to-dark pix)))
      (qfun indicate "setPixmap" (set-highlight indicate pix dark child)))
    (qfun indicate "show")
    (qsingle-shot 500 (lambda () (qdel indicate)))))

(defun to-dark (pixmap)
  (let ((dark (qcopy pixmap)))
    (qlet ((brush "QBrush")
           (painter "QPainter(QPixmap*)" dark))
      (qfun brush "setColor(QColor)" "black")
      (qfun brush "setStyle" |Qt.SolidPattern|)
      (qfun painter "setOpacity" 0.6)
      (qfun painter "fillRect(QRect,QBrush)" (qfun dark "rect") brush))
    dark))

(defun highlight (indicate child)
  (let ((pos '(0 0))
        (object child))
    (loop
       (when (qnull-object object)
         (return))
       (setf pos (mapcar '+ pos (qfun object "mapToParent" '(0 0))))
       (when (qeql (qfun indicate "parentWidget")
                   (setf object (qfun object "parentWidget")))
         (return)))
    (if (qnull-object object)
        '(0 0 0 0)
        (append pos (list (qget child "width")
                          (qget child "height"))))))

(defun set-highlight (indicate pixmap dark child)
  (let ((rect (highlight indicate child)))
    (qlet ((painter "QPainter(QPixmap*)" dark))
      (qfun painter "drawPixmap(QRect,QPixmap,QRect)" rect pixmap rect))
    dark))
