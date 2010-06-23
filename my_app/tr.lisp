;;; copyright (c) 2010 power4projects software

(defparameter *packages-files*
  '((:example . "lisp/my"))
  "Pairs of package names and pathnames")

(defun start ()
  (let ((tr "(tr ")
        (n 0))
    (with-open-file (out "tr.h" :direction :output :if-exists :supersede)
      (dolist (p-f *packages-files*)
        (with-open-file (in (format nil "~a.lisp" (cdr p-f)) :direction :input)
          (let ((texts (make-hash-table :test #'equal)))
            (loop
               (let ((line (read-line in nil :eof)))
                 (when (eql :eof line)
                   (return))
                 (do ((p (search tr line) (search tr line :start2 (1+ p))))
                     ((not p))
                   (when p
                     (let ((text (second (read-from-string line nil nil :start p))))
                       (when (stringp text)
                         (unless (gethash text texts)
                           (incf n)
                           (format out "QObject::tr(~s, \"~s\");~%" text (car p-f))
                           (setf (gethash text texts) t))))))))))))
    (format t "~%    Found ~d source text(s) in Lisp files.~%" n)))

(start)
