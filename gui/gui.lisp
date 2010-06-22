;;; copyright (c) 2010 power4projects software

(defpackage :gui
  (:use :common-lisp :util :eql)
  (:export
   #:*q*
   #:*gui*
   #:*display*
   #:*edit*))

(provide :gui)

(in-package :gui)

(defconstant +history-file+       (in-home "gui/.command-history"))
(defconstant +max-history+        50)
(defconstant +mouse-button-press+ 2)
(defconstant +start+              1)

(defparameter *   nil)
(defparameter **  nil)
(defparameter *** nil)
(defparameter *q* nil)

(defparameter *gui*             (qload-ui (in-home "gui/gui.ui")))
(defparameter *display*         (qfind-child *gui* "display"))
(defparameter *edit*            (qfind-child *gui* "edit"))
(defparameter *help*            (qfind-child *gui* "help"))
(defparameter *main-tab*        (qfind-child *gui* "main_tab"))
(defparameter *n-methods*       (qfind-child *gui* "n_methods"))
(defparameter *n-names*         (qfind-child *gui* "n_names"))
(defparameter *n-override*      (qfind-child *gui* "n_override"))
(defparameter *n-super-classes* (qfind-child *gui* "n_super_classes"))
(defparameter *package-name*    (qfind-child *gui* "package_name"))
(defparameter *primitives*      (qfind-child *gui* "primitives"))
(defparameter *q-methods*       (qfind-child *gui* "q_methods"))
(defparameter *q-names*         (qfind-child *gui* "q_names"))
(defparameter *q-override*      (qfind-child *gui* "q_override"))
(defparameter *q-properties*    (qfind-child *gui* "q_properties"))
(defparameter *q-signals*       (qfind-child *gui* "q_signals"))
(defparameter *q-slots*         (qfind-child *gui* "q_slots"))
(defparameter *q-super-classes* (qfind-child *gui* "q_super_classes"))
(defparameter *qt-tab*          (qfind-child *gui* "qt_tab"))
(defparameter *search-help*     (qfind-child *gui* "search_help"))
(defparameter *select*          (qfind-child *gui* "select"))
(defparameter *selected-widget* (qfind-child *gui* "selected_widget"))
(defparameter *completer-list*  (qnew "QStringListModel"))

(defun gui ()
  (qset *gui* "windowTitle" "EQL - Embedded Qt Lisp")
  (qset *select* "toolTip" (tr "Select the widget the parameter *q* will be set to"))
  (qset *help* "source" (concatenate 'string "file:///" (in-home "doc/auto-doc.htm")))
  (set-tree *q-override*)
  (set-tree *q-signals*)
  (set-tree *q-slots*)
  (set-tree *q-methods* 3 nil nil (tr "Static"))
  (set-tree *q-properties* 3 nil nil (tr "Read Only"))
  (set-tree *n-methods* 3 nil (tr "Method") (tr "Static"))
  (set-tree *n-override*)
  (set-tree *primitives* 2 nil (tr "Example"))
  (let ((cpl (qnew "QCompleter")))
    (dolist (w (list *display* *edit* *package-name* *selected-widget* (qfun cpl "popup")))
      (qset w "styleSheet" "font-family: Courier"))
    (qfun cpl "setModel" *completer-list*)
    (qfun *edit* "setCompleter" cpl))
  (qfun *q-names* "addItems" (qobject-names :q))
  (qfun *n-names* "addItems" (qobject-names :n))
  (qconnect *q-super-classes* "linkActivated(QString)" 'change-class-q-object)
  (qconnect *n-super-classes* "linkActivated(QString)" 'change-class-n-object)
  (qconnect *q-names* "activated(QString)" 'change-q-object)
  (qconnect *n-names* "activated(QString)" 'change-n-object)
  (qconnect *edit* "returnPressed()" 'eval-edit)
  (qconnect *select* "clicked()" 'select-mode)
  (dolist (sig (list "textChanged(QString)" "returnPressed()"))
    (qconnect *search-help* sig 'search-help))
  (qoverride *edit* "keyPressEvent(QKeyEvent*)" 'history-move)
  (qadd-event-filter nil +mouse-button-press+ 'object-selected)
  (change-class-q-object "QWidget" :super)
  (change-class-n-object "QMetaObject" :super)
  (populate-primitives)
  (qsingle-shot 500 'show-package-name)
  (qfun *edit* "setFocus")
  (qset *gui* "pos" (list 50 50))
  (qset *gui* "size" (list 700 600))
  (qfun *gui* "show"))

(defun search-help (&optional txt)
  (unless (qfun *help* "find" (qget *search-help* "text"))
    (qfun *help* "moveCursor" +start+)))

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
    (let ((key (qfun ev "key")))
      (when-it (cond ((= (qenum "Qt::Key" "Key_Up") key)
                      (when-it (pop up)
                               (push it down)))
                     ((= (qenum "Qt::Key" "Key_Down") key)
                      (when-it (pop down)
                               (push it up))))
               (qset *edit* "text" (first it))))
    nil) ; overridden
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
  (with- (qset tree)
    (list "alternatingRowColors" "sortingEnabled" "rootIsDecorated")
    (list t t nil))
  (let ((lbs (list (if lb1 lb1 (tr "Type"))
                   (if lb2 lb2 (tr "Name"))
                   lb3)))
    (qfun tree "setHeaderLabels" (butlast lbs (- 3 cols)))
    (qfun tree "sortByColumn" (if (> cols 1) 1 0) "AscendingOrder")
    (qconnect tree "itemDoubleClicked(QTreeWidgetItem*,int)" 'add-to-edit)))

(defun select-mode ()
  (set-listen t)
  (qfun "QApplication" "setOverrideCursor" "CrossCursor"))

(defun change-class-q-object (s &optional super)
  (let ((i (qfun *q-names* "findText" s)))
    (if (= -1 i)
        (qmessage-box (tr "Sorry, class not found."))
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
             (rest (find name all :key #'first :test #'string=))))
      (mapc #'(lambda (name tree)
                (qfun tree "clear")
                (dolist (curr (sub name))
                  (let* ((curr* (string-substitute curr "const " "const_"))
                         (item (qnew "QTreeWidgetItem"))
                         (sp1 (position #\Space curr*))
                         (sp2 (when sp1 (position #\Space curr* :start (1+ sp1)))))
                    (qfun item "setTextAlignment" 0 (qenum "Qt::Alignment" "AlignRight|AlignVCenter"))
                    (when sp1
                      (qfun item "setText" 0 (subseq curr 0 sp1)))
                    (qfun item "setText" 1 (if sp1 (subseq curr (1+ sp1) sp2) curr))
                    (when sp2
                      (qfun item "setText" 2 (subseq curr (1+ sp2))))
                    (qfun tree "addTopLevelItem" item)))
                (resize-tree tree)
                (qfun tree "sortByColumn" 1 "AscendingOrder"))
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
                (sp (position #\Space curr :start (if (starts-with "const" curr) 6 0))))
            (qfun item "setTextAlignment" 0 (qenum "Qt::Alignment" "AlignRight|AlignVCenter"))
            (qfun item "setText" 0 (subseq curr 0 sp))
            (qfun item "setText" 1 (subseq curr (1+ sp)))
            (qfun override "addTopLevelItem" item)))
        (qfun override "sortByColumn" 1 "AscendingOrder")))))

(defun populate-primitives ()
  (dolist (type (list (cons "QByteArray"    "\"a Latin1 string\"")
                      (cons "QChar"         "#\\a")
                      (cons "QColor"        "\"#ff0000\" or \"red\"")
                      (cons "QCursor"       "\"CrossCursor\"")
                      (cons "QDate"         "\"2009-12-25\"")
                      (cons "QDateTime"     "\"2009-12-25T08:15:05\"")
                      (cons "QFont"         "\"Lucida Grande,11\" (or simply use the styleSheet property)")
                      (cons "QGradientStop" "(cons 0 \"orange\")")
                      (cons "QKeySequence"  "\"Alt+A\"")
                      (cons "QPoint"        "(list x y)")
                      (cons "QPolygon"      "(list x1 y1 x2 y2)")
                      (cons "QRect"         "(list x y width height)")
                      (cons "QRgb"          "65280")
                      (cons "QSize"         "(list width height)")
                      (cons "QString"       "\"a Unicode string\"")
                      (cons "QStringList"   "(list \"one\" \"two\" \"three\")")
                      (cons "QTime"         "\"08:15:05\"")
                      (cons "QUrl"          "\"http://my.net\"")))
    (let ((item (qnew "QTreeWidgetItem")))
      (qfun item "setText" 0 (car type))
      (qfun item "setText" 1 (cdr type))
      (qfun *primitives* "addTopLevelItem" item)))
  (qfun *primitives* "resizeColumnToContents" 0)
  (qfun *primitives* "sortByColumn" 0 "AscendingOrder"))

(defun show-super-classes (type)
  (if (eql :q type)
      (let ((mo (qstatic-meta-object (qget *q-names* "currentText"))))
        (qset *q-super-classes* "text"
              (with-output-to-string (s)
                (loop
                   (let ((name (qfun mo "className")))
                     (format s "<a href='~a'>~a</a>&nbsp;&nbsp;" name name) 
                     (when (qnull-object (setf mo (qfun mo "superClass")))
                       (return)))))))
      (qset *n-super-classes* "text"
            (let ((name (qget *n-names* "currentText")))
              (with-output-to-string (s)
                (loop
                   (format s "<a href='~a'>~a</a>&nbsp;&nbsp;" name name) 
                   (unless (setf name (qnobject-super-class name))
                     (return))))))))

(defun resize-tree (tree)
  (dotimes (i (qget tree "columnCount"))
    (qfun tree "resizeColumnToContents" i)))

(defun add-to-edit (item col)
  (let ((txt (prin1-to-string (qfun item "text"
                                    (min 1 (1- (qget (qfun item "treeWidget") "columnCount")))))))
    (qfun (qfun "QApplication" "clipboard") "setText" txt)
    (qfun *edit* "setText" (concatenate 'string (qget *edit* "text") txt)))
  (qfun *edit* "setFocus"))

(defun display (x &optional color)
  (when color
    (qfun *display* "insertHtml" (format nil "<font color=~a>&nbsp;" color)))
  (let ((1st t))
    (dolist (val (ensure-list x))
      (qfun *display* "insertPlainText"
            (format nil "~a~a~%" (if 1st (progn (setf 1st nil) "") " ") val))))
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
      (let ((sym (format nil "~a~(~a~)" (if (or (ignore-errors (symbol-function s))
                                                (macro-function s)) "(" "")
                         s)))
        (unless (and (starts-with "(q" sym)
                     (ends-with "2" sym))
          (push sym all))))
    all))

(let (pkg)
  (defun show-package-name ()
    (unless pkg
      (in-package :gui))
    (let ((name (package-name *package*)))
      (qset *package-name* "text" (format nil "~a>" name))
      (when (string/= name pkg)
        (setf pkg name)
        (qfun *completer-list* "setStringList" (all-symbols))))))

(defun eval-edit ()
  (let ((color "darkorange"))
    (handler-case
        (let ((txt (string-trim " " (qget *edit* "text"))))
          (unless (empty-string txt)
            (display (format nil "~a> ~a" (package-name *package*) txt))
            (let ((exp (read-from-string txt)))
              (setf color "red")
              (let ((vals (multiple-value-list (eval exp))))
                (setf *** ** ** * * (first vals))
                (display (mapcar #'prin1-to-string vals) "blue")
                (history-add txt)
                (qfun *edit* "clear")))))
      (error (err)
        (show-error err color)))))

(defun focus-me ()
  (with- (qfun *gui*)
    (list "activateWindow" "raise"))
  (qfun *edit* "setFocus"))

(let (listen)
  (defun object-selected (obj ev)
    (when listen
      (setf listen nil)
      (setf *q* obj)
      (qset *selected-widget* "text" (prin1-to-string *q*))
      (indicate)
      (focus-me)
      (change-class-q-object (qt-object-name obj) :super)
      (qfun "QApplication" "restoreOverrideCursor")
      t)) ; event filter
  (defun set-listen (x)
    (setf listen x)))

(defun indicate ()
  (let ((obj *q*))
    (loop
       (let ((p (qfun obj "parentWidget")))
         (if (qnull-object p)
             (return)
             (setf obj p))))
    (indicate-start obj *q*)))

(defun indicate-start (par child)
  (let ((indi (qnew "QLabel"
                    "size" (nthcdr 2 (qget par "geometry")))))
    (qfun indi "setParent" par)
    (qfun indi "move" (list 0 0))
    (qlet ((pix (qfun "QPixmap" "grabWidget" par))
           (dark (to-dark pix)))
          (qfun indi "setPixmap" (set-highlight indi pix dark child)))
    (qfun indi "show")
    (qsingle-shot 500 #'(lambda () (qdel indi)))))

(defun to-dark (pix)
  (let ((dark (qcopy pix)))
    (qlet ((brush "QBrush")
           (pnt "QPainter"))
          (qfun brush "setColor(QColor)" "black")
          (qfun brush "setStyle" "SolidPattern")
          (qfun pnt "begin(QPixmap*)" dark)
          (qfun pnt "setOpacity" 0.6)
          (qfun pnt "fillRect(QRect,QBrush)" (qfun dark "rect") brush))
    dark))

(defun highlight (indi child)
  (let ((p (list 0 0))
        (w child))
    (loop
       (when (qnull-object w)
         (return))
       (let ((inc (qfun w "mapToParent" (list 0 0))))
         (dotimes (i 2)
           (incf (nth i p) (nth i inc))))
       (when (qeql (qfun indi "parentWidget")
                   (setf w (qfun w "parentWidget")))
         (return)))
    (if (qnull-object w)
        (list 0 0 0 0)
        (list (first p) (second p) (qget child "width") (qget child "height")))))

(defun set-highlight (indi pix dark child)
  (qlet ((p "QPainter"))
        (qfun p "begin(QPixmap*)" dark)
        (let ((r (highlight indi child)))
          (qfun p "drawPixmap(QRect,QPixmap,QRect)" r pix r)))
  dark)

(gui)