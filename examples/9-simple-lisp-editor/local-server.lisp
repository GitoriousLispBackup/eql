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

(defvar *function*               'feed-top-level)
(defvar *server*                 (qnew "QLocalServer"))
(defvar *timer*                  (qnew "QTimer" "singleShot" t))
(defvar *client*                 nil)
(defvar *standard-output-buffer* (make-string-output-stream))
(defvar *error-output-buffer*    (make-string-output-stream))
(defvar *terminal-out-buffer*    (make-string-output-stream))

(defparameter *current-single-shot* nil)

(defun ini (&optional (name "EQL:simple-lisp-editor"))
  (qfun "QLocalServer" "removeServer" name)
  (if (qfun *server* "listen" name)
      (progn
        (setf *standard-output* (make-broadcast-stream *standard-output*
                                                       *standard-output-buffer*)
              *error-output*    (make-broadcast-stream *error-output*
                                                       *error-output-buffer*)
              *terminal-io*     (make-two-way-stream   (two-way-stream-input-stream *terminal-io*)
                                                       (make-broadcast-stream (two-way-stream-output-stream *terminal-io*)
                                                                              *terminal-out-buffer*)))
        (setf si::*tpl-print-current-hook* 'send-file-position)
        (qset (qapp) "quitOnLastWindowClosed" nil)
        (qconnect *server* "newConnection()" 'read-from-client)
        (qconnect *timer* "timeout()" 'call-delayed)
        (multiple-value-bind (eql-version qt-version)
            (qversion)
          (setf si:*tpl-prompt-hook*
                (format nil "~%EQL local-server (ECL ~A, EQL ~A, Qt ~A)~@
                             Use local-client to send input.~@
                             Keyboard input possible only in the debugger."
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
  (funcall *function* (qfun *client* "readAll"))
  (send-to-client :expression (get-output-stream-string *standard-output-buffer*)))

(defun current-package-name ()
  (if (eql (find-package :cl-user) *package*)
      "CL-USER"
      (car (sort (list* (package-name *package*) (package-nicknames *package*))
                 (lambda (x y) (< (length x) (length y)))))))

(let ((n 0))
  (defun feed-top-level (data)
    (let ((str (qfrom-utf8 data))
          (pkg (current-package-name))
          (counter (princ-to-string (incf n))))
      (format t "~%~A [~A] ~A~%~A"
              pkg
              counter
              (make-string (- 50 (length counter) (length pkg)) :initial-element #\-)
              str)
      (setf si::*read-string* str))
    (next-single-shot :start-top-level)))

(defun next-single-shot (curr)
  (setf *current-single-shot* curr)
  (qfun *timer* "start" 50))

(defun call-delayed ()
  (case *current-single-shot*
    (:start-top-level
       (si::%top-level)
       (let ((output (get-output-stream-string *standard-output-buffer*)))
         (send-to-client :result
                         ;; cut both prompts
                         (subseq output
                                 (1+ (position #\> output))
                                 (position #\Newline output :from-end t))))
       (next-single-shot :send-error))
    (:send-error
       (let ((err (get-output-stream-string *error-output-buffer*)))
         (unless (x:empty-string err)
           (send-to-client :error err))))))

(defun send-file-position (file pos)
  (send-to-client :file-position (format nil "(~S . ~D)" file pos)))

(defun send-to-client (type str)
  (when (qfun *client* "isValid")
    (x:do-with (qfun *client*)
      ("write(QByteArray)" (x:string-to-bytes (format nil "~S ~A" type (qutf8 str))))
      "flush")))

(ini)
