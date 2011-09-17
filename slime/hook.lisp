(in-package :eql)

(let* ((main   (qnew "QDialog"
                     "windowTitle" "Emergency Hook for Emacs/Slime"
                     "size" '(400 200)))
       (edit   (qnew "QLineEdit"))
       (output (qnew "QTextEdit"
                     "readOnly" t))
       (break  (qnew "QToolButton"
                     "text" "(break)"))
       (hbox   (qnew "QHBoxLayout"))
       (layout (qnew "QVBoxLayout(QWidget*)" main)))
  (dolist (w (list edit break))
    (qfun hbox "addWidget" w))
  (qfun layout "addWidget" output)
  (qfun layout "addLayout" hbox)
  (qconnect edit "returnPressed()"
            (lambda ()
              (qfun output "append"
                    (prin1-to-string (eval (read-from-string (qget edit "text")))))
              (qfun edit "clear")))
  (qconnect break "clicked()"
            (lambda ()
              (qfun main "showMinimized")
              (break)))
  (qfun main "showMinimized"))
