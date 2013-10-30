(defpackage :debug-dialog
  (:use :common-lisp :eql)
  (:export
   #:command))

(provide :debug-dialog)

(in-package :debug-dialog)

(defun command (messages font)
  (qlet ((dlg "QDialog(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|
              "windowTitle" (tr "Debug Dialog")
              "size" '(600 400))
         (msg "QTextEdit")
         (lb  "QLabel" "text" (tr "Enter debug command (:h for help)"))
         (cmd "QLineEdit")
         (btn "QDialogButtonBox")
         (lay "QVBoxLayout(QWidget*)" dlg))
    (x:do-with (qset msg)
      ("readOnly" t)
      ("font" font)
      ("tabStopWidth" (qlet ((fm "QFontMetrics(QFont)" font))
                        (* 8 (qfun fm "width(QChar)" #\Space)))))
    (x:do-with (qfun btn "addButton")
      |QDialogButtonBox.Ok|
      |QDialogButtonBox.Cancel|)
    (x:do-with (qfun lay "addWidget")
      msg lb cmd btn)
    (qset-color msg |QPalette.Base| "lightyellow")
    (qconnect btn "accepted()" dlg "accept()")
    (qconnect btn "rejected()" dlg "reject()")
    (qfun cmd "setFocus")
    (qsingle-shot 0 (lambda () (x:do-with (qfun dlg) "activateWindow" "raise")))
    (add-messages msg messages)
    (if (= |QDialog.Accepted| (qfun dlg "exec"))
        (qget cmd "text")
        ":r1")))

(defun add-messages (text-edit messages)
  (dolist (msg messages)
    (x:do-with (qfun text-edit)
      ("setTextColor" (cdr msg))
      ("insertPlainText" (car msg)))))
