(in-package :eql)

(defvar *window*    (qnew "QDialog"))
(defvar *label*     (qnew "QLabel"))
(defvar *line-edit* (qnew "QLineEdit"))
(defvar *layout*    (qnew "QVBoxLayout"))

(defun start ()
  (qset *window* "windowTitle" "My Personal Analyst")
  (qset *label* "text" "Please enter your <b>Top Secret</b> (you will feel better)")
  (qset *line-edit* "echoMode" |QLineEdit.Password|)
  (dolist (w (list *label* *line-edit*))
    (qfun *layout* "addWidget" w))
  (qfun *window* "setLayout" *layout*)
  (qconnect *line-edit* "returnPressed()" 'analyze)
  (x:do-with (qfun *window*) "show" "raise"))

(defun analyze ()
  (qlet ((dlg "QProgressDialog"
              "maximum" 20
              "labelText" "<h1 style='color:crimson'>Wow!</h1><p>(updating WikiLeaks...)</p>"))
    (x:do-with (qfun dlg) "show" "raise")
    (dotimes (n (qget dlg "maximum"))
      (sleep 0.1)
      (qset dlg "value" n)
      (qprocess-events)))
  (qfun *line-edit* "clear"))

(start)
