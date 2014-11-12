;;; Find all constructors which allow copying (for QCOPY)

(let (found)
  (with-open-file (s "parsed/n-methods.lisp" :direction :input)
    (x:while-it (read-line s nil nil)
      (when (x:starts-with "   \"new" x:it)
        (let ((class (subseq x:it 8 (position #\Space x:it :start 8))))
          (when (search (format nil "( const ~A & )" class) x:it)
            (push class found))))))
  (dolist (name (sort found 'string<))
    (print name)))

