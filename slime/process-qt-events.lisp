;;; code taken from "swank-backend.lisp"

(ignore-errors (make-package :swank-backend))

(in-package :swank-backend)

(defparameter *interface-functions*      nil)
(defparameter *unimplemented-interfaces* nil)

(defmacro defimplementation (name args &body body)
  (assert (every #'symbolp args) ()
          "Complex lambda-list not supported: ~S ~S" name args)
  `(progn
     (setf (get ',name 'implementation)
           ;; For implicit BLOCK. FLET because of interplay w/ decls.
           (flet ((,name ,args ,@body)) #',name))
     (when (member ',name *interface-functions*)
           (setq *unimplemented-interfaces*
                 (remove ',name *unimplemented-interfaces*)))
     ',name))

(defimplementation wait-for-input (streams &optional timeout)
  (loop
    (when (check-slime-interrupts)
      (return :interrupt))
    (let ((ready (remove-if-not #'stream-readable-p streams)))
      (when ready
        (return ready)))
    (when timeout
      (return nil))
    (eql:qexec 100))) ; instead of "(sleep 0.1)"
