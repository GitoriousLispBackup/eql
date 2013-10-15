(in-package :eql)

(defun %qeval (form)
  (setf *top-level-form* (subst 'identity 'qeval form))
  (call-eval-top-level) ; blocking call to EVAL in main thread
  (setf *package* *slime-package*)
  (let ((values *slime-values*))
    (setf *slime-values* nil)
    (values-list values)))

(defmacro qeval (&rest forms)
  (if *load-pathname* ; ignore QEVAL when loading a file (from the Slime REPL)
      (if (second forms)
          (cons 'progn forms)
          (first forms))      
      `(%qeval (quote ,(if (second forms)
                           (cons 'progn forms)
                           (first forms))))))

(push '%qeval swank::*slime-repl-eval-hooks*)
