;;; copyright (c) 2010-2012 Polos Ruetz

(defpackage :gui
  (:use :common-lisp :eql)
  (:export
   #:*q*
   #:*gui*
   #:*display*
   #:*edit*))

(provide :gui)

(in-package :gui)

(defconstant +history-file+ (in-home "gui/.command-history"))
(defconstant +max-history+  50)

(defparameter *   nil)
(defparameter **  nil)
(defparameter *** nil)
(defparameter *q* nil)

(defvar *gui* (qload-ui (in-home "gui/gui.ui")))

(defvar-ui *gui*
  *display*
  *edit*
  *help*
  *main-tab*
  *n-methods*
  *n-names*
  *n-override*
  *n-super-classes*
  *package-name*
  *primitives*
  *q-methods*
  *q-names*
  *q-override*
  *q-properties*
  *q-signals*
  *q-slots*
  *q-super-classes*
  *qt-tab*
  *search-help*
  *select*
  *selected-widget*)

(defvar *code-font* (qnew "QFont(QString,int)"
                          #+darwin  "Monaco"      #+darwin  12
                          #+linux   "Monospace"   #+linux   9
                          #+windows "Courier New" #+windows 10))

(defvar *completer-list* (qnew "QStringListModel"))

(defun gui ()
  (qset *gui* "windowTitle" "EQL - Embedded Qt Lisp")
  (qset *select* "toolTip" (tr "Select any (child) widget (see variable *q*)"))
  (qset *help* "source" (qnew "QUrl(QString)" (concatenate 'string "file:///" (in-home "doc/auto-doc.htm"))))
  (set-tree *q-override*)
  (set-tree *q-signals*)
  (set-tree *q-slots*)
  (set-tree *q-methods* 3 nil nil (tr "Static"))
  (set-tree *q-properties* 3 nil nil (tr "Read Only"))
  (set-tree *n-methods* 3 nil (tr "Method") (tr "Static"))
  (set-tree *n-override*)
  (set-tree *primitives* 2 nil (tr "Example"))
  ;; please see example 9: editor.lisp for better completer examples
  (let ((cpl (qnew "QCompleter")))
    (dolist (w (list *display* *edit* *package-name* *selected-widget* (qfun cpl "popup")))
      (qset w "font" *code-font*))
    (qfun cpl "setModel" *completer-list*)
    (qfun *edit* "setCompleter" cpl))
  (qfun *q-names* "addItems" (qobject-names :q))
  (qfun *n-names* "addItems" (qobject-names :n))
  (qconnect *q-super-classes* "linkActivated(QString)" 'change-class-q-object)
  (qconnect *n-super-classes* "linkActivated(QString)" 'change-class-n-object)
  (qconnect *q-names* "activated(QString)" 'change-q-object)
  (qconnect *n-names* "activated(QString)" 'change-n-object)
  (qconnect *edit* "returnPressed()" 'eval-edit)
  (qconnect *select* "clicked()" (lambda () (qselect 'widget-selected)))
  (dolist (sig (list "textChanged(QString)" "returnPressed()"))
    (qconnect *search-help* sig 'search-help))
  (qoverride *edit* "keyPressEvent(QKeyEvent*)" 'history-move)
  (change-class-q-object "QWidget" :super)
  (change-class-n-object "QMetaObject" :super)
  (populate-primitives)
  (qsingle-shot 500 'show-package-name)
  (x:do-with (qset *gui*)
    ("pos" (list 50 50))
    ("size" (list 700 500)))
  (qfun *edit* "setFocus")
  (x:do-with (qfun *gui*)
    "show" "raise"))

(defun search-help (&optional txt)
  (unless (qfun *help* "find" (qget *search-help* "text"))
    (qfun *help* "moveCursor" |QTextCursor.Start|)))

(defun saved-history ()
  (let ((ex "")
        history)
    (when (probe-file +history-file+)
      (with-open-file (s +history-file+ :direction :input)
        (loop
           (let ((cmd (read-line s nil :eof)))
             (when (eql :eof cmd)
               (return))
             (unless (string= ex cmd)
               (push (setf ex cmd) history)))))
      (setf history (nthcdr (max 0 (- (length history) +max-history+)) (reverse history)))
      (delete-file +history-file+)
      (with-open-file (s +history-file+ :direction :output :if-does-not-exist :create)
        (dolist (cmd history)
          (write-line cmd s)))
      (reverse history))))

(let ((up (saved-history))
      (out (open +history-file+ :direction :output :if-exists :append :if-does-not-exist :create))
      down)
  (defun history-move (ev)
    (x:when-it (case (qfun ev "key")
                 (#.|Qt.Key_Up|
                    (x:when-it (pop up)
                      (push x:it down)))
                 (#.|Qt.Key_Down|
                    (x:when-it (pop down)
                      (push x:it up))))
      (qset *edit* "text" (first x:it)))
    (qcall-default))
  (defun history-add (cmd)
    (when (or (not up)
              (and up (string/= cmd (first up))))
      (push cmd up)
      (princ cmd out)
      (terpri out)
      (when (and down (string= cmd (first down)))
        (pop down))))
  (defun history ()
    (append (reverse up) down)))

(defun set-tree (tree &optional (cols 2) lb1 lb2 lb3)
  (x:do-with (qset tree)
    ("alternatingRowColors" t)
    ("sortingEnabled" t)
    ("rootIsDecorated" nil))
  (let ((lbs (list (if lb1 lb1 (tr "Type"))
                   (if lb2 lb2 (tr "Name"))
                   lb3)))
    (x:do-with (qfun tree)
      ("setHeaderLabels" (butlast lbs (- 3 cols)))
      ("sortByColumn" (if (> cols 1) 1 0) |Qt.AscendingOrder|))
    (qconnect tree "itemDoubleClicked(QTreeWidgetItem*,int)" 'add-to-edit)))

(let ((cross-cursor (qnew "QCursor(Qt::CursorShape)" |Qt.CrossCursor|)))
  (defun select-mode ()
    (set-listen t)
    (qfun "QApplication" "setOverrideCursor" cross-cursor)))

(defun change-class-q-object (s &optional super)
  (let ((i (qfun *q-names* "findText" s)))
    (if (= -1 i)
        (qmsg (tr "Sorry, class not found."))
        (progn
          (qfun *q-names* "setCurrentIndex" i)
          (change-q-object nil super)))))

(defun change-class-n-object (s &optional super)
  (qfun *n-names* "setCurrentIndex" (qfun *n-names* "findText" s))
  (change-n-object nil super))

(defun change-q-object (&optional s (super t))
  (populate-objects :q)
  (when super
    (show-super-classes :q)))

(defun change-n-object (&optional s (super t))
  (populate-objects :n)
  (when super
    (show-super-classes :n)))

(defun populate-objects (type)
  (let* ((class (qget (if (eql :q type) *q-names* *n-names*) "currentText"))
         (info (qapropos* nil class type))
         (all (rest (first info))))
    (flet ((sub (name)
             (rest (find name all :key 'first :test 'string=))))
      (mapc (lambda (name tree)
              (qfun tree "clear")
              (dolist (curr (sub name))
                (let* ((curr* (x:string-substitute "const_" "const " curr))
                       (item (qnew "QTreeWidgetItem"))
                       (sp1 (position #\Space curr*))
                       (sp2 (when sp1 (position #\Space curr* :start (1+ sp1)))))
                  (qfun item "setTextAlignment" 0 (logior |Qt.AlignRight| |Qt.AlignVCenter|))
                  (when sp1
                    (qfun item "setText" 0 (subseq curr 0 sp1)))
                  (qfun item "setText" 1 (if sp1 (subseq curr (1+ sp1) sp2) curr))
                  (when sp2
                    (qfun item "setText" 2 (subseq curr (1+ sp2))))
                  (qfun tree "addTopLevelItem" item)))
              (resize-tree tree)
              (qfun tree "sortByColumn" 1 |Qt.AscendingOrder|))
            (if (eql :q type)
                (list "Properties:" "Methods:" "Slots:" "Signals:")
                (list "Methods:"))
            (if (eql :q type)
                (list *q-properties* *q-methods* *q-slots* *q-signals*)
                (list *n-methods*)))
      (let ((override (if (eql :q type) *q-override* *n-override*)))
        (qfun override "clear")
        (dolist (curr (sub "Override:"))
          (let ((item  (qnew "QTreeWidgetItem"))
                (sp (position #\Space curr :start (if (x:starts-with "const" curr) 6 0))))
            (x:do-with (qfun item)
              ("setTextAlignment" 0 (logior |Qt.AlignRight| |Qt.AlignVCenter|))
              ("setText" 0 (subseq curr 0 sp))
              ("setText" 1 (subseq curr (1+ sp))))
            (qfun override "addTopLevelItem" item)))
        (qfun override "sortByColumn" 1 |Qt.AscendingOrder|)))
    (when (null info)
      (qmsg "<html>Class currently not available (see EQL modules and <b><code>qrequire</code></b>)."))))

(defun populate-primitives ()
  (dolist (type (list (cons "QByteArray"    "(vector -50 0 50)")
                      (cons "QChar"         "#\\a")
                      (cons "QColor"        "\"#FF0000\" or \"red\"")
                      (cons "QGradientStop" "(cons 0 \"orange\")")
                      (cons "QLine"         "(list x1 y1 x2 y2)")
                      (cons "QPoint"        "(list x y)")
                      (cons "QPolygon"      "(list x1 y1 x2 y2 x3 y3 ...)")
                      (cons "QRect"         "(list x y width height)")
                      (cons "QRgb"          "65280")
                      (cons "QSize"         "(list width height)")
                      (cons "QString"       "\"a Unicode string\"")
                      (cons "QStringList"   "(list \"one\" \"two\" \"three\")")))
    (let ((item (qnew "QTreeWidgetItem")))
      (x:do-with (qfun item)
        ("setText" 0 (car type))
        ("setText "1 (cdr type)))
      (qfun *primitives* "addTopLevelItem" item)))
  (x:do-with (qfun *primitives*)
    ("resizeColumnToContents" 0)
    ("sortByColumn" 0 |Qt.AscendingOrder|)))

(defun show-super-classes (type)
  (qset (if (eql :q type) *q-super-classes* *n-super-classes*) "text"
        (with-output-to-string (s)
          (do ((super (qget (if (eql :q type) *q-names* *n-names*) "currentText")
                      (qsuper-class-name super)))
              ((null super))
            (format s "<a href='~A'>~A</a>&nbsp;&nbsp;" super super)))))

(defun resize-tree (tree)
  (dotimes (i (qget tree "columnCount"))
    (qfun tree "resizeColumnToContents" i)))

(defun add-to-edit (item col)
  (let ((txt (prin1-to-string (qfun item "text"
                                    (min 1 (1- (qget (qfun item "treeWidget") "columnCount")))))))
    (qfuns "QApplication" "clipboard" ("setText" txt))
    (let ((curr (qget *edit* "text")))
      (when (and (x:starts-with "(" curr)
                 (not (x:ends-with "\"" curr)))
        (qfun *edit* "setText" (concatenate 'string (qget *edit* "text") txt)))))
  (qfun *edit* "setFocus"))

(defun display (x &optional color)
  (when color
    (qfun *display* "insertHtml" (format nil "<font color=~A>&nbsp;" color)))
  (let ((1st t))
    (dolist (val (x:ensure-list x))
      (qfun *display* "insertPlainText"
            (format nil "~A~A~%" (if 1st (progn (setf 1st nil) "") " ") val))))
  (when color
    (qfun *display* "insertHtml" "<br></font>"))
  (let ((vs (qfun *display* "verticalScrollBar")))
    (qset vs "value" (qget vs "maximum")))
  (show-package-name))

(defun show-error (err color)
  (let ((e1 (prin1-to-string err))
        (e2 (princ-to-string err)))
    (display e1 color)
    (unless (string= e1 e2)
      (display e2 color)))
  nil)

(defun all-symbols ()
  (let (all)
    (do-symbols (s)
      (push (format nil "~A~(~A~)" (if (or (ignore-errors (symbol-function s))
                                           (macro-function s)) "(" "")
                    s)
            all))
    (sort all 'string<)))

(let (package)
  (defun show-package-name ()
    (unless package
      (in-package :gui))
    (let ((name (package-name *package*)))
      (qset *package-name* "text" (format nil "~A>" name))
      (when (string/= name package)
        (let ((*standard-output* nil)) ; suppress output to console (slow on Windows)
          (qfun *completer-list* "setStringList" (all-symbols)))
        (setf package name)))))

(defun eval-edit ()
  (let ((color "darkorange"))
    (handler-case
        (let ((txt (string-trim " " (qget *edit* "text"))))
          (unless (x:empty-string txt)
            (display (format nil "~A> ~A" (package-name *package*) txt))
            (let ((exp (read-from-string txt)))
              (setf color "red")
              (let ((vals (multiple-value-list (eval exp))))
                (setf *** ** ** * * (first vals))
                (display (mapcar 'prin1-to-string vals) "blue")
                (history-add txt)
                (qfun *edit* "clear")))))
      (error (err)
        (show-error err color)))))

(defun focus-me ()
  (x:do-with (qfun *gui*)
    "activateWindow"
    "raise")
  (qfun *edit* "setFocus"))

(defun widget-selected (widget)
  (setf *q* widget)
  (qset *selected-widget* "text" (prin1-to-string *q*))
  (change-class-q-object (qt-object-name *q*) :super)
  (focus-me))

(gui)

;;; profile

#|
(require :profile)

(progn
  (use-package :profile)
  (profile:profile
   qfun
   qset
   qget))
|#
