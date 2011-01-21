;;; copyright (c) 2010-2011 Polos Ruetz

(unless (eql:qrequire :network)
  (error "[EQL] module :network required")
  (eql:qq))

(defpackage :local-client
  (:use :common-lisp :eql)
  (:export
   #:*function*
   #:*server-name*
   #:ini
   #:request))

(provide :local-client)

(in-package :local-client)

(defvar *function*    nil)
(defvar *socket*      (qnew "QLocalSocket"))
(defvar *server-name* "EQL:simple-lisp-editor")

(defun ini (&optional fun)
  (setf *function* fun)
  (qconnect *socket* "readyRead()" 'read-data))

(let (size bytes-read type data)
  (defun read-data ()
    (when *function*
      (let ((all (qfun *socket* "readAll")))
        ;; data may arrive splitted in more blocks
        (unless size
          (let* ((pos (min 100 (length all)))
                 (head (x:bytes-to-string (subseq all 0 pos)))
                 end)
            (multiple-value-setq (size end)
              (read-from-string head))
            (multiple-value-setq (type end)
              (read-from-string head nil nil :start end))
            (push (subseq all end) data)
            (setf bytes-read (length (first data)))))
        (if (= size bytes-read)
            (progn
              (funcall *function* type (qfrom-utf8 (apply 'concatenate 'vector (nreverse data))))
              (setf size nil
                    data nil))
            (progn
              (push all data)
              (incf bytes-read (length all))))))))

(defun request (str)
  (x:do-with (qfun *socket*)
    "abort"
    ("connectToServer" *server-name*)
    ("waitForConnected" 1000))
  (when (qfun *socket* "isWritable")
    (let ((utf8 (qutf8 str)))
      (x:do-with (qfun *socket*)
        ("write(QByteArray)" (x:string-to-bytes (format nil "~D ~A" (length utf8) utf8)))
        "flush"))))
