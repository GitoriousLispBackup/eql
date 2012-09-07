(in-package :eql-user)

;; define class or struct

(defclass my-label-1 ()
  ((label :initform (qnew "QLabel"))))

(defstruct my-label-2
  (label (qnew "QLabel")))

;; specialize THE-QT-OBJECT

(defmethod the-qt-object ((object my-label-1))
  (slot-value object 'label))

(defmethod the-qt-object ((object my-label-2))
  (my-label-2-label object))

;;; The Lisp objects can now be used the same as a QT-OBJECT,
;;; that is: they can be passed as arguments to any EQL function

(defvar *label-1* (make-instance 'my-label-1))
(defvar *label-2* (make-my-label-2))
(defvar *label-3* (qnew "QLabel"))

(defun set-color (widget role color)
  (qlet ((pal (qget widget "palette")))
    (qfun pal "setColor(QPalette::ColorRole,QColor)" role color)
    (qset widget "palette" pal)))

(defun run ()
  (let* ((dialog (qnew "QDialog"))
         (layout (qnew "QVBoxLayout(QWidget*)" dialog)))
    (x:do-with (qfun layout "addWidget")
      *label-1* *label-2* *label-3*)
    (flet ((print-me (label color)
             (qset (symbol-value label) "text" (format nil "<h3 style='color: ~A'>~A ... ~A"
                                                       color
                                                       label
                                                       (qescape (princ-to-string (symbol-value label)))))))
      (set-color dialog |QPalette.Window| "white")
      (print-me '*label-1* "red")
      (print-me '*label-2* "green")
      (print-me '*label-3* "blue"))
    (qfun dialog "show")))

(run)
