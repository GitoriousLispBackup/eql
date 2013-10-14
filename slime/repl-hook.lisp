(in-package :eql)

(defun %qeval (form)
  (setf eql::*top-level-form* (subst 'identity 'qeval form))
  (eql::call-eval-top-level) ; call eval in main thread
  (setf *package* eql::*slime-package*)
  (prog1
      (values-list eql::*slime-values*)
    (setf eql::*slime-values* nil)))

(defmacro qeval (&rest forms)
  (if *load-pathname* ; ignore QEVAL when loading a file (from the Slime REPL)
      (if (second forms)
          (cons 'progn forms)
          (first forms))      
      `(eql::%qeval (quote ,(if (second forms)
                                (cons 'progn forms)
                                (first forms))))))

(push '%qeval swank::*slime-repl-eval-hooks*)
