(in-package :cl-user)

(use-package :eql)

;; define a Lisp class

(defclass my-edit ()
  ((line-edit :initform (qnew "QLineEdit"))))

;; define the QT-OBJECT of the class

(defmethod the-qt-object ((object my-edit))
  (slot-value object 'line-edit))

;; the Lisp object can now be used the same as a QT-OBJECT

(defvar *edit-1* (make-instance 'my-edit)) ; Lisp object
(defvar *edit-2* (qnew "QLineEdit"))       ; vanilla Qt object

(defun run ()
  (let* ((dialog (qnew "QDialog"))
         (layout (qnew "QVBoxLayout(QWidget*)" dialog)))
    (x:do-with (qfun layout "addWidget")
      *edit-1* *edit-2*)
    (qset *edit-1* "text" (princ-to-string *edit-1*))
    (qset *edit-2* "text" (princ-to-string *edit-2*))
    (print (qget *edit-1* "text"))
    (print (qget *edit-2* "text"))
    (qfun dialog "show")))

(run)
