;;; Note: the long startup time of this example is caused
;;; by all the different font encodings envolved.

(defpackage :main-window
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :main-window)

(defvar *main*        (qload-ui (in-home "examples/data/main-window.ui")))
(defvar *editor*      (qfind-child *main* "editor"))
(defvar *action-open* (qfind-child *main* "action_open"))
(defvar *action-save* (qfind-child *main* "action_save"))

(defun os-pathname (name)
  #+(or darwin linux)
  (qutf8 name)
  #+win32
  (qlocal8bit name))

(defun read-file (file)
  (with-open-file (s (os-pathname file) :direction :input)
    (let ((str (make-string (file-length s))))
      (read-sequence str s)
      str)))

(defun set-icon (action name)
  (qset action "icon" (qnew "QIcon(QString)"
                            (in-home (format nil "examples/data/icons/~A.png" name)))))

(defun start ()
  (x:do-with (qset *main*)
    ("pos" (list 50 50))
    ("size" (list 700 500)))
  (set-icon *action-open* "open")
  (set-icon *action-save* "save")
  (qconnect *action-open* "triggered()" 'file-open)
  (qconnect *action-save* "triggered()" 'file-save)
  (qset *editor* "html" (read-file (in-home "examples/data/utf8.htm")))
  (x:do-with (qfun *main*) "show" "raise"))

(defun file-open ()
  (let ((file (qfun "QFileDialog" "getOpenFileName")))
    (unless (x:empty-string file)
      (qset *editor* "html" (read-file file)))))

(defun file-save ()
  (let ((file (qfun "QFileDialog" "getSaveFileName")))
    (unless (x:empty-string file)
      (with-open-file (s (os-pathname file) :direction :output :if-exists :supersede)
        (write-string (qget *editor* "html") s)))))

(start)
