(defpackage :encapsulation-example
  (:use :common-lisp :eql)
  (:export))

(in-package :encapsulation-example)

;; define a Lisp class

(defclass my-edit ()
  ((line-edit :initform (qnew "QLineEdit"))))

;; define the QT-OBJECT of the class

(defmethod the-qt-object ((object my-edit))
  (slot-value object 'line-edit))

;; the Lisp object can now be used the same as a QT-OBJECT

(let* ((dialog (qnew "QDialog"))
       (edit-1 (make-instance 'my-edit)) ; Lisp object
       (edit-2 (qnew "QLineEdit"))       ; vanilla Qt object
       (layout (qnew "QVBoxLayout(QWidget*)" dialog)))
  (x:do-with (qfun layout "addWidget")
    edit-1 edit-2)
  (qfun edit-1 "setText" (princ-to-string edit-1))
  (qfun edit-2 "setText" (princ-to-string edit-2))
  (print (qget edit-1 "text"))
  (print (qget edit-2 "text"))
  (qfun dialog "show"))
