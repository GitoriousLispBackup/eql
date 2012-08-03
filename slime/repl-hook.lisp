(push (lambda (form)
        (mp:with-lock (eql::*top-level-lock*)
          (setf eql::*top-level-form* form))
        (loop
          (when eql::*slime-evaluated*
            (setf *package* eql::*slime-package*
                  eql::*slime-evaluated* nil)
            (let ((values eql::*slime-values*))
              (setf eql::*slime-values* nil)
              (return (values-list values))))
          (sleep 0.1)))
      swank::*slime-repl-eval-hooks*)

