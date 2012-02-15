;;; Code taken from "swank-ecl.lisp"; see [EQL] for modifications

(in-package :swank-backend)

;;; Instead of busy waiting with communication-style NIL, use select()
;;; on the sockets' streams.
#+serve-event
(progn
  (defun poll-streams (streams timeout)
    (let* ((serve-event::*descriptor-handlers*
            (copy-list serve-event::*descriptor-handlers*))
           (active-fds '())
           (fd-stream-alist
            (loop for s in streams
                  for fd = (socket-fd s)
                  collect (cons fd s)
                  do (serve-event:add-fd-handler fd :input
                                                 #'(lambda (fd)
                                                     (push fd active-fds))))))
      (serve-event:serve-event timeout)
      (loop for fd in active-fds collect (cdr (assoc fd fd-stream-alist)))))

  (defimplementation wait-for-input (streams &optional timeout)
    (assert (member timeout '(nil t)))
    (loop
      (cond ((check-slime-interrupts) (return :interrupt))
            (timeout (return (poll-streams streams 0)))
            (t
             (eql:qexec 200) ;                            [EQL]
             (when-let (ready (poll-streams streams 0)) ; [EQL] (0 instead of 0.2)
               (return ready))))))  

) ; #+serve-event (progn ...

