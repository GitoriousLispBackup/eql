(in-package :eql)

;;; automatic definitions (see Q_ENUMS, Q_FLAGS)

(defun run ()
  (with-open-file (s "auto-enums" :direction :output :if-exists :supersede)
    (dolist (qclasses (qmeta-enums))
      (let ((qclass (first qclasses)))
        (dolist (enums (rest qclasses))
          (let ((scope (first enums)))
            (dolist (enum (rest enums))
              (format s "(defenum ~A ~A)~%"
                      (intern (format nil "~A.~A" qclass enum))
                      (qenum (format nil "~A::~A" qclass scope) enum)))))))))

(progn
  (run)
  (qq))
