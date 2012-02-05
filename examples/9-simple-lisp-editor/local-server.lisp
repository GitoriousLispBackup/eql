;;; copyright (c) 2010-2012 Polos Ruetz

(unless (eql:qrequire :network)
  (error "[EQL] module :network required")
  (eql:qq))

(require :input-hook   (probe-file "input-hook.lisp"))
(require :top-level    (probe-file "top-level.lisp"))
(require :query-dialog (probe-file "query-dialog.lisp"))
(require :debug-dialog (probe-file "debug-dialog.lisp"))
(require :settings     (probe-file "settings.lisp"))

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
   #:*function*
   #:ini
   #:clear
   #:output
   #:send-to-client))

(provide :local-server)

(in-package :local-server)

(defvar *function*               'feed-top-level)
(defvar *server*                 (qnew "QLocalServer"))
(defvar *client*                 nil)
(defvar *standard-output-buffer* (make-string-output-stream))
(defvar *trace-output-buffer*    (make-string-output-stream))
(defvar *error-output-buffer*    (make-string-output-stream))
(defvar *terminal-out-buffer*    (make-string-output-stream))
(defvar *gui-debug-io*)

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
        (set-debugger-hook)
        (setf si::*tpl-print-current-hook* 'send-file-position)
        (qset (qapp) "quitOnLastWindowClosed" nil)
        (qconnect *server* "newConnection()" 'new-client-connection)
        (multiple-value-bind (eql-version qt-version)
            (qversion)
          (format t "~%EQL local-server (ECL ~A, EQL ~A, Qt ~A)~@
                       Use local-client to send input.~%"
                  (si::lisp-implementation-version) eql-version qt-version))
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
                                                 *error-output-buffer*))
  (setf *terminal-io*  (make-two-way-stream (two-way-stream-input-stream *terminal-io*)
                                            (make-broadcast-stream (two-way-stream-output-stream *terminal-io*)
                                                                   *terminal-out-buffer*))
        *query-io*     (make-two-way-stream (input-hook:new 'handle-query-io)
                                            (two-way-stream-output-stream *terminal-io*))
        *gui-debug-io* (make-two-way-stream (input-hook:new 'handle-debug-io)
                                            (two-way-stream-output-stream *terminal-io*))))

(let (size bytes-read data)
  (defun reset (&optional data-only)
    (unless data-only
      (when (and *client* (not (qnull-object *client*)))
        (qdisconnect *client*)
        (qdel *client*)))
    (setf size nil
          data nil))
  (defun new-client-connection ()
    (reset)
    (setf *client* (qfun *server* "nextPendingConnection"))
    (qconnect *client* "readyRead()" 'read-from-client)
    (qconnect *client* "disconnected()" (lambda () (qdel *client* :later))))
  (defun read-from-client ()
    (when *function*
      (let ((all (qfun *client* "readAll")))
        ;; data may arrive splitted in more blocks
        (if size
            (when (< bytes-read size)
              (push all data)
              (incf bytes-read (length all)))
            (let ((head (x:bytes-to-string (subseq all 0 (1+ (position (char-code #\Space) all)))))
                  end)
              (multiple-value-setq (size end)
                (read-from-string head))
              (push (subseq all end) data)
              (setf bytes-read (length (first data)))))
        (when (= size bytes-read)
          (funcall *function* (qfrom-utf8 (apply 'concatenate 'vector (nreverse data))))
          (reset :data-only))))))

(defun current-package-name ()
  (if (eql (find-package :cl-user) *package*)
      "CL-USER"
      (car (sort (list* (package-name *package*) (package-nicknames *package*))
                 (lambda (x y) (< (length x) (length y)))))))

(let ((n 0))
  (defun feed-top-level (str)
    (unless (x:empty-string str)
      (let ((pkg (current-package-name))
            (counter (princ-to-string (incf n))))
        (format t "~%~A [~A] ~A~%~A"
                pkg
                counter
                (make-string (- 50 (length counter) (length pkg)) :initial-element #\-)
                str)
        (setf si::*read-string* str))
      (start-top-level))))

(defun send-output (type var)
  (let ((str (get-output-stream-string var)))
    (unless (x:empty-string str)
      (when (eql :output type)
        ;; cut prompt
        (x:when-it (position #\> str)
          (setf str (subseq str (1+ x:it)))))
      (send-to-client type str))))

(defun start-top-level ()
  (send-output :expression *standard-output-buffer*)
  (setf *debug-io* *gui-debug-io*)
  (clear-gui-debug-buffers)
  (si::%top-level)
  (send-output :error  *error-output-buffer*)
  (send-output :trace  *trace-output-buffer*)
  (send-output :output *standard-output-buffer*)
  (send-to-client :values (format nil "~{~%~S~}" si::*latest-values*)))

(defun clear-gui-debug-buffers ()
  (get-output-stream-string *error-output-buffer*)
  (get-output-stream-string *terminal-out-buffer*))

(defun clear ()
  "To use from a client to clear the output buffer. See also function OUTPUT."
  (get-output-stream-string *standard-output-buffer*))

(defun output ()
  "To use from a client to get the current buffer string immediately (e.g. inside a loop). See also function CLEAR."
  (send-to-client :output (get-output-stream-string *standard-output-buffer*)))

(defun send-file-position (file pos)
  (send-to-client :file-position (format nil "(~S . ~D)" file pos)))

(defun send-to-client (type &optional (str ""))
  (flet ((pause ()
           (qprocess-events)
           (sleep 0.05)))
    (when (and *client*
               (not (qnull-object *client*)))
      (x:while (not (zerop (qfun *client* "bytesToWrite")))
        (pause))
      (if (qfun *client* "isWritable")
          (let ((utf8 (qutf8 str)))
            (qfun *client* "write(QByteArray)" (x:string-to-bytes (format nil "~D ~S ~A" (length utf8) type utf8)))
            (pause))
          (qfun "QMessageBox" "critical" nil "EQL" (tr "Could not write to client."))))))

(defun handle-query-io ()
  (let ((txt (query-dialog:get-text (get-output-stream-string *terminal-out-buffer*))))
    (send-to-client :activate-editor)
    (format nil "~A~%" txt)))

(defun handle-debug-io ()
  (let ((cmd (debug-dialog:command (list (cons (get-output-stream-string *error-output-buffer*) "red")
                                         (cons (get-output-stream-string *terminal-out-buffer*) "black"))
                                   eql::*code-font*)))
    (send-to-client :activate-editor)
    (format nil "~A~%" (if (x:empty-string cmd) ":exit" cmd))))

(defun set-debugger-hook ()
  (setf *debugger-hook* (lambda (cond x)
                          ;; allow terminal input after console interrupts
                          (when (eql 'si:interactive-interrupt (type-of cond))
                            (setf *debug-io* *terminal-io*)))))

;;; extensions

(defun widget-selected (widget)
  (send-to-client :widget-selected (princ-to-string widget)))

(ini)
