;;; copyright (c) 2010 power4projects software

(defpackage :main-window
  (:use :common-lisp :util :eql)
  (:export
   #:start))

(in-package :main-window)

(defparameter *main*        (qload-ui (in-home "examples/main-window.ui")))
(defparameter *edit*        (qfind-child *main* "edit"))
(defparameter *action-open* (qfind-child *main* "action_open"))
(defparameter *action-save* (qfind-child *main* "action_save"))

(defun read-file (file)
  (with-open-file (s file :direction :input)
    (let ((str (make-string (file-length s))))
      (read-sequence str s)
      str)))

(defun set-icon (action name)
  (qset action "icon" (qnew "QIcon(QString)"
                            (in-home (format nil "examples/icons/~a.png" name)))))

(defun start ()
  (qset *main* "pos" (list 50 50))
  (qset *main* "size" (list 700 500))
  (set-icon *action-open* "open")
  (set-icon *action-save* "save")
  (qconnect *action-open* "triggered()" 'file-open)
  (qconnect *action-save* "triggered()" 'file-save)
  (qset *edit* "html" (read-file (in-home "examples/utf8.htm")))
  (qfun *main* "show()"))

(defun file-open ()
  (let ((file (qfun "QFileDialog" "getOpenFileName()")))
    (unless (empty-string file)
      (qset *edit* "html" (read-file file)))))

(defun file-save ()
  (let ((file (qfun "QFileDialog" "getSaveFileName()")))
    (unless (empty-string file)
      (with-open-file (s file :direction :output :if-exists :supersede)
        (write-string (qget *edit* "html") s)))))

(start)
