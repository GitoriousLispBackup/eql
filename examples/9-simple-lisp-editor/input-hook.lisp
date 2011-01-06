;;; idea & most code from "ecl-readline.lisp"

(defpackage input-hook
    (:use :common-lisp)
  (:export
   #:*function*))

(provide :input-hook)

(in-package :input-hook)

(defvar *function* nil)

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
    (if (> in-index 0)
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
    (if (= in-index (length in-buffer))
        (setf in-buffer (funcall input-hook:*function*)
              in-index 0))
    in-buffer))
