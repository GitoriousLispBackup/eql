;;; copyright (c) 2010 power4projects software

(unless (eql:qrequire :network)
  (error "[EQL] module :network required")
  (eql:qq))

(require :input-hook   "input-hook")
(require :top-level    "top-level")
(require :debug-dialog "debug-dialog")

(defpackage :local-server
  (:use :common-lisp :eql)
  (:export
   #:+
   #:++
   #:+++
   #:*
   #:**
   #:***
   #:/
   #://
   #:///
   #:*debug-readline*
   #:*function*
   #:ini))

(provide :local-server)

(in-package :local-server)

(defvar *function*               'feed-top-level)
(defvar *server*                 (qnew "QLocalServer"))
(defvar *client*                 nil)
(defvar *standard-output-buffer* (make-string-output-stream))
(defvar *trace-output-buffer*    (make-string-output-stream))
(defvar *error-output-buffer*    (make-string-output-stream))
(defvar *terminal-out-buffer*    (make-string-output-stream))

;; Qt
(defvar *font* (qnew "QFont(QString,int)" #+linux "Courier" #-linux "Courier New" #+darwin 13 #-darwin 10))

;; REPL variables
(defvar +   nil)
(defvar ++  nil)
(defvar +++ nil)
(defvar *   nil)
(defvar **  nil)
(defvar *** nil)
(defvar /   nil)
(defvar //  nil)
(defvar /// nil)

(defun ini (&optional (name "EQL:simple-lisp-editor"))
  (qfun "QLocalServer" "removeServer" name)
  (if (qfun *server* "listen" name)
      (progn
        (ini-streams)
        (setf input-hook:*function* 'handle-debug-io) ; see *debug-io* in top-level::%top-level
        (setf si::*tpl-print-current-hook* 'send-file-position)
        (qset (qapp) "quitOnLastWindowClosed" nil)
        (qconnect *server* "newConnection()" 'read-from-client)
        (multiple-value-bind (eql-version qt-version)
            (qversion)
          (setf si:*tpl-prompt-hook*
                (format nil "~%EQL local-server (ECL ~A, EQL ~A, Qt ~A)~@
                             Use local-client to send input."
                        (si::lisp-implementation-version) eql-version qt-version)))
        t)
      (progn
        (qfun "QMessageBox" "critical" nil (tr "EQL local-server")
              (format nil (tr "Unable to start the server: ~A.") (qfun *server* "errorString")))
        nil)))

(defun ini-streams ()
  (setf *standard-output* (make-broadcast-stream *standard-output*
                                                 *standard-output-buffer*)
        *trace-output*    (make-broadcast-stream *trace-output*
                                                 *trace-output-buffer*)
        *error-output*    (make-broadcast-stream *error-output*
                                                 *error-output-buffer*)
        *terminal-io*     (make-two-way-stream   (two-way-stream-input-stream *terminal-io*)
                                                 (make-broadcast-stream (two-way-stream-output-stream *terminal-io*)
                                                                        *terminal-out-buffer*)))
  (setf *query-io* (make-synonym-stream '*terminal-io*)))

(defun read-from-client ()
  (setf *client* (qfun *server* "nextPendingConnection"))
  (qconnect *client* "disconnected()" *client* "deleteLater()")
  (qfun *client* "waitForReadyRead")
  (funcall *function* (qfrom-utf8 (qfun *client* "readAll")))
  (send-output :expression *standard-output-buffer*))

(defun current-package-name ()
  (if (eql (find-package :cl-user) *package*)
      "CL-USER"
      (car (sort (list* (package-name *package*) (package-nicknames *package*))
                 (lambda (x y) (< (length x) (length y)))))))

(let ((n 0))
  (defun feed-top-level (str)
    (let ((pkg (current-package-name))
          (counter (princ-to-string (incf n))))
      (format t "~%~A [~A] ~A~%~A"
              pkg
              counter
              (make-string (- 50 (length counter) (length pkg)) :initial-element #\-)
              str)
      (setf si::*read-string* str))
    (qsingle-shot 50 'start-top-level)))

(defun send-output (type var)
  (let ((str (get-output-stream-string var)))
    (unless (x:empty-string str)
      (when (eql :result type)
        ;; cut prompts
        (let ((p1 (1+ (position #\> str)))
              (p2 (position #\Newline str :from-end t)))
          (setf str (subseq str p1 (max p1 p2)))
          (unless (x:empty-string str)
            (setf str (string-left-trim " " str)))))
      (sleep 0.05)
      (send-to-client type str))))

(defun start-top-level ()
  (si::%top-level)
  (send-output :error  *error-output-buffer*)
  (send-output :trace  *trace-output-buffer*)
  (send-output :result *standard-output-buffer*))

(defun send-file-position (file pos)
  (send-to-client :file-position (format nil "(~S . ~D)" file pos)))

(defun send-to-client (type &optional (str ""))
  (when (qfun *client* "isValid")
    (x:do-with (qfun *client*)
      ("write(QByteArray)" (x:string-to-bytes (format nil "~S ~A" type (qutf8 str))))
      "flush")))

(defun handle-debug-io ()
  (let ((cmd (debug-dialog:command (list (cons (get-output-stream-string *error-output-buffer*) "red")
                                         (cons (get-output-stream-string *terminal-out-buffer*) "black"))
                                   *font*)))
    (send-to-client :activate-editor)
    (format nil "~A~%" (if (x:empty-string cmd) ":q" cmd))))

(ini)
