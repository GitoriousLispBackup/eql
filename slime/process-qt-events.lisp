;;; code taken from "swank-backend.lisp"

(in-package :swank-backend)

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

;; optional: emergency hook to Emacs/Slime: in case they freeze, we still can send (break) etc.
#+darwin
(load (eql::in-slime-ini "hook"))
