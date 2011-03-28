(in-package :eql)

;;; dynamically accessible enums (see Q_ENUMS, Q_FLAGS)

(defun run ()
  (with-open-file (s "enum-lists/dynamic-enums.lisp" :direction :output :if-exists :supersede)
    (write-char #\( s)
    (dolist (scopes (qmeta-enums))
      (let ((scope (first scopes)))
        (dolist (enums (rest scopes))
          (let ((name (first enums)))
            (dolist (enum (rest enums))
              (format s "~%(\"|~A.~A|\" . ~D)"
                      scope
                      enum
                      (qenum (format nil "~A::~A" scope name) enum)))))))
    (terpri s)
    (write-char #\) s)))

(progn
  (run)
  (qq))
