;;; copyright (c) 2010-2013 Polos Ruetz
;;;
;;; Needed for command line option "-qtpl", where READ runs in its own thread.
;;; All debug input is handled in a GUI dialog.

(defpackage :restart-dialog
  (:use :common-lisp :eql)
  (:export
   #:exec-with-simple-restart))

(provide :restart-dialog)

(in-package :restart-dialog)

;;; input hook (idea & most code from "ecl-readline.lisp")

(defvar *input-hook-functions* nil)

(defun input-hook (function)
  (let ((stream (make-instance 'gray::input-hook-stream)))
    (push (cons stream function) *input-hook-functions*)
    stream))

(in-package :gray)

(defclass input-hook-stream (fundamental-character-input-stream)
  ((in-buffer  :initform (make-string 0))
   (in-index   :initform 0)
   (out-buffer :initform (make-array 0 :element-type 'character :adjustable t :fill-pointer t))))

(defmethod stream-read-char ((stream input-hook-stream))
  (if (ensure-stream-data stream)
      (with-slots (in-buffer in-index) stream
        (let ((ch (char in-buffer in-index)))
          (incf in-index)
          ch))
      :eof))

(defmethod stream-unread-char ((stream input-hook-stream) character)
  (with-slots (in-index) stream
    (when (> in-index 0)
      (decf in-index))))

(defmethod stream-listen ((stream input-hook-stream))
  nil)

(defmethod stream-clear-input ((stream input-hook-stream))
  nil)

(defmethod stream-close ((stream input-hook-stream) &key abort)
  (call-next-method))

(defmethod stream-peek-char ((stream input-hook-stream))
  (if (ensure-stream-data stream)
      (with-slots (in-buffer in-index) stream
        (char in-buffer in-index))
      :eof))

(defun ensure-stream-data (stream)
  (with-slots (in-buffer in-index) stream
    (when (= in-index (length in-buffer))
      (setf in-buffer (funcall (cdr (assoc stream restart-dialog::*input-hook-functions*)))
            in-index 0))
    in-buffer))

;;; debug dialog

(in-package :restart-dialog)

(let (dialog command)
  (defun command ()
    (unless dialog
      (setf dialog  (qnew "QDialog(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|
                          "windowTitle" (tr "EQL Debug Dialog"))
            command (qnew "QLineEdit" "font" (qnew "QFont(QString,int)"
                                                   #+darwin  "Monaco"      #+darwin  12
                                                   #+linux   "Monospace"   #+linux   9
                                                   #+windows "Courier New" #+windows 10)
                                      "minimumWidth" 350))
      (let ((lb  (qnew "QLabel" "text" (tr "Enter debug command or Lisp expression (:h for help)")))
            (btn (qnew "QDialogButtonBox"))
            (lay (qnew "QVBoxLayout(QWidget*)" dialog)))
        (x:do-with (qfun btn "addButton")
          |QDialogButtonBox.Ok|
          |QDialogButtonBox.Cancel|)
        (x:do-with (qfun lay "addWidget")
          lb command btn)
        (qconnect btn "accepted()" dialog "accept()")
        (qconnect btn "rejected()" dialog "reject()")))
    (x:do-with (qfun command) "selectAll" "setFocus")
    (qsingle-shot 0 (lambda () (x:do-with (qfun dialog) "activateWindow" "raise")))
    (if (= |QDialog.Accepted| (qfun dialog "exec"))
        (qget command "text")
        ":r1")))

;;; main

(defun current-level ()
  (- si::*tpl-level* si::*step-level* -1))

(defun ensure-safe-restart (command)
  ;; don't allow RESTART-QT-EVENTS when RESTART-TOPLEVEL is available (would block REPL)
  (let* ((restarts (mapcar 'restart-name (compute-restarts)))
         (top-level (position 'si::restart-toplevel restarts))
         (qt-events (position 'restart-qt-events restarts)))
    (if (and top-level
             (string= (string-downcase command) (format nil ":r~D" qt-events)))
        (format nil ":r~D" top-level)
        command)))

(defun handle-debug-io ()
  (when (find-package :ecl-readline)
    (terpri)
    (princ (si::tpl-prompt)))
  (let ((cmd (command)))
    (setf cmd (cond ((x:empty-string cmd)
                     ":r1")
                    ((string= ":exit" (string-downcase cmd))
                     "(eql:qquit)")
                    (t
                     (ensure-safe-restart cmd))))
    (princ cmd)
    (terpri)
    (if (= 1 (current-level))
        (qsingle-shot 0 (lambda ()
                          (x:when-it (si::tpl-prompt)
                            (format t "~%~A" x:it))
                          (unless (find-package :ecl-readline)
                            (princ "> "))))
        (terpri))
    (format nil "~A~%" cmd)))

(defun exec-with-simple-restart ()
  (let ((*debug-io* (make-two-way-stream (input-hook 'handle-debug-io)
                                         (two-way-stream-output-stream *terminal-io*))))
    (loop
      (with-simple-restart (restart-qt-events "Restart Qt event processing.")
        (qexec)))))
