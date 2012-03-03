(in-package :eql)

(defvar *label* (qnew "QLabel"))
(defvar *edit*  (qnew "QLineEdit"))
(defvar *font*  (qnew "QFont(QString,int)"
                      #+darwin  "Monaco"      #+darwin  12
                      #+linux   "Monospace"   #+linux   9
                      #+windows "Courier New" #+windows 10))

(defun ini ()
  (let* ((widget (qnew "QWidget"))
         (layout (qnew "QVBoxLayout(QWidget*)" widget)))
    (dolist (w (list *label* *edit*))
      (qset w "font" *font*)
      (qfun layout "addWidget" w))
    (qfun *qt-main* "setWidget" widget)
    (qconnect *edit* "returnPressed()" 'eval-edit)
    (qsingle-shot 0 'delayed-ini)))

(defun delayed-ini ()
  (qset *edit* "text" "(in-package :eql)")
  (eval-edit)
  (qset *label* "text" "Enter Lisp expression and hit Return:"))

(defun eval-edit ()
  (qset *label* "text"
        (handler-case (let ((result (eval (read-from-string (qget *edit* "text")))))
                        (qfun *edit* "clear")
                        (princ-to-string result))
          (error (condition)
            (concatenate 'string
                         "<b style='color:red'>Error:</b> "
                         (qescape (princ-to-string condition)))))))

(let (loaded)
  (defun ? ()
    (unless loaded
      (setf loaded t)
      (load "../src/lisp/qselect.lisp"))
    (%qselect (lambda (widget) (qset *label* "text" (format nil "~A (see qsel:*q*)" widget))))))

(defun set-data (data)
  "Example of using dynamic Qt properties for simple data exchange."
  (qfun *qt-main* "setProperty" "data"
        (typecase data
          ;; 2 example cases
          (string (qnew "QVariant(QString)"    data))   ; string
          (vector (qnew "QVariant(QByteArray)" data)))) ; binary data (vector of octets)
  data)

(ini)
