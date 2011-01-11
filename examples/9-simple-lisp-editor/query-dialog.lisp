(defpackage :query-dialog
  (:use :common-lisp :eql)
  (:export
    #:get-text))

(provide :query-dialog)

(in-package :query-dialog)

(defconstant +accepted+   1 "dialog code")
(defconstant +text-input+ 0 "input mode")

(defun get-text (message)
  (qlet ((dlg "QInputDialog(QWidget*,Qt::WindowFlags)" nil "WindowStaysOnTopHint"))
    (x:do-with (qfun dlg)
      ("setInputMode" +text-input+)
      ("setWindowTitle" (tr "Query Dialog"))
      ("setLabelText" message)
      ("resize" '(400 0)))
    (qsingle-shot 0 (lambda () (x:do-with (qfun dlg) "activateWindow" "raise")))
    (if (= +accepted+ (qfun dlg "exec"))
        (qfun dlg "textValue")
        "")))
