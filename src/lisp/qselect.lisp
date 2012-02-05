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
      (setf (qt-object-unique object) (qfun (qfun *q* "property" "EQL.unique") "toUInt"))
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
  (let ((obj *q*))
    (loop
       (let ((p (qfun obj "parentWidget")))
         (if (qnull-object p)
             (return)
             (setf obj p))))
    (indicate-start obj *q*)))

(defun indicate-start (parent child)
  (let ((indi (qnew "QLabel"
                    "size" (nthcdr 2 (qget parent "geometry")))))
    (qfun indi "setParent" parent)
    (qfun indi "move" (list 0 0))
    (let* ((pix (qfun "QPixmap" "grabWidget" parent))
           (dark (to-dark pix)))
      (qfun indi "setPixmap" (set-highlight indi pix dark child)))
    (qfun indi "show")
    (qsingle-shot 500 (lambda () (qdel indi)))))

(defun to-dark (pixmap)
  (let ((dark (qcopy pixmap)))
    (qlet ((brush "QBrush")
           (pnt "QPainter"))
      (qfun brush "setColor(QColor)" "black")
      (qfun brush "setStyle" |Qt.SolidPattern|)
      (qfun pnt "begin(QPixmap*)" dark)
      (qfun pnt "setOpacity" 0.6)
      (qfun pnt "fillRect(QRect,QBrush)" (qfun dark "rect") brush))
    dark))

(defun highlight (indicate child)
  (let ((pos '(0 0))
        (obj child))
    (loop
       (when (qnull-object obj)
         (return))
       (setf pos (mapcar '+ pos (qfun obj "mapToParent" (list 0 0))))
       (when (qeql (qfun indicate "parentWidget")
                   (setf obj (qfun obj "parentWidget")))
         (return)))
    (if (qnull-object obj)
        '(0 0 0 0)
        (append pos (list (qget child "width")
                          (qget child "height"))))))

(defun set-highlight (indicate pixmap dark child)
  (let ((rect (highlight indicate child)))
    (qlet ((pnt "QPainter(QPixmap*)" dark))
      (qfun pnt "drawPixmap(QRect,QPixmap,QRect)" rect pixmap rect))
    dark))
