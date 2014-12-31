;;; copyright (c) 2010-2013 Polos Ruetz

(load "../src/lisp/x")
(load "share")
(load "load-modules")

(use-package :x)

(defconstant +skip+
  (list "(preliminary)"
        "(deprecated)"
        "<Attribute>"
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
        "quint32"
        "qwsSet"
        "uchar *"
        "void *"
        "winPage"
        "x11"
        "CFbsBitmap"
        "CGImageRef"
        "DefaultAction"
        "EditFocus"
        "Engine"
        "FILE"
        "FT_Face"
        "GLfloat *"
        "GLfloat["
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
        "RawHeaderPair"
        "RenderFlags"
        "RSgImage"
        "SearchHit"
        "T "
        "Q_PID"
        "QDataStream"
        "QDecoration"
        "QGenericArgument"
        "QGenericMatrix"
        "QHash"
        "QIODevice"
        "QList<Country>"
        "QList<QPair<"
        "QList<T>"
        "QList<Tab>"
        "QList<QVariant>"
        "QByteArray *"
        "QByteArray & buffer ()"
        "QMap"
        "QMetaClassInfo"
        "QMetaEnum"
        "QMetaMethod"
        "QMetaProperty"
        "QPrinterInfo"
        "QSet<"
        "QSymbianEvent"
        "QTextObjectInterface"
        "QWebNetworkRequest"
        "QWSEvent"
        "QXmlStreamReader"
        "WinPage"
        "X11"
        "XEvent"
        "**"
        "QFont getFont ( bool * , QWidget * , const char * )"                 ; "const char *" is ignored
        "QFont getFont ( bool * , const QFont & , QWidget * , const char * )" ; "const char *" is ignored
        "QString nativeArguments () const"
        "void setNativeArguments ( const QString & )"
        "const QGraphicsObject * toGraphicsObject () const"
        ))

(defparameter *check* nil)

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
                                              (t (error (format nil "Parse error at: &~A;" buf*))))))))
                  (t (if enc
                         (buf-add ch)
                         (write-char* ch)))))))))))

(let (html)
  (defun read-html (class)
    (let ((path (html-file class)))
      (if (probe-file path)
          (with-open-file (s path :direction :input)
            (setf html (make-string (file-length s)))
            (read-sequence html s))
          (progn
            (incf *not-found*)
            (warn (format nil "Html file not found: ~S" path))))))
  (defun super-class (class)
    (let ((a (search "<p>Inherits" html)))
      (when a
        (let* ((b (search* "<" html (1+ a)))
               (c (search* "</" html (1+ b)))
               (d (search* "<" html (1+ c)))
               (super (text (subseq html b c))))
          (unless (find #\< super) ; template
            (when (search* "and" (subseq html c d))
              (format *check* "~A: ~A and ~A~%"
                      class
                      super
                      (text (subseq html d (search* "</" html (1+ d))))))
            super)))))
  (defun parse (type class s so no-new)
    ;; "bool QPainter::begin ( QPaintDevice * )": multiple inheritance problem
    (let* ((pub (string= "public functions" type))
           (qpainter (and pub (string= "QPainter" class)))
           (qvariant (and pub (string= "QVariant" class))))
      (cond (qpainter
             (dolist (device (list "QImage" "QPicture" "QPixmap" "QPrinter" "QWidget")) 
               (format s "~%   \"new QPainter ( ~A * )\"~
                          ~%   \"bool begin ( ~A * )\""
                       device device)))
            (qvariant
             (format s "~%   \"new QVariant ( const QCursor & )\"")))        
      (let ((static (starts-with "static" type))
            (protected (search "protected" type))
            (p (search* (format nil "<h2>~A</h2>" type) html)))
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
                     (new (and (not static)
                               (or (starts-with (format nil "Q_INVOKABLE ~A (" class) fun)
                                   (starts-with (format nil "~A (" class) fun))))
                     (virtual (starts-with "virtual" fun)))
                (unless (or (and qpainter (search "QPaintDevice" fun :test 'string=))
                            (and new no-new)
                            (and new protected)
                            (find #\~ fun) ; destructor
                            (dolist (str +skip+)
                              (when (search str fun)
                                (return t)))
                            ;; template problem
                            (and (string= "QVariant" class)
                                 (string= "bool canConvert () const" fun)))
                  (when virtual
                    (format so "~%   \"~A\"" fun))
                  (unless (and virtual protected)
                    (format s "~%   \"~A~A\"" (cond (new "new ") ; constructor
                                                    (protected "protected ")
                                                    (static "static ")
                                                    (t ""))
                            (subseq fun (if (starts-with "Q_INVOKABLE" fun) 12 0)))))))))))))

(defun parse-classes (classes s so non)
  (dolist (class classes)
    (let* ((no-new (starts-with "//" class))
           (class* (string-left-trim "/" class))
           (file class*))
      (x:when-it (search "::" class*)
        (setf file   (subseq class* 0 x:it)
              class* (subseq class* (+ 2 x:it))))
      (read-html file)
      (format t "~%parsing ~A" class*)
      (let ((super (super-class class)))
        (format s "  ((~S . ~S)" class* super)
        (format so "  ((~S . ~S)" class* super))
      (dolist (type (list "public functions"
                          "protected functions"
                          "reimplemented public functions"
                          "reimplemented protected functions"
                          "static public members"
                          "static protected members"))
        (parse type class* s so no-new)
        (write-char #\.))
      (format s ")~%")
      (format so ")~%")))
  (format s "))~%")
  (format so "))~%"))

(defun start ()
  (with-open-file (*check* "multiple-inheritance.txt" :direction :output :if-exists :supersede)
    (mapc (lambda (names non)
            (let ((pre (if non #\n #\q)))
              (with-open-file (s (format nil "parsed/~C-methods.lisp" pre) :direction :output :if-exists :supersede)
                (with-open-file (so (format nil "parsed/~C-override.lisp" pre) :direction :output :if-exists :supersede)
                  (format so "(defparameter *~C-override* '(~%" pre)
                  (format s "(defparameter *~C-methods* '(~%" pre)
                  (parse-classes (mapcar (lambda (name)
                                           (string-trim "= " (if-it (position #\( name)
                                                                 (subseq name 0 it)
                                                                 name)))
                                         names)
                                 s so non)))))
          (list *q-names* *n-names*)
          (list nil :non)))
  (if (zerop *not-found*)
      (format t "~%OK~%~%")
      (warn (format nil "Html files not found: ~D" *not-found*))))

(start)
