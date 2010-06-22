;;; copyright (c) 2010 power4projects software

(defpackage :util
  (:use :common-lisp)
  (:export
   #:empty-string
   #:ensure-list
   #:ends-with
   #:it
   #:it*
   #:if-it
   #:if-it*
   #:join
   #:split
   #:starts-with
   #:string-substitute
   #:when-it
   #:when-it*
   #:while
   #:with-gensyms))

(provide :util)

(in-package :util)

(defmacro if-it (exp then &optional else)
  `(let ((it ,exp))
    (if it ,then ,else)))

(defmacro if-it* (exp then &optional else)
  `(let ((it* ,exp))
    (if it* ,then ,else)))

(defmacro when-it (exp &body body)
  `(let ((it ,exp))
    (when it ,@body)))

(defmacro when-it* (exp &body body)
  `(let ((it* ,exp))
    (when it* ,@body)))

(defmacro with-gensyms (syms &body body)
  `(let ,(mapcar #'(lambda (s)
                     `(,s (gensym)))
                 syms)
     ,@body))

(defmacro while (exp &body body)
  `(do ()
       ((not ,exp))
     ,@body))

(defun empty-string (s)
  (zerop (length s)))

(defun str-with (sub str starts)
  (let ((l1 (length str))
        (l2 (length sub)))
    (when (>= l1 l2)
      (string= sub (subseq str (if starts 0 (- l1 l2)) (when starts l2))))))

(defun starts-with (sub str)
  (str-with sub str t))

(defun ends-with (sub str)
  (str-with sub str nil))

(defun string-substitute (str from &optional (to ""))
  (let ((l (length from)))
    (with-output-to-string (s)
      (do ((e (search from str) (search from str :start2 (+ e l)))
           (b 0 (+ e l)))
          ((not e) (write-string (subseq str b) s))
        (write-string (subseq str b e) s)
        (write-string to s)))))

(defun ensure-list (x)
  (if (listp x) x (list x)))

(defun split (str &optional (sep #\Space))
  (unless (zerop (length str))
    (let (lst)
      (do ((e (position sep str) (position sep str :start (1+ e)))
           (b 0 (1+ e)))
          ((not e) (push (subseq str b) lst))
        (push (subseq str b e) lst))
      (nreverse lst))))

(defun join (lst &optional (sep #\Space))
  (format nil (format nil "~~{~~a~~^~a~~}" sep) lst))