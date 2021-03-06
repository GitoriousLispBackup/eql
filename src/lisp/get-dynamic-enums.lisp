(in-package :eql-user)

;;; dynamically accessible enums (see Q_ENUMS, Q_FLAGS)

(dolist (module '(:help :network :opengl :sql :svg :webkit))
  (qrequire module :quiet))

(defun run ()
  (let (all-enums)
    (flet ((add-enums (scope)
             (dolist (enums (rest (qenums scope)))
               (dolist (enum (rest enums))
                 (push (format nil "(\"|~A.~A|\" . ~D)"
                               scope
                               (car enum)
                               (cdr enum))
                       all-enums)))))
      (with-open-file (s "enum-lists/dynamic-enums.lisp" :direction :output :if-exists :supersede)
        (write-char #\( s)
        (add-enums "Qt")
        (dolist (name (qobject-names))
          (let ((mo (qstatic-meta-object name)))
            (when (and mo (string= (! "className" mo) name))
              (add-enums name))))
        (let ((ex ""))
          (dolist (enum (sort all-enums 'string<))
            (when (string/= ex enum)
              (princ #\Newline s)
              (princ enum s)
              (setf ex enum))))
        (terpri s)
        (write-char #\) s)))))

(progn
  (run)
  (qq))
