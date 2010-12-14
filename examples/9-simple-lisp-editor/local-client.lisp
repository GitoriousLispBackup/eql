;;; copyright (c) 2010 power4projects software

(unless (eql:qrequire :network)
  (error "[EQL] module :network required")
  (eql:qq))

(defpackage :local-client
  (:use :common-lisp :eql)
  (:export
   #:*function*
   #:*server-name*
   #:ini
   #:request
   #:string-request))

(provide :local-client)

(in-package :local-client)

(defvar *function*    nil)
(defvar *socket*      (qnew "QLocalSocket"))
(defvar *server-name* "EQL:simple-lisp-editor")

(defun ini (&optional fun)
  (setf *function* fun)
  (qconnect *socket* "readyRead()" 'read-all))

(defun read-all ()
  (when *function*
    (funcall *function* (read-from-string (qfrom-utf8 (qfun *socket* "readAll"))))))

(defun request (data)
  (x:do-with (qfun *socket*)
    "abort"
    ("connectToServer" *server-name*)
    ("write(QByteArray)" data)))

(defun string-request (str)
  (request (x:string-to-bytes (qutf8 str))))
