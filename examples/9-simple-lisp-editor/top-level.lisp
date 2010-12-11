(provide :top-level)

;;; The following are modified/simplified functions taken from "src/lsp/top.lsp" version 10.4.1

(in-package :si)

(defparameter *read-string* nil)

(defun %top-level ()
  (catch *quit-tag*
    (let* ((*debugger-hook* nil)
           + ++ +++ - * ** *** / // ///)
      (unless *lisp-initialized*
        (format t "EQL local-server")
        (setq *lisp-initialized* t))
      (let ((*break-enable* t)
            (*tpl-level* -1))
        (%tpl))
      0)))

(defun %tpl (&key ((:commands *tpl-commands*) tpl-commands)
                 ((:prompt-hook *tpl-prompt-hook*) *tpl-prompt-hook*)
                 (broken-at nil)
                 (quiet t))
  (declare (c::policy-debug-ihs-frame))
  (let* ((*ihs-base* *ihs-top*)
         (*ihs-top* (if broken-at (ihs-search t broken-at) (ihs-top)))
         (*ihs-current* (if broken-at (ihs-prev *ihs-top*) *ihs-top*))
         (*frs-base* (or (sch-frs-base *frs-top* *ihs-base*) (1+ (frs-top))))
         (*frs-top* (frs-top))
         (*quit-tags* (cons *quit-tag* *quit-tags*))
         (*quit-tag* *quit-tags*)       ; any unique new value
         (*tpl-level* (1+ *tpl-level*))
         (break-level *break-level*)
         values)
    (set-break-env)
    (set-current-ihs)
    (flet ((rep ()
             ;; We let warnings pass by this way "warn" does the
             ;; work.  It is conventional not to trap anything
             ;; that is not a SERIOUS-CONDITION. Otherwise we
             ;; would be interferring the behavior of code that relies
             ;; on conditions for communication (for instance our compiler)
             ;; and which expect nothing to happen by default.
             (handler-bind 
                 ((serious-condition
                   (lambda (condition)
                     (cond ((< break-level 1)
                            ;; Toplevel should enter the debugger on any condition.
                            )
                           (*allow-recursive-debug*
                            ;; We are told to let the debugger handle this.
                            )
                           (t
                            (format t "~&Debugger received error: ~A~%~
                                         Error flushed.~%" condition)
                            (clear-input)
                            (return-from rep t) ;; go back into the debugger loop.
                            )
                           )
                     )))

               (with-grabbed-console
                   (unless quiet
                     (break-where)
                     (setf quiet t))
                 (setq - (locally (declare (notinline %tpl-read)) ; [EQL]
                           (tpl-prompt)
                           (%tpl-read)) ; [EQL]
                       values (multiple-value-list
                               (eval-with-env - *break-env*))
                       /// // // / / values *** ** ** * * (car /))
                 (tpl-print values)))))
          (loop
           (setq +++ ++ ++ + + -)
           (when
               (catch *quit-tag*
                 (if (zerop break-level)
                   (with-simple-restart 
                    (restart-toplevel "Go back to Top-Level REPL.")
                    (rep))
                   (with-simple-restart
                    (restart-debugger "Go back to debugger level ~D." break-level)
                    (rep)))
                 nil)
             (setf quiet nil))))))

(defun %tpl-read (&aux (*read-suppress* nil))
  (eql:qprocess-events)
  (finish-output)
  (cond ((eql :eof *read-string*)
         (tpl-make-command :eof ""))
        (*read-string*
         (prog1
             (read-from-string *read-string*)
           (setf *read-string* :eof)))))
