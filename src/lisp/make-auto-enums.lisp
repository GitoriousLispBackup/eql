(in-package :eql)

;;; automatic definitions (see Q_ENUMS, Q_FLAGS)

(defun run ()
  (with-open-file (s "auto-enums" :direction :output :if-exists :supersede)
    (dolist (scopes (qmeta-enums))
      (let ((scope (first scopes)))
        (dolist (enums (rest scopes))
          (let ((name (first enums)))
            (dolist (enum (rest enums))
              (format s "(defenum |~A.~A| ~D)~%"
                      scope
                      enum
                      (qenum (format nil "~A::~A" scope name) enum)))))))))

(progn
  (run)
  (qq))
