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
  (setf si::*read-string* (x:bytes-to-string data))
  (si::%top-level))

(ini)
