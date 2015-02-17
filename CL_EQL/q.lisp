;;; copyright (c) Polos Ruetz
;;; 
;;;
;;; Run: (after building the plugin in "cpp/")
;;;
;;;   eql local-server.lisp (in example 9; see also "<example 9>/exe/")
;;;   ecl -load q / clisp -i q / sbcl --load q (any CL + CFFI)
;;;
;;;
;;; Examples: (use '!' to pass immediate data to EQL, use '?' to pass eventual data to EQL, see "example.lisp")
;;;
;;;   #q (qmsg (package-name *package*))
;;;
;;;   #q (qmsg !(package-name *package*))
;;;
;;;   (let ((a 1)
;;;         (b 2))
;;;     #q (qmsg (list !a !b)))
;;;
;;;   (* 3 #q (+ 2 1))
;;;
;;;   #q *package* ; atom

(defparameter *load-eql-symbols* t)

;;; cffi

(cffi:load-foreign-library
  (merge-pathnames ; insert here your library path, which defaults to *DEFAULT-PATHNAME-DEFAULTS*
                   #+darwin                  "libeql_client.dylib"
                   #+(and unix (not darwin)) "libeql_client.so"
                   #+win32                   "eql_client.dll"))

(cffi:defcfun "ini_q"    :void (fun :pointer))
(cffi:defcfun "send_q"   :string (str :string))
(cffi:defcfun ("ev" %ev) :void (no-button :boolean))
(cffi:defcfun "ev_exit"  :void)

(cffi:defcallback eval-q :string ((str :string))
  (if (zerop (length str))
      ""
      (let ((*print-pretty* nil))
        (prin1-to-string (eval (read-from-string str))))))

(ini-q (cffi:callback eval-q))

;;; utils

(defmacro while-it (exp &body body)
  `(do ((it))
     ((not (setf it ,exp)))
     ,@body))

(defun string-split (string separator)
  (let ((len (length separator))
        list)
    (flet ((push* (b &optional e)
             (when (or (not e)
                       (/= b e))
               (push (subseq string b e) list))))
      (do ((e (search separator string) (search separator string :start2 (+ e len)))
           (b 0 (+ e len)))
          ((not e) (push* b))
        (push* b e))
      (nreverse list))))

;;; load all external EQL symbols (for symbol completion)

(when *load-eql-symbols*
  (with-open-file (in "EQL-symbols.lisp" :direction :input)
    (while-it (read in nil nil))))

;;; main

(eval-when (:compile-toplevel :load-toplevel :execute)
  (set-dispatch-macro-character #\# #\q (lambda (stream c n) (%read-q stream))))

(defun %stream-string (in)
  "Read Lisp expression from stream and return it as string."
  (flet ((white-space (ch)
           (find ch '(#\Space #\Tab #\Newline #\Return))))
    (with-output-to-string (out)
      (let ((ex #\Space)
            parens in-string comment)
        (loop
          (let ((ch (read-char in)))
            (if comment
                (when (char= #\Newline ch)
                  (setf comment nil))
                (unless (char= #\\ ex)
                  (if (char= #\" ch)
                      (setf in-string (not in-string))
                      (unless in-string
                        (case ch
                          ((#\Space #\Tab #\Newline #\Return)
                           (unless (or parens (white-space ex))
                             (unread-char ch in)
                             (return))) ; atom
                          (#\( (if parens
                                   (incf parens)
                                   (setf parens 1)))
                          (#\) (if parens
                                   (decf parens)
                                   (progn
                                     (unread-char ch in)
                                     (return)))) ; atom, e.g. (foo #q *x*)
                          (#\! (when (white-space ex) (setf ch !x)))
                          (#\? (when (white-space ex) (setf ch ?x)))
                          (#\; (setf comment t)))))))
            (unless comment
              (write-char ch out))
            (when (eql 0 parens)
              (return))
            (setf ex ch)))))))

(defun %read-q (stream)
  (let ((!x (code-char 1))
        (?x (code-char 2)))
    (declare (special !x ?x))
    (let ((string-q (%stream-string stream))
          list-q)
      (let (pos! pos?)
        (while-it (or (setf pos! (position !x string-q))
                      (setf pos? (position ?x string-q)))
          (multiple-value-bind (exp end)
              (if pos!
                  (read-from-string (subseq string-q (1+ pos!)))
                  (let ((str (with-input-from-string (s (subseq string-q (1+ pos?)))
                               (%stream-string s))))
                    (values str (length str))))
            (unless (zerop it)
              (push (subseq string-q 0 it) list-q))
            (push (if pos!
                      `(format nil "'~S" ,exp)
                      (format nil "(local-server::%remote-eval `~A)" exp)) ; note backquote
                  list-q)
            (setf string-q (subseq string-q (+ it 1 end)))))
        (push string-q list-q)
        `(%send-q (list ,@(nreverse list-q)))))))

(defun %send-q (data)
  (values-list
    (mapcar (lambda (str)
              (unless (zerop (length str))
                (multiple-value-bind (exp x)
                    (ignore-errors (read-from-string str))
                  (if (numberp x)
                      exp
                      (format nil "~A ; unreadable object" str))))) ; on read errors, return string instead
            (string-split (send-q (format nil "#q~{~A~^ ~}"         ; "#q": see local-server::*sharp-q*
                                          (mapcar (lambda (x) (string-trim " " x))
                                                  (if (stringp data) (list data) data))))
                          "#||#")))) ; value separator

(defun ev (&optional no-button)
  "Needed if '?' is used, in order to have a running event loop."
  (unwind-protect (%ev no-button)
    (ev-exit)))

;;; convenience functions

(defun qhelp (&optional search class-name)
  "Return output of QAPROPOS as string."
  #q (with-output-to-string (*standard-output*)
       (qapropos !search !class-name)))

(defun qmsg (x)
  "A simple message box for Lisp objects."
  #q (qmsg !x))

