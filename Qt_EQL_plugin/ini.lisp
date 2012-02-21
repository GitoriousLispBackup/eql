(in-package :eql)

(defvar *label* (qnew "QLabel" "text" "Enter Lisp expression and hit Return:"))
(defvar *edit*  (qnew "QLineEdit"))

(defun ini ()
  (let* ((widget (qnew "QWidget"))
         (layout (qnew "QVBoxLayout(QWidget*)" widget)))
    (dolist (w (list *label* *edit*))
      (qfun layout "addWidget" w))
    (qfun *qt-main* "setWidget" widget)
    (qconnect *edit* "returnPressed()" 'eval-edit)))

(defun eval-edit ()
  (qset *label* "text"
        (handler-case (let ((result (eval (read-from-string (qget *edit* "text")))))
                        (qfun *edit* "clear()")
                        (princ-to-string result))
          (error (condition)
            (concatenate 'string
                         "<b style='color:red'>Error:</b> "
                         (qescape (princ-to-string condition)))))))

(defun set-data (data)
  "Example of using dynamic Qt properties for simple data exchange."
  (qfun *qt-main* "setProperty" "data"
        (typecase data
          ;; 2 example cases
          (string (qnew "QVariant(QString)"    data))   ; string
          (vector (qnew "QVariant(QByteArray)" data)))) ; binary data (vector of octets)
  data)

(ini)