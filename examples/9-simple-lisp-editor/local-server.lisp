;;; copyright (c) 2010 power4projects software

(unless (eql:qrequire :network)
  (error "[EQL] module :network required")
  (eql:qq))

(require :top-level "top-level")

(defpackage :local-server
  (:use :common-lisp :eql)
  (:export
   #:*function*
   #:ini))

(provide :local-server)

(in-package :local-server)

(defvar *function* 'send-to-top-level)
(defvar *server*   (qnew "QLocalServer"))
(defvar *client*   nil)

(defun ini (&optional (name "EQL:simple-lisp-editor"))
  (qfun "QLocalServer" "removeServer" name)
  (if (qfun *server* "listen" name)
      (progn
        (setf si::*tpl-print-current-hook* 'send-file-position)
        (qset (qapp) "quitOnLastWindowClosed" nil)
        (qconnect *server* "newConnection()" 'read-from-client)
        (multiple-value-bind (eql-version qt-version)
            (qversion)
          (setf si:*tpl-prompt-hook*
                (format nil "~%EQL local-server (ECL ~A, EQL ~A, Qt ~A)~@
                             Use local-client to send input.~@
                             Keyboard input possible only in the debugger.~%"
                        (si::lisp-implementation-version) eql-version qt-version)))
        t)
      (progn
        (qfun "QMessageBox" "critical" nil (tr "EQL local-server")
              (format nil (tr "Unable to start the server: ~A.") (qfun *server* "errorString")))
        nil)))

(defun read-from-client ()
  (setf *client* (qfun *server* "nextPendingConnection"))
  (qconnect *client* "disconnected()" *client* "deleteLater()")
  (qfun *client* "waitForReadyRead")
  (funcall *function* (qfun *client* "readAll")))

(let ((n 0))
  (defun send-to-top-level (data)
    (let ((str (qfrom-utf8 data)))
      (setf si::*read-string* str)
      (format t "~A[~D] ------------------------------~%~A"
              (if (zerop n) "> " "") (incf n) str))
    (si::%top-level)))

(defun send-file-position (file pos)
  (when (qfun *client* "isValid")
    (x:do-with (qfun *client*)
      ("write(QByteArray)" (x:string-to-bytes (princ-to-string pos)))
      "flush")))

(ini)
