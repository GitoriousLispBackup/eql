;;; copyright (c) 2012 Polos Ruetz
;;;
;;; Send EQL code to "local-server": a trivial one-way use of EQL from any CL.
;;;
;;; Run: (after building the executable in "send/")
;;;
;;;   eql local-server.lisp
;;;   ecl -load send.lisp / sbcl --load send.lisp (SBCL + Slime works too)
;;;
;;; Examples:
;;;
;;;   #q (qmsg (package-name *package*))
;;;
;;;   #q (qmsg #.(package-name *package*)) ; pass any data
;;;
;;;   #q (load "../2-clock.lisp")
;;;   #q (qfun clock::*clock* "showMaximized")

(set-dispatch-macro-character #\# #\q (lambda (stream c n) (%read-q stream)))

(defun %read-q (in)
  (list '%send-q (with-output-to-string (out)
                   (let ((ex #\Space)
                         parens in-string)
                     (loop
                       (let ((ch (read-char in)))
                         (write-char ch out)
                         (when (and (char=  #\" ch)
                                    (char/= #\\ ex))
                           (setf in-string (not in-string)))
                         (unless in-string
                           (case ch
                             (#\( (if parens (incf parens) (setf parens 1)))
                             (#\) (decf parens)))
                           (when (and parens (zerop parens))
                             (return)))
                         (setf ex ch)))))))

(defmacro while-it (exp &body body)
  `(let (it)
     (do ()
       ((not ,(list 'setf 'it exp)))
       ,@body)))

(defun %send-q (string)
  (while-it (search "#." string)
    (multiple-value-bind (exp end)
        (read-from-string (subseq string (+ it 2)))
      (setf string (concatenate 'string
                                (subseq string 0 it)
                                (prin1-to-string (eval exp))
                                " "
                                (subseq string (+ it 2 end))))))
  (#+ecl    ext:run-program
   #+sbcl   sb-ext:run-program
   #+darwin "./send/send.app/Contents/MacOS/send"
   #+linux  "./send/send"
   #+win32  "send/send.exe"
   (list string)))

