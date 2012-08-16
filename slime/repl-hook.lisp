(in-package :eql)

(defun %qeval (form)
  (mp:with-lock (eql::*top-level-lock*)
    (setf eql::*top-level-form* (subst 'identity 'qeval form)))
  (loop
    (when eql::*slime-evaluated*
      (setf *package* eql::*slime-package*
            eql::*slime-evaluated* nil)
      (let ((values eql::*slime-values*))
        (setf eql::*slime-values* nil)
        (return (values-list values))))
    (sleep 0.1)))

(defmacro qeval (&rest forms)
  (if *load-pathname* ; ignore QEVAL when loading a file (from the Slime REPL)
      (if (second forms)
          (cons 'progn forms)
          (first forms))      
      `(eql::%qeval (quote ,(if (second forms)
                                (cons 'progn forms)
                                (first forms))))))

(push '%qeval swank::*slime-repl-eval-hooks*)
