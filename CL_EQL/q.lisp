;;; copyright (c) 2012 Polos Ruetz
;;;
;;; Run: (after building the plugin in "cpp/")
;;;
;;;   eql local-server.lisp (see example 9)
;;;   ecl -load q.lisp / clisp -i q.lisp / sbcl --load q.lisp (requires cffi)
;;;
;;;
;;; Examples: (use #! to pass immediate data to EQL, use #? to pass eventual data to EQL)
;;;
;;;   #q (qmsg (package-name *package*))
;;;
;;;   #q (qmsg #!(package-name *package*))
;;;
;;;   (let ((a 1)
;;;         (b 2))
;;;     #q (qmsg (list #!a #!b)))
;;;
;;;   (defun msg (x)
;;;     #q (qmsg #!x))
;;;
;;;   (* 3 #q (+ 2 1))
;;;
;;;   #q (load "../2-clock.lisp")
;;;   #q (qfun clock:*clock* "showMaximized")

;;; cffi

(cffi:load-foreign-library
  (merge-pathnames *default-pathname-defaults*
                   #+darwin                  "libeql_client.dylib"
                   #+(and unix (not darwin)) "libeql_client.so"
                   #+win32                   "eql_client.dll"))

(cffi:defcallback eval_q :string ((str :string))
  (prin1-to-string (eval (read-from-string str))))

(cffi:defcfun "send_q" :string (str :string))
(cffi:defcfun "ini_q"  :void (fun :pointer))
(cffi:defcfun "ev"     :void)

(ini-q (cffi:callback eval_q))

;;; utils

(defmacro while-it (exp &body body)
  `(do ((it))
     ((not (setf it ,exp)))
     ,@body))

(defun split (str &optional (sep #\Newline))
  (unless (zerop (length str))
    (let (list)
      (do ((e (position sep str) (position sep str :start (1+ e)))
           (b 0 (1+ e)))
          ((not e) (push (subseq str b) list))
        (push (subseq str b e) list))
      (nreverse list))))

;;; main

(set-dispatch-macro-character #\# #\q (lambda (stream c n) (%read-q stream)))

(defun %read-q (in)
  (let ((string-q (with-output-to-string (out)
                    (let ((ex #\Space)
                          parens in-string)
                      (loop
                        (let ((ch (read-char in)))
                          (write-char ch out)
                          (unless (char= #\\ ex)
                            (if (char=  #\" ch)
                                (setf in-string (not in-string))
                                (unless in-string
                                  (case ch
                                    (#\( (if parens (incf parens) (setf parens 1)))
                                    (#\) (decf parens)))
                                  (when (and parens (zerop parens))
                                    (return)))))
                          (setf ex ch))))))
        list-q)
    (while-it (or (search "#!" string-q)
                  (search "#?" string-q))
      (multiple-value-bind (exp end)
          (read-from-string (subseq string-q (+ it 2)))
        (unless (zerop it)
          (push (subseq string-q 0 it) list-q))
        (push (if (char= #\! (char string-q (1+ it)))
                  (list 'prin1-to-string exp)
                  (format nil "(local-server::%remote-eval '~S)" exp))
              list-q)
        (setf string-q (subseq string-q (+ it 2 end)))))
    (push string-q list-q)
    `(%send-q (list ,@(reverse list-q)))))

(defun %send-q (data)
  (values-list
    (mapcar 'read-from-string
            (split (send-q (format nil "#q~{~A~^ ~}"
                                   (mapcar (lambda (x) (string-trim " " x)) (if (stringp data) (list data) data))))))))

