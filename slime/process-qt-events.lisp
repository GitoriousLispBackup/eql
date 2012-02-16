;;; N.B: Works only with Slime versions <= 2011-11-01
;;; (because it's a hack, well working, but still a hack)
;;;
;;; Get latest working Slime with:
;;; cvs -d :pserver:anonymous:anonymous@common-lisp.net:/project/slime/cvsroot co -D 2011-11-01 slime
;;;
;;; Code taken from "swank-backend.lisp"

(in-package :swank-backend)

(defimplementation wait-for-input (streams &optional timeout)
  (if (null (cdr streams)) 
      (wait-for-one-stream (car streams) timeout)
      (wait-for-streams streams timeout)))

(defun wait-for-streams (streams timeout)
  (loop
   (when (check-slime-interrupts) (return :interrupt))
   (let ((ready (remove-if-not #'stream-readable-p streams)))
     (when ready (return ready)))
   (when timeout (return nil))
   (eql:qexec 100))) ; instead of (sleep 0.1)

;; optional: emergency hook to Emacs/Slime: in case they freeze, we still can send (break) etc.
;;#+darwin
;;(load (eql::in-slime-ini "hook"))

