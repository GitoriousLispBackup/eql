;;; code taken from "gui.lisp"

(defpackage :select
  (:use :common-lisp :eql)
  (:export
   #:ini
   #:select-mode))

(provide :select)

(in-package :eql)

(defvar *sel*)

(export '*sel*)

(in-package :select)

(defun ini ()
  (qadd-event-filter nil |QEvent.MouseButtonPress| 'object-selected)
  (local-server:send-to-client :select-loaded))

(let ((cross-cursor (qnew "QCursor(Qt::CursorShape)" |Qt.CrossCursor|))
      listen)
  (defun object-selected (obj ev)
    (when listen
      (setf listen nil)
      (setf eql:*sel* obj)
      (indicate)
      (qfun "QApplication" "restoreOverrideCursor")
      (local-server:send-to-client :selected (princ-to-string eql:*sel*))
      t)) ; event filter
  (defun select-mode ()
    (if (qfun "QApplication" "topLevelWidgets")
        (progn
          (setf listen t)
          (qfun "QApplication" "setOverrideCursor" cross-cursor))
        (qmsg (tr "Please create widgets first.")))))

(defun indicate ()
  (let ((obj eql:*sel*))
    (loop
       (let ((p (qfun obj "parentWidget")))
         (if (qnull-object p)
             (return)
             (setf obj p))))
    (indicate-start obj eql:*sel*)))

(defun indicate-start (par child)
  (let ((indi (qnew "QLabel"
                    "size" (nthcdr 2 (qget par "geometry")))))
    (x:do-with (qfun indi)
      ("setParent" par)
      ("move" (list 0 0)))
    (let* ((pix (qfun "QPixmap" "grabWidget" par))
           (dark (to-dark pix)))
      (qfun indi "setPixmap" (set-highlight indi pix dark child)))
    (qfun indi "show")
    (qsingle-shot 500 (lambda () (qdel indi)))))

(defun to-dark (pix)
  (let ((dark (qcopy pix)))
    (qlet ((brush "QBrush")
           (pnt "QPainter"))
      (x:do-with (qfun brush)
        ("setColor(QColor)" "black")
        ("setStyle" |Qt.SolidPattern|))
      (x:do-with (qfun pnt)
        ("begin(QPixmap*)" dark)
        ("setOpacity" 0.6)
        ("fillRect(QRect,QBrush)" (qfun dark "rect") brush)))
    dark))

(defun highlight (indi child)
  (let ((pos (list 0 0))
        (obj child))
    (loop
       (when (qnull-object obj)
         (return))
       (setf pos (mapcar '+ pos (qfun obj "mapToParent" (list 0 0))))
       (when (qeql (qfun indi "parentWidget")
                   (setf obj (qfun obj "parentWidget")))
         (return)))
    (if (qnull-object obj)
        (list 0 0 0 0)
        (append pos (list (qget child "width")
                          (qget child "height"))))))

(defun set-highlight (indi pix dark child)
  (qlet ((pnt "QPainter"))
    (qfun pnt "begin(QPixmap*)" dark)
    (let ((rect (highlight indi child)))
      (qfun pnt "drawPixmap(QRect,QPixmap,QRect)" rect pix rect)))
  dark)

(ini)
