;;; write all external EQL symbols in a file.
;;; (includes both Qt enums and Qt wrapper functions)

(in-package :eql)

(with-open-file (out "../EQL-symbols.lisp" :direction :output :if-exists :supersede)
  (flet ((print* (&optional enums)
           (let (symbols)
             (do-external-symbols (sym)
               (when (funcall (if enums 'identity 'not) (find #\. (symbol-name sym)))
                 (unless (eql '! sym)
                   (push sym symbols))))
             (dolist (sym (sort symbols 'string< :key 'symbol-name))
               (print sym out)))))
    (print*)
    (print* :enums)))

(qq)

