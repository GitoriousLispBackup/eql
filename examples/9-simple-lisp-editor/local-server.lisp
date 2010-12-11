;;; copyright (c) 2010 power4projects software

(unless (eql:qrequire :network)
  (error "[EQL] module :network required")
  (eql:qq))

(require :top-level "top-level")

(defpackage :local-server
  (:use :common-lisp :eql)
  (:export
   #:*function*
   #:ini
   #:send))

(provide :local-server)

(in-package :local-server)

(defvar *server* (qnew "QLocalServer"))

(defparameter *function* 'send-to-top-level)

(defun ini (&optional (name "EQL:simple-lisp-editor"))
  (qfun "QLocalServer" "removeServer" name)
  (if (qfun *server* "listen" name)
      (progn
        (qset (qapp) "quitOnLastWindowClosed" nil)
        (qconnect *server* "newConnection()" 'send)
        (multiple-value-bind (eql-version qt-version)
            (qversion)
          (setf si:*tpl-prompt-hook*
                (format nil "~%EQL local-server (ECL ~A, EQL ~A, Qt ~A)~@
                             Use local-client to send input.~@
                             Keyboard input only possible in the debugger."
                        (si::lisp-implementation-version) eql-version qt-version)))
        t)
      (progn
        (qfun "QMessageBox" "critical" nil (tr "EQL local-server")
              (format nil (tr "Unable to start the server: ~A.") (qfun *server* "errorString")))
        nil)))

(defun send ()
  (let ((client (qfun *server* "nextPendingConnection")))
    (qconnect client "disconnected()" client "deleteLater()")
    (qfun client "waitForReadyRead")
    (let ((data (funcall *function* (qfun client "readAll"))))
      (x:do-with (qfun client)
        ("write(QByteArray)" data)
        "flush"
        "disconnectFromServer"))))

(defun send-to-top-level (data)
  (let ((str (x:bytes-to-string data)))
    (setf si::*read-string* str)
    (princ str))
  (si::%top-level))

(ini)
