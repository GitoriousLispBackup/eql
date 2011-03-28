(defparameter *qt-html-documentation-path*
  ;; tested with Qt 4.6 and 4.7 (4.5 will not work!)
  #+darwin "/Developer/Documentation/Qt/html/"
  #+win32  "C:/qt/4.6.2/doc/html/"
  #+linux 
  "/usr/share/doc/packages/libqt4/html/" ; Qt 4.6
  ;;"~/qtsdk-2010.05/qt/doc/html/" ; Qt 4.7
  )

(defparameter *not-found* 0)

(defun html-file (class)
  (format nil "~A~(~A~).html" *qt-html-documentation-path* class))

(unless (probe-file (html-file "QWidget"))
  (error "Please set the *qt-html-documentation-path* first")
  (ext:quit))

(defun search* (str1 str2 &optional (start 0))
  (search str1 str2 :test 'string-equal :start2 start))

(defun sort-names (names)
  (sort (remove-duplicates names :test 'string=)
        'string<
        :key (lambda (str) (string-trim "=/" str))))
