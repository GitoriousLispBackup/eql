;;; copyright (c) 2010-2011 Polos Ruetz
;;;
;;; A basic and experimental(!) Lisp editor, featuring:
;;;
;;;   - a code completer for Qt/EQL functions
;;;   - a tab completer for CL/EQL symbols (including Qt enums)
;;;   - a tab completer for absolute pathnames
;;;   - paren highlighting
;;;   - simple auto indent, indent paragraph
;;;   - simple syntax highlighter
;;;
;;;   - an independent local Lisp server process for evaluation
;;;   - native Qt event processing through QApplication::exec()
;;;   - eval region
;;;
;;; N.B: requires Qt 4.7 for signal QFileSystemModel::directoryLoaded(QString)

(require :local-client (probe-file "local-client.lisp"))
(require :settings     (probe-file "settings.lisp"))

(defpackage :editor
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :editor)

(defun os-pathname (name)
  #+(or darwin linux)
  (qutf8 name)
  #+win32
  (qlocal8bit name))

(defun read-file (file &optional (set-name t))
  (with-open-file (s (os-pathname file) :direction :input)
    (when set-name
      (setf *file-name* file))
    (let ((str (make-string (file-length s))))
      (read-sequence str s)
      str)))

(defun in-home* (name)
  (in-home (concatenate 'string "examples/9-simple-lisp-editor/" name)))

(defun from-file (name)
  (eval (read-from-string (read-file (in-home* name) nil))))

(defparameter *auto-indent*   (from-file "data/auto-indent.lisp"))
(defparameter *eql-keywords*  (from-file "data/eql-keywords.lisp"))
(defparameter *lisp-keywords* (from-file "data/lisp-keywords.lisp"))

(defparameter *current-completer*      nil)
(defparameter *current-depth*          0)
(defparameter *current-keyword-indent* 0)
(defparameter *cursor-code-depth*      0)
(defparameter *error-region*           nil)
(defparameter *extra-selections*       nil)
(defparameter *file-name*              nil)
(defparameter *keep-extra-selections*  nil)
(defparameter *latest-eval-position*   nil)
(defparameter *try-read-error*         nil)

(defconstant +max-shown-completions+ 10)
(defconstant +max-history+           50)
(defconstant +package-char-dummy+    #\$)
(defconstant +history-file+          ".command-history")

;;; Qt

(defvar *main* (qload-ui (in-home* "data/editor.ui")))

(defvar-ui *main*
  *editor*
  *output*
  *command*
  *splitter*
  *find*
  *replace*
  *button-next*
  *button-replace*
  *action-open*
  *action-save*
  *action-save-as*
  *action-save-and-run*
  *action-copy*
  *action-cut*
  *action-eval-region*
  *action-repeat-eval*)

(defparameter *current-editor*       *editor*)
(defparameter *lisp-match-rule*      nil)
(defparameter *eql-keyword-format*   nil)
(defparameter *lisp-keyword-format*  nil)
(defparameter *comment-format*       nil)
(defparameter *parenthesis-color*    "lightslategray")
(defparameter *string-color*         "saddlebrown")
(defparameter *eql-completer*        nil)
(defparameter *file-completer*       nil)
(defparameter *symbol-completer*     nil)
(defparameter *file-model            nil)
(defparameter *symbol-model          nil)
(defparameter *file-popup*           nil)
(defparameter *symbol-popup*         nil)

(defun file-open (&optional name)
  (unless name
    (setf name (qfun "QFileDialog" "getOpenFileName" nil "" "" "Lisp files (*.lisp)")))
  (unless (x:empty-string name)
    (file-save)
    (qset *editor* "plainText" (read-file name))
    (show-file-name)))

(defun save-file (name)
  (when (and (stringp name)
             (not (x:empty-string name)))
    (with-open-file (s (os-pathname name) :direction :output
                       :if-exists :supersede)
      (write-string (qget *editor* "plainText") s)
      (setf *file-name* name)
      (show-file-name))))

(defun file-save ()
  (save-file *file-name*))

(defun file-save-as ()
  (let ((name (qfun "QFileDialog" "getSaveFileName" nil "" "" "Lisp files (*.lisp)")))
    (unless (x:ends-with ".lisp" name)
      (setf name (concatenate 'string name ".lisp")))
    (save-file name)))

(defun show-file-name ()
  (qset *main* "windowTitle" (file-namestring *file-name*)))

(defun ini ()
  (x:do-with (qset *command*)
    ("horizontalScrollBarPolicy" |Qt.ScrollBarAlwaysOff|)
    ("verticalScrollBarPolicy"   |Qt.ScrollBarAlwaysOff|))
  (x:do-with (qset *output*)
    ("readOnly" t)
    ("tabStopWidth" (* 8 (first (font-metrics-size)))))
  (x:do-with (qfun *splitter*)
    ("setStretchFactor" 0 2)
    ("setStretchFactor" 1 1))
  (x:do-with (qset *main*)
    ("size" (list 800 500))
    ("windowTitle" "Simple Lisp Editor"))
  (qfun *command* "setFixedHeight" (+ (second (font-metrics-size))
                                      (* 2 (qget *command* "frameWidth"))))
  (set-color *output* |QPalette.Base| "lavender")
  (dolist (ed (list *editor* *command*))
    (qconnect ed  "cursorPositionChanged()" 'cursor-position-changed))
  (qconnect *find*    "returnPressed()" 'find-text)
  (qconnect *replace* "returnPressed()" 'replace-text)
  (qconnect *button-next*    "clicked()" 'find-text)
  (qconnect *button-replace* "clicked()" 'replace-text)
  (qconnect (qapp) "aboutToQuit()" 'clean-up)
  (qoverride *editor*  "keyPressEvent(QKeyEvent*)" 'editor-key-pressed)
  (qoverride *command* "keyPressEvent(QKeyEvent*)" 'command-key-pressed)
  (ini-actions)
  (ini-highlighter)
  (ini-completer)
  (hide-popups-on-errors)
  (dolist (w (list *editor* *output* *command* *eql-completer* *symbol-popup*))
    (qset w "font" eql::*code-font*))
  (local-client:ini 'data-from-server)
  (show-status-message (format nil (tr "<b style='color:#4040E0'>Eval Region:</b> move to paren <b>(</b> or <b>)</b>, hit <b>~A</b>")
                               (qfun (qget *action-eval-region* "shortcut") "toString" |QKeySequence.NativeText|))
                       :html)
  (qfun *main* "show")
  (qsingle-shot 0 'delayed-ini))

(defun ini-actions ()
  (flet ((keys (str)
           (qnew "QKeySequence(QString)" str)))
    (qset *action-open*         "shortcut" (keys "Ctrl+O"))
    (qset *action-save*         "shortcut" (keys "Ctrl+S"))
    (qset *action-save-and-run* "shortcut" (keys "Ctrl+R"))
    (qset *action-copy*         "shortcut" (keys "Alt+C"))
    (qset *action-cut*          "shortcut" (keys "Alt+X"))
    (qset *action-eval-region*  "shortcut" (keys "Ctrl+Return"))
    (qset *action-repeat-eval*  "shortcut" (keys "Ctrl+E"))
    (qset *button-next*         "shortcut" (keys "Ctrl+F"))
    (qset *button-replace*      "shortcut" (keys "Ctrl+G"))
    (qconnect *action-open*         "triggered()" 'file-open)
    (qconnect *action-save*         "triggered()" 'file-save)
    (qconnect *action-save-as*      "triggered()" 'file-save-as)
    (qconnect *action-save-and-run* "triggered()" 'save-and-run)
    (qconnect *action-copy*         "triggered()" (lambda () (copy/cut-highlighted-region :copy)))
    (qconnect *action-cut*          "triggered()" (lambda () (copy/cut-highlighted-region :cut)))
    (qconnect *action-eval-region*  "triggered()" 'eval-region)
    (qconnect *action-repeat-eval*  "triggered()" 'repeat-eval)))

(defun ini-highlighter ()
  (setf *eql-keyword-format*  (qnew "QTextCharFormat")
        *lisp-keyword-format* (qnew "QTextCharFormat")
        *comment-format*      (qnew "QTextCharFormat")
        *lisp-match-rule*     (qnew "QRegExp(QString)" "[(']:*[^ )]+"))
  (qfun *eql-keyword-format*  "setForeground" (qnew "QBrush(QColor)" "#0000C0"))
  (qfun *lisp-keyword-format* "setForeground" (qnew "QBrush(QColor)" "#C00000"))
  (x:do-with (qfun *comment-format*)
    ("setForeground" (qnew "QBrush(QColor)" "#80A080"))
    ("setFontItalic" t))
  (let ((syntax-editor  (qnew "QSyntaxHighlighter(QTextDocument*)" (qfun *editor* "document")))
        (syntax-command (qnew "QSyntaxHighlighter(QTextDocument*)" (qfun *command* "document"))))
    (qoverride syntax-editor "highlightBlock(QString)"
               (lambda (str) (highlight-block syntax-editor str)))
    (qoverride syntax-command "highlightBlock(QString)"
               (lambda (str) (highlight-block syntax-command str)))))

(defun ini-completer ()
  (setf *eql-completer*    (qnew "QListWidget"
                                 "horizontalScrollBarPolicy" |Qt.ScrollBarAlwaysOff|
                                 "verticalScrollBarPolicy"   |Qt.ScrollBarAlwaysOff|)
        *symbol-completer* (qnew "QCompleter"
                                 "maxVisibleItems" 10)
        *file-completer*   (qnew "QCompleter"
                                 "maxVisibleItems" 10)
        *symbol-model*     (qnew "QStringListModel")
        *file-model*       (qnew "QFileSystemModel")
        *symbol-popup*     (qfun *symbol-completer* "popup")
        *file-popup*       (qfun *file-completer*   "popup"))
  (x:do-with (qset *eql-completer*)
    ("frameShape" |QFrame.Box|)
    ("frameShadow" |QFrame.Plain|)
    ("lineWidth" 1))
  (qfun *eql-completer* "setWindowFlags" |Qt.Popup|)
  (qfun *symbol-completer* "setWidget" *command*)
  (qfun *file-completer*   "setWidget" *command*)
  (qfun *symbol-completer* "setModel" *symbol-model*)
  (qfun *file-completer*   "setModel" *file-model*)
  (qfun *file-model* "setRootPath" "")
  (set-color *symbol-popup* |QPalette.Base| "palegreen")
  (qconnect *eql-completer* "itemDoubleClicked(QListWidgetItem*)" 'insert-completer-option-text)
  (qconnect *symbol-completer* "highlighted(QString)" 'item-highlighted)
  (qconnect *file-completer*   "highlighted(QString)" (lambda (str) (item-highlighted str :file)))
  (qconnect *file-model* "directoryLoaded(QString)" (lambda (arg) (update-tab-completer-2 :file)))
  (qoverride *eql-completer* "keyPressEvent(QKeyEvent*)" 'completer-key-pressed)
  (qoverride *eql-completer* "focusOutEvent(QFocusEvent*)" 'close-completer)
  (update-completer-symbols))

(defun delayed-ini ()
  (let* ((buttons (list *button-next* *button-replace*))
         (width (apply 'max (mapcar (lambda (w) (qget w "width")) buttons))))
    (dolist (button buttons)
      (qfun button "setFixedWidth" width))))

(defun clean-up ()
  (file-save))

(defun document ()
  (qfun *current-editor* "document"))

(let (size)
  (defun font-metrics-size ()
    (if size size (qlet ((fm "QFontMetrics(QFont)" eql::*code-font*))
                    (setf size (list (qfun fm "width(QChar)" #\Space)
                                     (qfun fm "height")))))))

(defun set-color (widget role color)
  (let ((pal (qget widget "palette")))
    (qfun pal "setColor(QPalette::ColorRole,QColor)" role color)
    (qset widget "palette" pal)))

(let (label)
  (defun show-status-message (msg &optional html)
    (let ((bar (qfun *main* "statusBar")))
      (when (and html (not label))
        (qfun bar "addWidget" (setf label (qnew "QLabel" "wordWrap" t)) 1))
      (if html
          (qset label "text" msg)
          (qfun bar "showMessage" msg)))))

(defun read* (str &optional (start 0))
  (setf *try-read-error* nil)
  (let ((*package* #.(find-package :eql)))
    (multiple-value-bind (exp x)
        (ignore-errors (read-from-string (substitute +package-char-dummy+ #\: str)
                                         nil nil :start start :preserve-whitespace t))
      (unless exp
        (setf *try-read-error* (typecase x
                                 (end-of-file :end-of-file)
                                 (t t))))
      (values exp x))))

(defun end-position (expr)
  (multiple-value-bind (x end)
      (read* expr)
    (when (numberp end)
      end)))

(defun text-until-cursor (&optional text-cursor text-block)
  (unless text-cursor
    (setf text-cursor (qfun *current-editor* "textCursor")))
  (unless text-block
    (setf text-block (qfun text-cursor "block")))
  (subseq (qfun text-block "text") 0 (- (qfun text-cursor "position")
                                        (qfun text-block "position"))))

(defun insert-text (text &optional select)
  (let* ((text-cursor (qfun *current-editor* "textCursor"))
         (text-block (qfun text-cursor "block"))
         (text* (text-until-cursor text-cursor text-block))
         (p (position #\" text* :from-end t)))
    (when (and select
               (not (x:ends-with "\"" text*)))
      (qfun text-cursor "movePosition" |QTextCursor.Left| |QTextCursor.KeepAnchor| (1- (- (length text*) p))))
    (qfun text-cursor "insertText" text)
    (qfun *current-editor* "setTextCursor" text-cursor)))

(defun constructor-args (name)
  (sort (mapcar #'(lambda (el)
                    (subseq el (position #\( el)))
                (cdadar (qapropos* "constructor" name)))
        'string<))

(defun fun-args (fun)
  (subseq fun (1+ (position #\( fun)) (position #\) fun :from-end t)))

(defun call-candidates (name type &optional args (const t) static)
  (let ((types (case type
                 (:properties
                    '("Properties:"))
                 (:functions
                    (if static '("Methods:") '("Methods:" "Slots:" "Signals:")))
                 (:signals
                    '("Signals:"))
                 (:slots
                    '("Slots:"))
                 (:override
                    '("Override:"))))
        candidates)
    (do ((curr name (qsuper-class-name curr)))
        ((null curr))
      (let ((all (cdar (qapropos* nil curr))))
        (flet ((add (x)
                 (dolist (fun (rest (find x all :test 'string= :key 'first)))
                   (if (eql :properties type)
                       (when (or const (not (x:ends-with " const" fun)))
                         (let* ((start (1+ (position #\Space fun)))
                                (end (position #\Space fun :start start)))
                           (push (subseq fun start (if end end (length fun)))
                                 candidates)))
                       (let ((static* (x:ends-with "static" fun)))
                         (when (if args
                                   (x:starts-with (fun-args fun) args)
                                   (if static
                                       static*
                                       (and (not (or static*
                                                     (x:starts-with "constructor" fun))))))
                           (let ((fun* (subseq fun (1+ (position #\Space fun :end (position #\( fun) :from-end t)))))
                             (push (if static
                                       (subseq fun* 0 (- (length fun*) 7))
                                       fun*)
                                   candidates))))))))
          (dolist (x types)
            (add x)))))
    (sort candidates 'string<)))

(defun cut-optional-type-list (fun-name)
  (flet ((arg-count (x)
           (if (x:ends-with "()" x)
               0
               (1+ (count #\, x)))))
    (let ((no-types (subseq fun-name 0 (position #\( fun-name)))
          (num-args* (arg-count fun-name)))
      (dolist (name (mapcar (lambda (item)
                              (qfun item "text"))
                            (qfun *eql-completer* "findItems"
                                  (format nil "~A(" no-types) (logior |Qt.MatchStartsWith| |Qt.MatchCaseSensitive|))))
        (when (string/= fun-name name)
          (let ((num-args (arg-count name)))
            (when (= num-args* num-args)
              (return-from cut-optional-type-list fun-name)))))
      no-types)))

(defun global-var-name-p (var)
  (when (symbolp var)
    (let ((name (symbol-name var)))
      (flet ((enclosed (ch)
               (and (x:starts-with ch name)
                    (x:ends-with ch name))))
        (or (enclosed "*")
            (enclosed "+"))))))

(let (qt-matches cache-matches)
  (flet ((qt-fun (pos)
           (cdr (assoc (- pos 2) qt-matches)))
         (qt-pos (fun)
           (car (find fun qt-matches :key 'cdr))))
    (defun highlight-block (highlighter text)
      (unless (x:empty-string text)
        (when cache-matches
          (setf qt-matches nil))
        (let ((i (qfun *lisp-match-rule* "indexIn" text)))
          (x:while (>= i 0)
            (let* ((len (qfun *lisp-match-rule* "matchedLength"))
                   (kw* (subseq text (1+ i) (+ i len)))
                   (kw (x:if-it (position #\: kw* :from-end t)
                           (subseq kw* (1+ x:it))
                           kw*)))
              (flet ((set-format (frm)
                       (qfun highlighter "setFormat(int,int,QTextCharFormat)" (1+ i) (1- len) frm)))
                (cond ((find kw *eql-keywords* :test 'string=)
                       (when cache-matches
                         (push (cons (+ i len) (intern (string-upcase kw) :keyword))
                               qt-matches))
                       (set-format *eql-keyword-format*))
                      ((gethash kw *lisp-keywords*)
                       (set-format *lisp-keyword-format*))))
              (setf i (qfun *lisp-match-rule* "indexIn" text (+ i len))))))
        (setf cache-matches nil)
        ;; comments, strings, parenthesis
        (flet ((set-color (pos len color)
                 (qfun highlighter "setFormat(int,int,QColor)" pos len color)))
          (let ((ex #\Space))
            (dotimes (i (length text))
              (let ((ch (char text i)))
                (unless (char= #\\ ex)
                  (case ch
                    ((#\( #\))
                       (set-color i 1 *parenthesis-color*))
                    (#\"
                       (x:when-it (end-position (subseq text i))
                         (set-color i x:it *string-color*)
                         (incf i (1- x:it))))
                    (#\;
                       (qfun highlighter "setFormat(int,int,QTextCharFormat)" i (- (length text) i) *comment-format*)
                       (return))))
                (setf ex ch)))))))
    (defun cursor-position-changed ()
      (setf *current-editor* (qsender))
      (setf cache-matches t)
      (when (and *extra-selections*
                 (not *keep-extra-selections*))
        (setf *extra-selections* nil
              *error-region* nil)
        (qfun *current-editor* "setExtraSelections" nil))
      (setf *current-depth* 0
            *current-keyword-indent* 0)
      (let* ((text-cursor (qfun *current-editor* "textCursor"))
             (text-block (qfun text-cursor "block"))
             (line (qfun text-block "text"))
             (pos (qfun text-cursor "columnNumber")))
        (when (and (plusp (length line))
                   (< pos (length line))
                   (char= #\( (char line pos))
                   (or (zerop pos)
                       (char/= #\\ (char line (1- pos)))))
          (let ((pos* pos))
            (when (and (plusp pos)
                       (char= #\` (char line (1- pos)))) ; macros etc.
              (decf pos*))
            (show-matching-parenthesis text-cursor (subseq line pos*) :left pos*)))
        (unless (zerop pos)
          (let ((pos-char (char line (1- pos))))
            (if *current-completer*
                (if (char= #\Space pos-char)
                    (close-completer)
                    (x:when-it (position #\" line :end pos :from-end t)
                      (let* ((begin (subseq line (1+ x:it) pos))
                             (item (first (qfun *eql-completer* "findItems"
                                                begin (logior |Qt.MatchStartsWith| |Qt.MatchCaseSensitive|)))))
                        (if item
                            (set-current-item item begin)
                            (qfun *eql-completer* "clearSelection")))))
                (let ((fun (qt-fun pos)))
                  (if (find fun '(:qnew :qfun))
                      ;; show object name completer?
                      (when (char= #\" pos-char)
                        (completer (qobject-names) (if (eql :qnew fun) :qnew :qfun-static))
                        (return-from cursor-position-changed))
                      (flet ((ending (start)
                               (if (< start pos)
                                   (subseq line start pos)
                                   ""))
                             (var (str &optional (n 1))
                               (let ((start 0)
                                     var)
                                 (dotimes (i n)
                                   (multiple-value-setq (var start)
                                     (read* str start)))
                                 var))
                             (type (var)
                               (let ((global (global-var-name-p var)))
                                 (find-in-source var
                                                 (current-source-code text-cursor (subseq line 0 pos) (when global :all))
                                                 global))))
                        (case pos-char
                          (#\(
                           (cond ((x:when-it (qt-pos :qnew)
                                    ;; show QNEW constructor completer?
                                    (when (> pos x:it)
                                      (x:when-it* (position #\Q line :start x:it)
                                        (let ((qt-name (subseq line x:it* (1- pos))))
                                          (when (qid qt-name)
                                            (completer (constructor-args qt-name) :qnew-constructor)
                                            (return-from cursor-position-changed)))))))
                                 ((x:when-it (search " \"Q" line :test 'string= :end2 pos)
                                    ;; show QLET constructor completer?
                                    (let ((qt-name (read* (format nil "~A\"" (subseq line x:it (1- pos))))))
                                      (when (and (stringp qt-name)
                                                 (qid qt-name))
                                        (completer (constructor-args qt-name) :qnew-constructor)
                                        (return-from cursor-position-changed)))))))
                          (#\)
                           (show-matching-parenthesis text-cursor (subseq line 0 pos) :right))
                          (#\"
                           (let* ((qget (qt-pos :qget))
                                  (qset (unless qget (qt-pos :qset))))
                             (cond ((or qget qset)
                                    (let* ((ending (ending (or qget qset)))
                                           (var (var ending)))
                                      (when (= 1 (count #\" ending))
                                        ;; show QGET or QSET completer?
                                        (when var
                                          (let ((global (global-var-name-p var)))
                                            (x:when-it (type var)
                                              (completer (call-candidates x:it :properties nil qget) :qget)
                                              (return-from cursor-position-changed)))))))
                                   ((x:when-it (qt-pos :qfun)
                                      (let* ((ending (ending x:it))
                                             (var (var ending)))
                                        (case (count #\" ending)
                                          (1
                                           ;; show QFUN completer?
                                           (when var
                                             (let ((global (global-var-name-p var)))
                                               (x:when-it* (type var)
                                                 (completer (call-candidates x:it* :functions) :qfun)
                                                 (return-from cursor-position-changed)))))
                                          (3
                                           ;; show QFUN completer for static functions?
                                           (when (qid var)
                                             (completer (call-candidates var :functions nil t :static) :qfun)
                                             (return-from cursor-position-changed)))))))
                                   ((x:when-it (qt-pos :qconnect)
                                      (let ((ending (ending x:it)))
                                        (case (count #\" ending)
                                          (1
                                           ;; show QCONNECT-FROM completer?
                                           (let ((var (var ending)))
                                             (when var
                                               (let ((global (global-var-name-p var)))
                                                 (x:when-it* (type var)
                                                   (completer (call-candidates x:it* :signals) :qconnect-from)
                                                   (return-from cursor-position-changed))))))
                                          (3
                                           ;; show QCONNECT-TO completer?
                                           (let ((sig (var ending 2))
                                                 (var (var ending 3)))
                                             (when (and (stringp sig)
                                                        var)
                                               (let ((global (global-var-name-p var)))
                                                 (x:when-it* (type var)
                                                   (completer (call-candidates x:it* :slots (fun-args sig))
                                                              :qconnect-to)
                                                   (return-from cursor-position-changed))))))))))
                                   ((x:when-it (qt-pos :qoverride)
                                      ;; show QOVERRIDE completer?
                                      (let* ((ending (ending x:it))
                                             (var (var ending)))
                                        (when (and var (= 1 (count #\" ending)))
                                          (let ((global (global-var-name-p var)))
                                            (x:when-it* (type var)
                                              (completer (call-candidates x:it* :override) :qoverride)
                                              (return-from cursor-position-changed)))))))
                                   ((x:when-it (qt-pos :qfind-child)
                                      ;; show QFIND-CHILD completer?
                                      (let* ((ending (ending x:it))
                                             (var (var ending)))
                                        (when (= 1 (count #\" ending))
                                          (let* ((global (global-var-name-p var))
                                                 (exp (find-in-source var
                                                                      (current-source-code text-cursor (subseq line 0 pos) :all)
                                                                      global
                                                                      :exp))
                                                 (ui-name (ignore-errors
                                                            (eval (second (if global (third exp) exp))))))
                                            (x:when-it* (qui-names ui-name)
                                              (completer (sort x:it* 'string<) :qfind-child)
                                              (return-from cursor-position-changed)))))))
                                   (t
                                    ;; show QLET object name completer?
                                    (when (var-in-qlet-tree-p (current-source-code text-cursor (subseq line 0 pos)))
                                      (completer (qobject-names) :qnew)
                                      (return-from cursor-position-changed)))))))))))))))))

(defun insert-completer-option-text (&optional item)
  (qfun *eql-completer* "resize" '(0 0))
  (flet ((add-quote (x)
           (format nil "~A\"" x)))
    (x:when-it (current-completer-option)
      (case *current-completer*
        (:qnew
           (insert-text x:it :select))
        (:qnew-constructor
           (insert-text (add-quote (subseq x:it 1))))
        (:qfun
           (insert-text (add-quote (cut-optional-type-list x:it)) :select))
        ((:qget :qset :qfun-static :qfind-child :qconnect-from :qconnect-to :qoverride)
           (insert-text (add-quote x:it) :select)))))
  (close-completer))

(defun completer-key-pressed (key-event)
  (when *current-completer*
    (let ((forward t))
      (case (qfun key-event "key")
        ((#.|Qt.Key_Up| #.|Qt.Key_Down| #.|Qt.Key_PageUp| #.|Qt.Key_PageDown| #.|Qt.Key_Home| #.|Qt.Key_End|)
           (setf forward nil))
        ((#.|Qt.Key_Return| #.|Qt.Key_Enter|)
           (insert-completer-option-text)
           (return-from completer-key-pressed))
        (#.|Qt.Key_Escape|
           (close-completer)
           (return-from completer-key-pressed)))
      (if forward
          (qfun "QCoreApplication" "sendEvent" *current-editor* key-event)
          (qcall-default)))))

(defun current-completer-option ()
  (qfun (first (qfun *eql-completer* "selectedItems")) "text"))

(let (cursor-pos height)
  (defun completer (options name)
    (setf *current-completer* name)
    (unless (null options)
      (x:do-with (qfun *eql-completer*)
        "clear"
        ("addItems" options)
        "adjustSize")
      (setf height (qfun *eql-completer* "sizeHintForRow" 0))
      (qset *eql-completer* "size"
            (list (+ 25 (* (min 80 (apply 'max (mapcar 'length options)))
                           (first (font-metrics-size))))
                  (+ 2 (* (min +max-shown-completions+ (length options)) height))))
      (set-current-item (qfun *eql-completer* "item" 0))
      (adjust-completer-pos :ini)
      (x:do-with (qfun *eql-completer*)
        "show"
        "setFocus")))
  (defun adjust-completer-pos (&optional ini)
    (let* ((desktop (qfun (qfun "QApplication" "desktop") "availableGeometry"))
           (cursor (if ini
                       (setf cursor-rect (qfun *current-editor* "cursorRect"))
                       cursor-rect))
           (pos (qfun (qfun *current-editor* "viewport") "mapToGlobal"
                      (list (+ (first cursor) (third cursor))
                            (+ (second cursor) (fourth cursor)))))
           (size (qget *eql-completer* "size"))
           (dx (- (+ (first pos) (first size))
                  (third desktop)))
           (dy (- (+ (second pos) (second size))
                  (fourth desktop))))
      (when (plusp dx)
        (decf (first pos) dx))
      (when (plusp dy)
        (decf (second pos) (+ (fourth cursor) (second size))))
      (qset *eql-completer* "pos" pos)))
  (defun set-current-item (item &optional begin)
    (when begin
      (do ((row (qfun *eql-completer* "row" item) (1+ row))
           (n-shown 0 (1+ n-shown)))
          ((or (= row (qfun *eql-completer* "count"))
               (= +max-shown-completions+ n-shown)
               (not (x:starts-with begin (qfun (qfun *eql-completer* "item" row) "text"))))
             (qset *eql-completer* "size" (list (qget *eql-completer* "width")
                                                (+ 2 (* n-shown height))))
             (adjust-completer-pos))))
    (qfun item "setSelected" t)
    (x:do-with (qfun *eql-completer*)
      ("scrollToItem" item |QAbstractItemView.PositionAtTop|)
      ("setCurrentItem" item))))

(defun close-completer (&optional event)
  (setf *current-completer* nil)
  (x:do-with (qfun *eql-completer*)
    "hide"
    "clear")
  (qfun *current-editor* "setFocus"))

(defun current-source-code (text-cursor &optional curr-line all)
  (let ((lines (when curr-line (list curr-line))))
    (do ((n (- (qfun text-cursor "blockNumber") (if curr-line 1 0)) (1- n)))
        ((minusp n))
      (let* ((text-block (qfun (document) "findBlockByNumber" n))
             (text (qfun text-block "text")))
        (push text lines)
        (when (and (not all)
                   (x:starts-with "(" text))
          (return))))
    (push "(" lines)
    (code-tree (with-output-to-string (s)
                 (dolist (line lines)
                   (write-line line s))))))

(defun code-tree (str)
  (let ((tree (read* (concatenate 'string
                                  (string-right-trim '(#\Newline #\Space #\") str)
                                  #.(make-string 99 :initial-element #\))))))
    (do ((exp tree (first (last exp)))
         (depth -1 (1+ depth)))
        ((atom exp) (setf *cursor-code-depth* depth)))
    tree))

(defun find-in-source (var code &optional global exp)
  (let (found)
    (labels ((class-only (name)
               (x:if-it (position #\( name)
                   (subseq name 0 x:it)
                   name))
             (walk-tree (tree var depth)
               (when tree
                 (dolist (el tree)
                   (unless (atom el)
                     (if global
                         (when (and (find (first el) '(defconstant defparameter defvar))
                                    (eql var (second el)))
                           (case (first (third el))
                             (qnew
                                (return-from find-in-source
                                  (class-only (second (third el)))))
                             (qload-ui
                                (return-from find-in-source
                                  (if exp el (qui-class (eval (second (third el)))))))
                             (qfind-child
                                (return-from find-in-source
                                  (qui-class (eval (second (third (find-in-source (second (third el)) code :global :exp))))
                                             (third (third el)))))))
                         (when (< depth *cursor-code-depth*)
                           (case (first el)
                             ((let let*)
                                (dolist (curr (second el))
                                  (unless (atom curr)
                                    (when (eql var (first curr))
                                      (case (first (second curr))
                                        (qnew
                                           (setf found (second (second curr))))
                                        (qfind-child
                                           (setf found (qui-class (eval (second (find-in-source (second (second curr)) code nil :exp)))
                                                                  (third (second curr))))))))))
                             (qlet
                                 (dolist (curr (second el))
                                   (when (eql var (first curr))
                                     (let ((name (second curr)))
                                       (setf found (subseq name 0 (position #\( name))))))))))
                     (walk-tree el var (1+ depth)))))))
      (walk-tree code var 1)
      (class-only found))))

(defun var-in-qlet-tree-p (code)
  (labels ((walk-tree (tree depth)
             (when tree
               (dolist (el tree)
                 (unless (atom el)
                   (when (and (eql 'qlet (first el))
                              (= 2 (- *cursor-code-depth* depth)))
                     (return-from var-in-qlet-tree-p t))
                   (walk-tree el (1+ depth)))))))
    (walk-tree code 1)))

;;; auto indent

(defun auto-indent-spaces (kw)
  (when (symbolp kw)
    (let ((name (symbol-name kw)))
      (x:when-it (position +package-char-dummy+ name :from-end t)
        (setf name (subseq name (1+ x:it))))
      (cdr (find name *auto-indent* :test 'string= :key 'car)))))

(defun cut-comment (line)
  (let ((ex #\Space))
    (dotimes (i (length line))
      (let ((ch (char line i)))
        (when (and (char= #\; ch)
                   (char/= #\\ ex))
          (return-from cut-comment (subseq line 0 i)))
        (setf ex ch))))
  line)

(defun last-expression-indent (line)
  (let* ((line* (cut-comment line))
         (open (position #\( line* :from-end t))
         (space (when open (position #\Space line* :start open))))
    (position #\Space (if space line* line) :test 'char/= :start (if space space 0))))

(defun indentation (line)
  (if (x:empty-string (string-trim " " line))
      0
      (let ((pos-1 (position #\Space line :test 'char/=))
            (pos-x (last-expression-indent line)))
        (if (char= #\; (char line pos-1))
            pos-1
            (let ((spaces (+ *current-depth* *current-keyword-indent*))) ; see right paren matcher
              (when (and (zerop spaces)
                         (not *extra-selections*)
                         pos-1)
                (setf spaces (if (and (char= #\( (char line pos-1))
                                      (find (read* (subseq line (1+ pos-1)))
                                            '(case ccase ecase defvar-ui loop prog progn prog1 prog2
                                              typecase unless when when-it when-it* while)))
                                 (+ pos-1 2)
                                 pos-x)))
              spaces)))))

(defun no-string-parens (line)
  (let ((ex #\Space)
        in-string)
    (dotimes (i (length line))
      (let ((ch (char line i)))
        (case ch
          (#\"
             (unless (char= #\\ ex)
               (setf in-string (not in-string))))
          ((#\( #\))
             (when in-string
               (setf (char line i) #\Space))))
        (setf ex ch))))
  line)

(defun editor-key-pressed (key-event)
  (case (qfun key-event "key")
    ((#.|Qt.Key_Return| #.|Qt.Key_Enter|)
       (if (or (qget *file-popup* "visible")
               (qget *symbol-popup* "visible"))
           (insert-tab-completion)
           (let* ((cursor (qfun *editor* "textCursor"))
                  (curr (qfun cursor "block"))
                  (spaces (indentation (qfun curr "text"))))
             (if (zerop spaces)
                 (qcall-default)
                 (progn
                   (qfun cursor "insertText" (format nil "~%~A" (make-string spaces)))
                   (qfun *editor* "ensureCursorVisible"))))))
    (#.|Qt.Key_Tab|
       (if (zerop (qfun key-event "modifiers"))
           (update-tab-completer nil :show)
           ;; auto indent paragraph: current line -> next empty line
           (let ((cursor* (qfun *editor* "textCursor")))
             (qfun cursor* "movePosition" |QTextCursor.StartOfLine| |QTextCursor.MoveAnchor|)
             (qfun *editor* "setTextCursor" cursor*)
             (let ((orig* (qfun *editor* "textCursor")))
               (loop
                 (let ((spaces 0))
                   (let ((cursor (qfun *editor* "textCursor"))  ; returns a copy
                         (orig   (qfun *editor* "textCursor"))) ; (see above)
                     (unless (zerop (qfun cursor "blockNumber"))
                       (qfun cursor "movePosition" |QTextCursor.PreviousBlock| |QTextCursor.MoveAnchor|)
                       (qfun *editor* "setTextCursor" cursor)
                       (let ((curr (qfun cursor "block")))
                         (let ((line (no-string-parens (qfun curr "text"))))
                           (unless (or (x:empty-string line)
                                       (char= #\; (find #\Space line :test 'char/=)))
                             ;; apply right paren matcher (for indent info)
                             (do* ((i (1- (length line)) (1- i))
                                   (ch (char line i) (char line i)))
                                 ((zerop i))
                               (when (char= #\) ch)
                                 (show-matching-parenthesis cursor (subseq line 0 (1+ i)) :right)
                                 (when *extra-selections*
                                   (return)))))
                           (setf spaces (indentation line)))))
                     (qfun *editor* "setTextCursor" orig)
                     ;; select current indent spaces (to be substituted)
                     (let* ((curr (qfun orig "block"))
                            (line (qfun curr "text"))
                            (pos (position #\Space line :test 'char/=)))
                       (when (x:empty-string (string-trim " " line))
                         (return))                                                                      ; exit 1
                       (when (not (zerop pos))
                         (x:do-with (qfun orig "movePosition")
                           (|QTextCursor.StartOfLine| |QTextCursor.MoveAnchor|)
                           (|QTextCursor.NextCharacter| |QTextCursor.KeepAnchor| pos))))
                     (unless (zerop spaces)
                       (qfun orig "insertText" (make-string spaces)))))
                 (unless (qfun cursor* "movePosition" |QTextCursor.NextBlock| |QTextCursor.MoveAnchor|)
                   (return))                                                                            ; exit 2
                 (qfun *editor* "setTextCursor" cursor*))
               (x:do-with (qfun *editor*)
                 ("setTextCursor" orig*)
                 "ensureCursorVisible")))))
    (t
       (update-tab-completer key-event)
       (qcall-default))))

;;; paren highlighting

(defun left-paren (text-cursor curr-line pos)
  (let ((curr-n (qfun text-cursor "blockNumber"))
        (start 0)
        lines)
    (flet ((try-read (curr-line*)
             (setf lines (nconc lines (list curr-line*)))
             (let ((code (with-output-to-string (s)
                           (dolist (line lines)
                             (write-line line s)))))
               ;; proceed only without EOF Lisp reader error (for performance reasons)
               (read* code)
               (unless (eql :end-of-file *try-read-error*)
                 (do ((end (position #\) code :start start) (position #\) code :start (1+ end))))
                     ((null end))
                   (let ((code* (subseq code 0 (1+ end))))
                     (multiple-value-bind (exp end*)
                         (if (string= "()" code*)
                             (values '(nil) 2)
                             (read* code*))
                       (when (consp exp)
                         (let ((n-lines (1- (length lines))))
                           (return-from left-paren (values n-lines                           ; lines down
                                                           (1- (if (zerop n-lines)           ; characters right
                                                                   (+ pos end*)
                                                                   (- end* start))))))))))))
             (incf start (1+ (length curr-line*)))))
      (try-read curr-line)
      (let ((max (qfun (document) "blockCount")))
        (when (< curr-n max)
          (do ((n (1+ curr-n) (1+ n))
               (text-block (qfun (qfun text-cursor "block") "next") (qfun text-block "next")))
              ((>= n max))
            (try-read (qfun text-block "text"))))))))

(defun right-paren (text-cursor curr-line)
  (let ((curr-n (qfun text-cursor "blockNumber"))
        lines)
    (flet ((try-read (curr-line* &optional first)
             (push curr-line* lines)
             (let ((code (with-output-to-string (s)
                           (dolist (line lines)
                             (write-line line s)))))
               ;; proceed only on provoked EOF Lisp reader error (for performance reasons)
               (read* (concatenate 'string "(" code))
               (when (eql :end-of-file *try-read-error*) 
                 (do ((start (position #\( code :end (length curr-line*) :from-end t) (position #\( code :end start :from-end t)))
                     ((null start))
                   (unless (and (plusp start)
                                (char= #\\ (char code (1- start))))
                     (let ((code* (subseq code (if (and (plusp start)
                                                        (char= #\` (char code (1- start)))) ; macros etc.
                                                   (1- start)
                                                   start))))
                       (multiple-value-bind (exp end)
                           (if (x:starts-with "()" code*)
                               (values '(nil) 2)
                               (read* code*))
                         (cond ((and (consp exp)
                                     end
                                     (= end (1- (length code*))))
                                (setf *current-depth* start)
                                (x:when-it (position #\( code :end start :from-end t)
                                  (let* ((kw (read* (subseq code (1+ x:it))))
                                         (spc (auto-indent-spaces kw)))
                                    (when spc
                                      (setf *current-depth* x:it
                                            *current-keyword-indent* spc))))
                                (when (plusp *current-depth*)
                                  (let ((prev (char curr-line* (1- *current-depth*))))
                                    (unless (find prev " (")
                                      (setf  *current-depth* (x:if-it (position #\Space curr-line* :end *current-depth* :from-end t)
                                                                 (1+ x:it)
                                                                 0)))))
                                (return-from right-paren (values (1- (length lines)) ; lines up
                                                                 start)))            ; characters right
                               ((null exp)
                                (let* ((kw (read* (subseq code 1)))
                                       (spc (auto-indent-spaces kw)))
                                  (when spc
                                    (setf *current-depth* 0
                                          *current-keyword-indent* spc)
                                    (return-from right-paren)))))))))))
             (when (x:starts-with "(" curr-line*)
               (return-from right-paren))))
      (try-read curr-line t)
      (when (plusp curr-n)
        (do ((n (1- curr-n) (1- n))
             (text-block (qfun (qfun text-cursor "block") "previous") (qfun text-block "previous")))
            ((minusp n))
          (try-read (qfun text-block "text")))))))

(let ((color (qnew "QBrush(QColor)" "#FFFF40"))
      (color-region (qnew "QBrush(QColor)" "#FFD0D0"))
      pos-open pos-close)
  (defun show-matching-parenthesis (text-cursor line type &optional pos)
    (multiple-value-bind (move-lines move-characters)
        (if (eql :left type)
            (left-paren text-cursor line pos)
            (right-paren text-cursor line))
      (when move-lines
        (qlet ((format "QTextCharFormat"))
          (let ((cursor1 (qfun *current-editor* "textCursor"))
                (cursor2 (qfun *current-editor* "textCursor")))
            (qfun format "setBackground" (if *error-region* color-region color))
            (qfun cursor1 "movePosition" (if (eql :left type)
                                             |QTextCursor.NextCharacter|
                                             |QTextCursor.PreviousCharacter|)
                  |QTextCursor.KeepAnchor|)
            (if (zerop move-lines)
                (qfun cursor2 "movePosition"
                      |QTextCursor.StartOfLine|
                      (if *error-region* |QTextCursor.KeepAnchor| |QTextCursor.MoveAnchor|))
                (qfun cursor2 "movePosition"
                      (if (eql :left type) |QTextCursor.NextBlock| |QTextCursor.PreviousBlock|)
                      (if *error-region* |QTextCursor.KeepAnchor| |QTextCursor.MoveAnchor|)
                      move-lines))
            (unless (zerop move-characters)
              (qfun cursor2 "movePosition"
                    |QTextCursor.NextCharacter|
                    (if *error-region* |QTextCursor.KeepAnchor| |QTextCursor.MoveAnchor|)
                    move-characters))
            (unless *error-region*
              (qfun cursor2 "movePosition" |QTextCursor.NextCharacter| |QTextCursor.KeepAnchor|))
            (qfun *current-editor* "setExtraSelections" (list (list cursor1 format)
                                                              (list cursor2 format)))
            (when (qeql *editor* *current-editor*)
              (let ((p1 (qfun cursor1 "position"))
                    (p2 (qfun cursor2 "position")))
                (setf pos-open (1- (min p1 p2))
                      pos-close (max p1 p2))
                (when (= p1 pos-close)
                  (incf pos-close))))
            (setf *extra-selections* t))))))
  (defun highlighted-parenthesis-text ()
    (setf *latest-eval-position* pos-open)
    (subseq (qget *editor* "plainText") pos-open pos-close))
  (defun copy/cut-highlighted-region (type)
    (when (and pos-open pos-close)
      (let ((cursor (qfun *editor* "textCursor"))
            (copy (eql :copy type)))
        (x:do-with (qfun cursor)
          ("setPosition" pos-open)
          ("setPosition" pos-close |QTextCursor.KeepAnchor|))
        (qfun *editor* "setTextCursor" cursor)
        (when copy
          (dotimes (n #+darwin 25 #-darwin 1) ; hack
            (qfun *editor* "repaint")
            (qprocess-events))
          (sleep 0.2))
        (qfun *editor* (if copy "copy" "cut"))
        (setf cursor (qfun *editor* "textCursor"))
        (qfun cursor "setPosition" pos-open)
        (qfun *editor* "setTextCursor" cursor)
        (qsingle-shot 100 (lambda () (qfun *editor* "setFocus"))))))) ; hack

(defun mark-error-region (file-pos)
  (when (string= *file-name* (file-namestring (car file-pos)))
    (let* ((text (qget *editor* "plainText"))
           (end (nth-value 1 (read* text (cdr file-pos))))
           (*keep-extra-selections* t)
           (text-cursor (qfun *editor* "textCursor")))
      (qfun *editor* "moveCursor" |QTextCursor.Start|)
      (setf *error-region* t)
      (qfun text-cursor "setPosition" end)
      (x:do-with (qfun *editor*)
        ("setTextCursor" text-cursor)
        "ensureCursorVisible"))))

;;; external lisp process

(defun run-on-server (str)
  (qprocess-events)
  (or (local-client:request str)
      (when (= |QMessageBox.Yes|
               (qlet ((msg "QMessageBox"))
                 (x:do-with (qfun msg)
                   ("setText" (tr "<p>The <code><b style='color: blue'>local-server</b></code> seems not running.</p><p>Start it now?</p>"))
                   ("setStandardButtons" (logior |QMessageBox.Yes| |QMessageBox.No|))
                   ("setDefaultButton(QMessageBox::StandardButton)" |QMessageBox.No|)
                   "exec")))
        (qfun "QProcess" "startDetached" "eql -io local-server")
        ;; wait max. 15 seconds
        (dotimes (i 150)
          (qprocess-events)
          (when (local-client:request str)
            (return-from run-on-server t))
          (sleep 0.1))
        nil)))

(defun save-and-run ()
  (file-save)
  (run-on-server (format nil "(load ~S)" *file-name*)))

(defun eval-region ()
  (run-on-server (highlighted-parenthesis-text)))

(defun repeat-eval ()
  (when *latest-eval-position*
    (let ((text (qget *current-editor* "plainText")))
      (when (< *latest-eval-position* (length text))
        (let ((text* (subseq text *latest-eval-position*)))
          (x:when-it (end-position text*)
            (run-on-server (subseq text* 0 x:it))
            (return-from repeat-eval))))))
  (qmsg (tr "No valid latest region found.")))

(defun data-from-server (type str)
  (case type
    ((:expression :output :values :trace :error)
       (when (find type '(:trace :error))
         ;; fresh line
         (let ((nl (string #\Newline)))
           (unless (x:starts-with nl str)
             (let ((cur (qfun *output* "textCursor")))
               (unless (zerop (qfun cur "columnNumber"))
                 (qfun *output* "insertPlainText" nl))))))
       (x:do-with (qfun *output*)
         ("moveCursor" |QTextCursor.End|)
         ("setTextColor" (case type
                           (:output "saddlebrown")
                           (:values "blue")
                           (:trace  "darkmagenta")
                           (:error  "red")
                           (t       "black")))
         ("insertPlainText" str))
       (let ((vs (qfun *output* "verticalScrollBar")))
         (qset vs "value" (qget vs "maximum"))))
    (:file-position
       (mark-error-region (read-from-string str)))
    (:activate-editor
       (x:do-with (qfun *main*)
         "activateWindow"
         "raise"))))

;;; command line

(defun command ()
  (let ((text (string-trim '(#\Newline) (qget *command* "plainText"))))
    (when (run-on-server text)
      (history-add text))
    (qfun *command* "clear")))

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
      (ignore-errors (delete-file +history-file+))
      (with-open-file (s +history-file+ :direction :output
                         :if-does-not-exist :create)
        (dolist (cmd history)
          (write-line cmd s)))
      (reverse history))))

(let ((up (saved-history))
      (out (open +history-file+ :direction :output
                 :if-exists :append :if-does-not-exist :create))
      down)
  (defun command-key-pressed (key-event)
    (x:if-it (case (qfun key-event "key")
               (#.|Qt.Key_Up|
                  (x:when-it (pop up)
                    (push x:it down)))
               (#.|Qt.Key_Down|
                  (x:when-it (pop down)
                    (push x:it up)))
               (#.|Qt.Key_Tab|
                  (update-tab-completer nil :show)
                  (return-from command-key-pressed))
               ((#.|Qt.Key_Return| #.|Qt.Key_Enter|)
                  (if (or (qget *file-popup* "visible")
                          (qget *symbol-popup* "visible"))
                      (progn
                        (insert-tab-completion)
                        (return-from command-key-pressed))
                      (command))))
        (qset *command* "plainText" (first x:it))
        (update-tab-completer key-event))
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

;;; symbol completer

(defun all-symbols (package-name)
  (let ((unique (make-hash-table))
        all)
    (dolist (pkg (list package-name :keyword))
      (let ((*package* (find-package pkg)))
        (do-symbols (sym)
          (unless (gethash sym unique)
            (setf (gethash sym unique) t)
            (let ((name (symbol-name sym)))
              (unless (char= #\% (char name 0)) ; exclude internally used symbols
                (push (if (every (lambda (ch)
                                   (or (not (alpha-char-p ch))
                                       (upper-case-p ch)))
                                 name)
                          (write-to-string sym :case :downcase)
                          (write-to-string sym)) ; preserve case (for Qt enums)
                      all)))))))
    (sort all 'string<)))

(defun function-lambda-list* (name)
  (let ((symbol (intern (string-upcase name))))
    (multiple-value-bind (args ok)
        (and (ignore-errors (symbol-function symbol))
             (ignore-errors (ext:function-lambda-list symbol)))
      (if ok
          (format nil "<b>~A</b> ~(~A~)" name args)
          ""))))

(let (name*)
  (defun update-completer-symbols (&optional (package-name :eql))
    (when (string/= package-name name*)
      (setf name* package-name)
      (qfun *symbol-model* "setStringList" (all-symbols package-name)))))

(defun in-string-p (line)
  (let ((ex #\Space)
        in-string)
    (x:do-string (ch line)
      (when (and (char= #\" ch)
                 (char/= #\\ ex))
        (setf in-string (not in-string)))
      (setf ex ch))
    in-string))

(let (prefix current completer file*)
  (defun update-tab-completer (key-event &optional show)
    (when (and (or (not key-event)
                   (not (= |Qt.Key_Escape| (qfun key-event "key"))))
               (or show
                   (qget *file-popup* "visible")
                   (qget *symbol-popup* "visible")))
      (let* ((cursor (qfun *current-editor* "textCursor"))
             (text (concatenate 'string
                                (text-until-cursor cursor)
                                (if show "" (qfun key-event "text"))))
             (file (in-string-p text))
             (start (cond (file
                           (1+ (position #\" text :from-end t)))
                          ((x:empty-string text)
                           0)
                          ((x:ends-with " " text)
                           (length text))
                          (t
                           (let ((p1 (position-if (lambda (ch) (find ch ":*|")) text :from-end t))
                                 (p2 (position-if (lambda (ch) (find ch " '(")) text :from-end t)))
                             (when (and p1
                                        (plusp p1)
                                        (char= #\: (char text p1))
                                        (char/= #\Space (char text (1- p1))))
                               (incf p1))
                             (if (and p1 p2)
                                 (max p1 (1+ p2))
                                 (or p1 (1+ p2))))))))
        (setf completer (if file *file-completer* *symbol-completer*))
        (when show
          (unless (qeql *current-editor* (qfun completer "widget"))
            (qfun completer "setWidget" *current-editor*)))
        (qset completer "completionPrefix" (setf prefix (subseq text start)))
        (update-tab-completer-2 file))))
  (defun update-tab-completer-2 (&optional file) ; see "directoryLoaded(QString)" from *file-model*
    (qfun completer "complete")
    (let ((popup (if file *file-popup* *symbol-popup*)))
      (qfun popup "resize" (list (qget *current-editor* "width")
                                 (+ (* 2 (qget popup "frameWidth"))
                                    (* (min (qget completer "maxVisibleItems")
                                            (qfun completer "completionCount"))
                                       (qfun popup "sizeHintForRow" 0)))))
      (dotimes (n 10) ; hack (pathname completer)  
        (qprocess-events))
      (qfun popup "setCurrentIndex" (qfun popup "indexAt" '(0 0)))))
  (defun item-highlighted (name &optional file)
    (setf current name
          file* file))
  (defun insert-tab-completion ()
    (when (and current
               (not (x:empty-string current)))
      (let ((txt (subseq current (length prefix))))
        (when file*
          (let* ((line (concatenate 'string (text-until-cursor) txt))
                 (path (subseq line (1+ (position #\" line :from-end t)))))
            (qlet ((info "QFileInfo(QString)" path))
              (when (qfun info "isDir")
                (setf txt (concatenate 'string txt "/"))))))
        (qfun *current-editor* "insertPlainText" txt)))
    (unless file*
      (show-status-message (function-lambda-list* current) :html))
    (close-tab-popups))
  (defun close-tab-popups ()
    (qfun *file-popup* "hide")
    (qfun *symbol-popup* "hide")
    (setf current nil)))

;;; find, replace

(defun find-text ()
  (unless (qfun *editor* "find" (qget *find* "text"))
    (qfun *find* "setFocus")
    (qfun *editor* "moveCursor" |QTextCursor.Start|)))

(defun replace-text ()
  (qfun (qfun *editor* "textCursor") "insertText" (qget *replace* "text"))
  (find-text))

;;; profile

#|
(require :profile)

(progn
  (use-package :profile)
  (profile:profile
   highlight-block
   left-paren
   right-paren
   read*))
|#

;;; debugger hook

(defun hide-popups-on-errors ()
  "On errors, prevent possible freezing of mouse click events."
  (setf *debugger-hook* (lambda (&rest args)
                          (setf *debugger-hook* nil)
                          (qfun "QMessageBox" "critical" nil "EQL" (tr "Internal editor error, sorry."))
                          (dolist (w (qfun "QApplication" "topLevelWidgets"))
                            (unless (qeql *main* w)
                              (qfun w "hide"))))))

;;; start

(defun start ()
  (ini)
  (let* ((args (remove-if (lambda (arg) (x:starts-with "-" arg))
                          (qfun "QCoreApplication" "arguments")))
         (last-arg (first (last args))))
    (file-open (if (and (> (length args) 2)
                        (x:ends-with ".lisp" last-arg))
                   last-arg
                   "my.lisp"))))

(start)
