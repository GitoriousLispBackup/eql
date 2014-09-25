;;; Define wrapper functions for all Qt methods/signals/slots using case
;;; preserving symbol names, and resolving type ambiguous argument lists

(defvar *objects*     (qobject-names))
(defvar *functions*   nil)
(defvar *unambiguous* nil)

(let (latest)
  (defun num-args (fun)
    (let ((num (count #\, fun))
          (p (position #\( fun)))
      (setf latest (if (string= "()" (subseq fun p (+ 2 p)))
                       num
                       (1+ num)))))
  (defun latest-num-args ()
    latest))

(defun prepare ()
  (dolist (object *objects*)
    (let ((all-functions (cdar (qapropos* nil object)))
          functions)
      (dolist (type (list "Methods:" "Signals:" "Slots:"))
        (dolist (function (rest (find type all-functions
                                      :key 'first :test 'string=)))
          (let* ((open (position #\( function))
                 (begin (1+ (position #\Space function :from-end t :end open))))
            (unless (upper-case-p (char function begin))
              (let ((fun (subseq function begin)))
                (push (cons fun (num-args fun))
                      functions))))))
      (push (sort functions 'string< :key 'car)
            *functions*)))
  (setf *functions* (nreverse *functions*)))

(defun resolve-ambiguous ()
  (flet ((end-pos (fun p)
           (1+ (or (position #\, fun :start p)
                   (position #\) fun :start p))))
         (add-points (fun)
           (if (x:ends-with "," fun)
               (format nil "~A...)" (subseq fun 0 (1- (length fun))))
               fun))
         (simplify (fun)
           (if (x:ends-with "static" fun)
               (format nil "_s_~A" (subseq fun 0 (1+ (position #\) fun :from-end t))))
               fun)))
    (dolist (functions *functions*)
      (let (ok todo ex-fun1 ex-diff)
        (dolist (fun functions)
          (if (zerop (cdr fun))
              (let ((f (simplify (car fun))))
                (pushnew (subseq f 0 (position #\( f))
                         ok :test 'string=))
              (progn
                (setf (car fun) (simplify (car fun)))
                (push fun todo))))
        (do ((funs (stable-sort (sort todo 'string< :key 'car) '< :key 'cdr)
                   (rest funs)))
            ((null funs))
          (let* ((fun1 (first funs))
                 (fun2 (second funs))
                 (fun2* (or fun2 ex-fun1))
                 (f1 (car fun1))
                 (f2 (car fun2*))
                 (n1 (cdr fun1))
                 (n2 (cdr fun2*))
                 (a1 (position #\( f1))
                 (a2 (position #\( f2)))
            (flet ((ambiguous ()
                     (and (= n1 n2)
                          (= a1 a2)
                          (string= (subseq f1 0 a1)
                                   (subseq f2 0 a2)))))
              (if fun2*
                  (if f2
                      (if (ambiguous)
                          (let ((diff (string-not-equal f1 f2)))
                            (setf ex-diff diff)
                            (pushnew (add-points (subseq f1 0 (end-pos f1 diff)))
                                     ok :test 'string=)
                            (pushnew (add-points (subseq f2 0 (end-pos f2 diff)))
                                     ok :test 'string=))
                          (pushnew (subseq f1 0 a1)
                                   ok :test 'string=))
                      (if (ambiguous)
                          (pushnew (add-points (subseq f1 0 (when ex-diff (end-pos f1 ex-diff))))
                                   ok :test 'string=)
                          (pushnew (subseq f1 0 a1)
                                   ok :test 'string=)))
                  (pushnew (subseq f1 0 a1)
                           ok :test 'string=))
              (setf ex-fun1 fun1))))
        (push (sort ok 'string<)
              *unambiguous*)))
    (setf *unambiguous* (nreverse *unambiguous*))))

(defun define-all-wrappers (&optional (file "all-wrappers.lisp"))
  "Defines Lisp functions for all Qt methods/signals/slots, writing them to a file."
  (let (lisp-names definitions)
    (map nil (lambda (object signatures)
               (dolist (signature signatures)
                 (let* ((static (when (x:starts-with "_s_" signature)
                                  (setf signature (subseq signature 3))))
                        (lisp-name (if static
                                       (format nil "|~A.~A|" signature object)
                                       (format nil "|~A|" signature))))
                   (push lisp-name lisp-names)
                   (push (if static
                             (format nil "~%(defun ~A (&rest arguments)~
                                          ~%  (%qinvoke-method ~S nil ~S arguments))~%"
                                     lisp-name object signature)
                             (format nil "~%(defun ~A (object &rest arguments)~
                                          ~%  (%qinvoke-method object nil ~S arguments))~%"
                                     lisp-name signature))
                         definitions))))
         *objects* *unambiguous*)
    (with-open-file (s file :direction :output :if-exists :supersede)
      (format s "(defpackage :eql~
               ~%  (:use :cl)~
               ~%  (:export")
      (dolist (name (sort (delete-duplicates lisp-names :test 'string=) 'string<))
        (format s "~%   #:~A" name))
      (format s "))~
               ~%~
               ~%(in-package :eql)~
               ~%")
      (dolist (def (sort (delete-duplicates definitions :test 'string=) 'string<))
        (princ def s)))))

(progn
  (prepare)
  (resolve-ambiguous)
  (define-all-wrappers)
  (qq))
