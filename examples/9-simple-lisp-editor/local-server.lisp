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

(defvar *function* 'feed-top-level)
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
  (defun feed-top-level (data)
    (let ((str (qfrom-utf8 data))
          (pkg (package-name *package*))
          (counter (princ-to-string (incf n))))
      (format t "~A[~A] ~A~%~A"
              (if (= 1 n) "> " "")
              counter
              (make-string (- 50
                              (length counter)
                              (if (string= "COMMON-LISP-USER" pkg) 0 (length pkg)))
                           :initial-element #\-)
              str)
      (setf si::*read-string* str))
    (si::%top-level)))

(defun send-file-position (file pos)
  (when (qfun *client* "isValid")
    (x:do-with (qfun *client*)
      ("write(QByteArray)" (x:string-to-bytes (qutf8 (format nil "(~S . ~D)" file pos))))
      "flush")))

(ini)
