(defpackage :debug-dialog
  (:use :common-lisp :eql)
  (:export
    #:command))

(provide :debug-dialog)

(in-package :debug-dialog)

(defconstant +accepted+ 1 "dialog code")
(defconstant +base+     9 "color role")

(defun command (messages font)
  (qlet ((dlg "QDialog(QWidget*,Qt::WindowFlags)" nil "WindowStaysOnTopHint"
              "windowTitle" (tr "Debug Dialog")
              "size" '(600 400))
         (msg "QPlainTextEdit")
         (lb "QLabel" "text" (tr "Enter debug command (:h for help)"))
         (cmd "QLineEdit")
         (btn "QDialogButtonBox")
         (lay "QVBoxLayout(QWidget*)" dlg))
    (x:do-with (qset msg)
      ("readOnly" t)
      ("font" font)
      ("tabStopWidth" (qlet ((fm "QFontMetrics(QFont)" font))
                        (* 8 (qfun fm "width(QChar)" #\Space)))))
    (x:do-with (qfun btn "addButton")
      #.(qenum "QDialogButtonBox::StandardButtons" "Ok")
      #.(qenum "QDialogButtonBox::StandardButtons" "Cancel"))
    (x:do-with (qfun lay "addWidget")
      msg lb cmd btn)
    (set-color msg +base+ "lightyellow")
    (qconnect btn "accepted()" dlg "accept()")
    (qconnect btn "rejected()" dlg "reject()")
    (qfun cmd "setFocus")
    (qsingle-shot 0 (lambda () (x:do-with (qfun dlg) "activateWindow" "raise")))
    (add-messages msg messages)
    (if (= +accepted+ (qfun dlg "exec"))
        (qget cmd "text")
        ":q")))

(defun set-color (widget role color)
  (let ((pal (qget widget "palette")))
    (qfun pal "setColor(QPalette::ColorRole,QColor)" role color)
    (qset widget "palette" pal)))

(defun add-messages (text-edit messages)
  (qlet ((cur (qfun text-edit "textCursor")))
    (dolist (msg messages)
      (qlet ((col "QBrush(QColor)" (cdr msg))
             (frm "QTextCharFormat"))
        (qfun frm "setForeground" col)
        (qfun cur "setCharFormat" frm)
        (qfun text-edit "setTextCursor" cur))
      (qfun text-edit "appendPlainText" (car msg)))))
