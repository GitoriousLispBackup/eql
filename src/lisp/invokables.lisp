;;; Generates C++ glue code, typically for the JavaScript / Lisp bridge of QtWebKit
;;;
;;; Assumes the first line of a function documentation string to contain a signature like this:
;;; "Qt: <return type> <function name as seen in JavaScript> ( <argument type>, ...)"
;;; (don't worry about whitespace, it will be normalized anyway)
;;;
;;; Example:
;;; "Qt: void myFunction(QWebElement, QVariantList)"
;;;
;;; (Packages COMMON-LISP and EQL are excluded from search.)

(defun qvariant-type (type)
  (cond ((string= "qreal" type)
         "Real")
        ((string= "qlonglong" type)
         "LongLong")
        ((x:starts-with "Q" type)
         (subseq type 1))
        (t
         (string-capitalize type))))

(defun const-reference (type)
  (if (and (x:starts-with "Q" type)
           (not (x:ends-with "*" type)))
      (format nil "const ~A&" type)
      type))

(defun generate-invokables (&optional (directory "./"))
  (with-open-file (s (concatenate 'string directory "_invokables.h")
                     :direction :output :if-exists :supersede)
    (format s "// THIS FILE IS GENERATED (see \"invokables.lisp\" in sources)~%~%")
    (let (processed)
      (do-all-symbols (symbol)
        (unless (find (symbol-package symbol)
                      #.(quote (mapcar 'find-package '(cl eql))))
          (let ((doc (documentation symbol 'function)))
            (when (and doc
                       (string-equal "Qt: " (subseq doc 0 (min 4 (length doc))))
                       (not (find symbol processed)))
              (push symbol processed)
              (let ((sig (x:bytes-to-string (! "normalizedSignature" "QMetaObject"
                                               (subseq doc 4 (1+ (position #\) doc))))))
                    (pkg-name (string-downcase (package-name (symbol-package symbol))))
                    (sym-name (string-downcase (symbol-name symbol))))
                (format t "~%\"~A:~A\"~%    ~A~%" pkg-name sym-name sig)
                (let* ((a (position #\Space sig))
                       (b (position #\( sig :start a))
                       (c (position #\) sig :start b))
                       (ret (subseq sig 0 a))
                       (fun (subseq sig (1+ a) b))
                       (types (x:split (subseq sig (1+ b) c) #\,))
                       (vars (loop :for i :from 1 :to (length types) :collect (format nil "x~D" i)))
                       (void (string= "void" ret)))
                  (format s "Q_INVOKABLE ~A ~A(~{~A~^, ~}) {~%"
                          ret
                          fun
                          (mapcar (lambda (type var)
                                    (format nil "~A ~A" (const-reference type) var))
                                  types vars))
                  (unless void
                    (format s "    QVariant ret =~%"))
                  (format s "    eql_fun(\"~A:~A\"" pkg-name sym-name)
                  (unless void
                    (format s ", QVariant::~A" (qvariant-type ret)))
                  (mapc (lambda (type var)
                          (format s ",~%            Q_ARG(~A, ~A)" type var))
                        types vars)
                  (format s ");")
                  (unless void
                    (format s "~%    return ret.to~A();" (qvariant-type ret)))
                  (format s " }~%~%")))))))))
  (terpri))

