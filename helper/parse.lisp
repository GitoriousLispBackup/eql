;;; copyright (c) 2010 power4projects software

(load "qt-modules")
(load "../src/lisp/util")

(use-package :util)

(defparameter *qt-html-documentation-path*
  ;; tested with Qt 4.6.x and 4.7.0 (4.5 will not work!)
  #+darwin "/Developer/Documentation/Qt/html/"
  #+win32  "C:/qt/4.6.2/doc/html/"
  #+linux  "/usr/share/doc/packages/libqt4/html/")

(defconstant +skip+
  (list "(preliminary)"
        "(deprecated)"
        "<Attribute>"
        "<ExtraSelection>"
        "<FormatRange>"
        "<WizardButton>"
        "<WritingSystem>"
        "[4][4]"
        "const char * const[]"
        "defaultAction"
        "int *"
        "iterator"
        "macEvent"
        "operator"
        "placeholderText"
        "printerSelectionOption"
        "qreal *"
        "setPrinterSelectionOption"
        "setupUi"
        "singleShot"
        "qint64"
        "quint32"
        "qwsSet"
        "void *"
        "winPage"
        "x11"
        "CFbsBitmap"
        "CGImageRef"
        "DefaultAction"
        "EditFocus"
        "Engine"
        "FILE"
        "Handle"
        "HANDLE"
        "HBITMAP"
        "HCURSOR"
        "HDC"
        "HICON"
        "KeyValue"
        "NavigationMode"
        "MSG"
        "PaperSources"
        "PlaceholderText"
        "RenderFlags"
        "RSgImage"
        "T "
        "Q_PID"
        "QDataStream"
        "QDecoration"
        "QFontInfo"
        "QGenericArgument"
        "QGenericMatrix"
        "QHash"
        "QIODevice"
        "QLatin1String"
        "QList<Country>"
        "QList<QPair<"
        "QList<T>"
        "QList<Tab>"
        "QList<QVariant>"
        "QMap"
        "QMetaClassInfo"
        "QMetaEnum"
        "QMetaMethod"
        "QMetaProperty"
        "QPrinterInfo"
        "QSet<"
        "QSymbianEvent"
        "QTextLayout"
        "QTextObjectInterface"
        "QWSEvent"
        "QXmlStreamReader"
        "WinPage"
        "WId"
        "X11"
        "XEvent"
        "**"
        "QFont getFont ( bool * , QWidget * , const char * )"                 ; "const char *" is ignored
        "QFont getFont ( bool * , const QFont & , QWidget * , const char * )" ; "const char *" is ignored
        ))

(defparameter *not-found* 0)

(defun html-file (class)
  (format nil "~a~(~a~).html" *qt-html-documentation-path* class))

(unless (probe-file (html-file "QWidget"))
  (error "Please set the *qt-html-documentation-path* first")
  (ext:quit))

(defun text (str)
  (with-output-to-string (s)
    (let ((buf (make-string 1000))
          ex skip skip-name enc p)
      (labels ((white-space (ch)
                 (find ch '(#\Space #\Tab)))
               (write-char* (ch)
                 (unless (or skip-name
                             (and (white-space ch)
                                  (white-space ex)))
                   (write-char ch s)
                   (setf ex ch)))
               (buf-add (ch)
                 (setf (char buf (incf p)) ch))
               (buf ()
                 (subseq buf 0 (1+ p))))
        (dotimes (i (length str))
          (let ((ch (char str i)))
            (if skip
                (if (char= #\> ch)
                    (progn
                      (setf skip nil)
                      (let ((buf* (buf)))
                        (cond ((string= "i" buf*) (setf skip-name t))
                              ((string= "/i" buf*) (setf skip-name nil)))))
                    (buf-add ch))
                (case ch
                  (#\< (setf skip t p -1))
                  (#\& (setf enc t p -1))
                  (#\; (when enc
                         (setf enc nil)
                         (let ((buf* (buf)))
                           (write-char* (cond ((string= "amp" buf*) #\&)
                                              ((string= "lt" buf*) #\<)
                                              ((string= "gt" buf*) #\>)
                                              ((string= "nbsp" buf*) #\Space)
                                              (t (error (format nil "Parse error at: &~a;" buf*))))))))
                  (t (if enc
                         (buf-add ch)
                         (write-char* ch)))))))))))

(defun search* (str1 str2 &optional (start 0))
  (search str1 str2 :test 'string-equal :start2 start))

(let (html)
  (defun read-html (class)
    (let ((path (html-file class)))
      (if (probe-file path)
          (with-open-file (s path :direction :input)
            (setf html (make-string (file-length s)))
            (read-sequence html s))
          (progn
            (incf *not-found*)
            (warn (format nil "Html file not found: ~s" path))))))
  (defun super-class ()
    (let ((p (search "<p>Inherits" html)))
      (when p
        (let ((super (text (subseq html (search* "<" html (1+ p)) (search* "</" html p)))))
          (unless (find #\< super) ; template
            super)))))
  (defun parse (type class s so no-new)
    ;; "bool QPainter::begin ( QPaintDevice * )": multiple inheritance problem
    (when (and (string= "QPainter" class)
               (string= "public functions" type))
      (format s "~%   \"bool begin ( QWidget * )\"~
                 ~%   \"bool begin ( QPixmap * )\""))
    (let ((static (starts-with "static" type))
          (protected (starts-with "protected" type))
          (p (search* (format nil "<h2>~a</h2>" type) html)))
      (when p
        (let* ((tb1 (search* "<table" html p))
               (tb2 (search* "</table>" html tb1))
               (funs (subseq html tb1 tb2))
               tr1 (tr2 0))
          (loop
             (setf tr1 (search* "<tr" funs tr2))
             (unless tr1
               (return))
             (setf tr2 (search* "</tr>" funs tr1))
             (let* ((fun (string-trim " " (text (subseq funs tr1 tr2))))
                    (new (or (starts-with (format nil "Q_INVOKABLE ~a (" class) fun)
                             (starts-with (format nil "~a (" class) fun))))
               (unless (or (and new no-new)
                           (find #\~ fun) ; destructor
                           (dolist (str +skip+)
                             (when (search str fun)
                               (return t)))
                           ;; template problem
                           (and (string= "QVariant" class)
                                (string= "bool canConvert () const" fun)))
                 (when (starts-with "virtual" fun)
                   (format so "~%   \"~a~a\"" (if protected "protected " "") fun))
                 (unless protected
                   (format s "~%   \"~a~a\"" (cond (static "static ")
                                                   (new "new ") ; constructor
                                                   (t ""))
                           (subseq fun (if (starts-with "Q_INVOKABLE" fun) 12 0))))))))))))

(defun parse-classes (classes s so non)
  (dolist (class classes)
    (let ((no-new (starts-with "//" class))
          (class* (string-left-trim "/" class)))
      (read-html class*)
      (format t "~%parsing ~a" class*)
      (let ((super (super-class)))
        (format s "  ((~s . ~s)" class* super)
        (format so "  ((~s . ~s)" class* super))
      (dolist (type (list "public functions"
                          "reimplemented public functions"
                          "static public members"
                          "protected functions"))
        (parse type class* s so no-new)
        (write-char #\.))
      (format s ")~%")
      (format so ")~%")))
  (format s "))~%")
  (format so "))~%"))

(defun sort-names (names)
  (sort (remove-duplicates names :test 'string=)
        'string<
        :key (lambda (str) (string-trim "=/" str))))

(defun start ()
  (flet ((load-module (name)
           (dolist (qn (list #\q #\n))
             (load (format nil "my-class-lists/~a/~c-names" name qn)))))
    (dolist (m (cons "gui" *qt-modules*))
      (load-module m)))
  (setf *q-names* (sort-names *q-names*)
        *n-names* (sort-names *n-names*))
  (mapc (lambda (names non)
          (let ((pre (if non #\n #\q)))
            (with-open-file (s (format nil "parsed/~c-methods.lisp" pre) :direction :output :if-exists :supersede)
              (with-open-file (so (format nil "parsed/~c-override.lisp" pre) :direction :output :if-exists :supersede)
                (format so "(defparameter *~c-override* '(~%" pre)
                (format s "(defparameter *~c-methods* '(~%" pre)
                (parse-classes (mapcar (lambda (name)
                                         (string-trim "= " (if-it (position #\( name)
                                                                  (subseq name 0 it)
                                                                  name)))
                                       names)
                               s so non)))))
        (list *q-names* *n-names*)
        (list nil :non))
  (if (zerop *not-found*)
      (format t "~%OK~%~%")
      (warn (format nil "Html files not found: ~d" *not-found*))))

(start)
