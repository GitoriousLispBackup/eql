;;; Please delete *.fas file after upgrading ECL

(let ((file (eql::in-slime-ini "process-qt-events")))
  (flet ((file* (x)
           (format nil "~A.~A" file x)))
    (load file)
    (when (or (not (probe-file (file* "fas")))
              (> (file-write-date (file* "lisp"))
                 (file-write-date (file* "fas"))))
      (compile-file file :load t))))
