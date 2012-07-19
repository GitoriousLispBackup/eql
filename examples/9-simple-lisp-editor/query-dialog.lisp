(defpackage :query-dialog
  (:use :common-lisp :eql)
  (:export
    #:*default-text*
    #:get-text))

(provide :query-dialog)

(in-package :query-dialog)

(defvar *default-text* "")

(defun get-text (message)
  (qlet ((dlg "QInputDialog(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|))
    (x:do-with (qfun dlg)
      ("setInputMode" |QInputDialog.TextInput|)
      ("setWindowTitle" (tr "Query Dialog"))
      ("setLabelText" message)
      ("setTextValue" *default-text*)
      ("resize" '(400 0)))
    (qsingle-shot 0 (lambda () (x:do-with (qfun dlg) "activateWindow" "raise")))
    (if (= |QDialog.Accepted| (qfun dlg "exec"))
        (qfun dlg "textValue")
        "")))

