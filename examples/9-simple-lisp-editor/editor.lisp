;;; copyright (c) 2010 power4projects software
;;;
;;; A very basic and experimental(!) Lisp editor, featuring:
;;;
;;;   - a popup completer (for EQL functions only)
;;;   - paren highlighting
;;;
;;;   - rudimentary syntax highlighter
;;;   - rudimentary auto indent
;;;
;;;   - an independent local Lisp server process for evaluation
;;;   - native Qt event processing through QApplication::exec()
;;;   - eval region

(require :local-client "local-client")

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

(defun read-file (file)
  (with-open-file (s (os-pathname file) :direction :input)
    (setf *file-name* file)
    (let ((str (make-string (file-length s))))
      (read-sequence str s)
      str)))

(defun from-file (name)
  (eval (read-from-string (read-file name))))

(defparameter *auto-indent*   (from-file "data/auto-indent.lisp"))
(defparameter *eql-keywords*  (from-file "data/eql-keywords.lisp"))
(defparameter *lisp-keywords* (from-file "data/lisp-keywords.lisp"))

(defparameter *current-completer*      nil)
(defparameter *current-depth*          0)
(defparameter *current-keyword-indent* 0)
(defparameter *cursor-code-depth*      0)
(defparameter *extra-selections*       nil)
(defparameter *keep-extra-selections*  nil)
(defparameter *error-region*           nil)
(defparameter *try-read-error*         nil)
(defparameter *latest-eval-position*   nil)

(defconstant +max-shown-completions+ 10)
(defconstant +max-history+           50)
(defconstant +package-char-dummy+    #\$)
(defconstant +history-file+          ".command-history")

;;; Qt

(defvar *main*                (qload-ui "data/editor.ui"))
(defvar *editor*              (qfind-child *main* "editor"))
(defvar *output*              (qfind-child *main* "output"))
(defvar *command*             (qfind-child *main* "command"))
(defvar *splitter*            (qfind-child *main* "splitter"))
(defvar *action-open*         (qfind-child *main* "action_open"))
(defvar *action-save*         (qfind-child *main* "action_save"))
(defvar *action-save-as*      (qfind-child *main* "action_save_as"))
(defvar *action-save-and-run* (qfind-child *main* "action_save_and_run"))
(defvar *action-eval-region*  (qfind-child *main* "action_eval_region"))
(defvar *action-repeat-eval*  (qfind-child *main* "action_repeat_eval"))

(defparameter *current-editor*       *editor*)
(defparameter *font*                 nil)
(defparameter *lisp-match-rule*      nil)
(defparameter *eql-keyword-format*   nil)
(defparameter *lisp-keyword-format*  nil)
(defparameter *comment-format*       nil)
(defparameter *parenthesis-color*    "gray")
(defparameter *string-color*         "sienna")
(defparameter *completer*            nil)

(defconstant +bold+               75 "font weight")
(defconstant +key-press+          6  "event type")
(defconstant +start+              1  "move operation")
(defconstant +start-of-line+      3  "move operation")
(defconstant +previous-block+     6  "move operation")
(defconstant +move-left+          9  "move operation")
(defconstant +end+                11 "move operation")
(defconstant +next-block+         16 "move operation")
(defconstant +previous-character+ 7  "move operation")
(defconstant +next-character+     17 "move operation")
(defconstant +move-anchor+        0  "move mode")
(defconstant +keep-anchor+        1  "move mode")
(defconstant +word-under-cursor+  0  "selection type")
(defconstant +native-text+        0  "sequence format")
(defconstant +base+               9  "color role")

(defun file-open ()
  (let ((name (qfun "QFileDialog" "getOpenFileName" nil "" "" "Lisp files (*.lisp)")))
    (unless (x:empty-string name)
      (qset *editor* "plainText" (read-file name))
      (show-file-name))))

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
  (save-file (qfun "QFileDialog" "getSaveFileName" nil "" "" "Lisp files (*.lisp)")))

(defun show-file-name ()
  (show-status-message (file-namestring *file-name*)))

(defmacro key (name)
  `(qenum "Qt::Key" ,(format nil "Key_~A" name)))

(defun ini ()
  (flet ((keys (str)
           (qnew "QKeySequence(QString)" str)))
    (setf *eql-keyword-format*  (qnew "QTextCharFormat")
          *lisp-keyword-format* (qnew "QTextCharFormat")
          *comment-format*      (qnew "QTextCharFormat")
          *completer*           (qnew "QListWidget"
                                      "resizeMode" "Adjust"
                                      "horizontalScrollBarPolicy" "AlwaysOff"
                                      "verticalScrollBarPolicy" "AlwaysOff")
          *font*                (qnew "QFont(QString,int)" 
                                      #+linux "Courier"
                                      #-linux "Courier New"
                                      #+darwin 13
                                      #-darwin 10))
    (let ((editor-highlighter  (qnew "QSyntaxHighlighter(QTextDocument*)" (qfun *editor* "document")))
          (command-highlighter (qnew "QSyntaxHighlighter(QTextDocument*)" (qfun *command* "document"))))
      (qset *action-save*         "shortcut" (keys "Ctrl+S"))
      (qset *action-save-and-run* "shortcut" (keys "Ctrl+R"))
      (qset *action-eval-region*  "shortcut" (keys "Ctrl+Return"))
      (qset *action-repeat-eval*  "shortcut" (keys "Ctrl+E"))
      (dolist (w (list *editor* *output* *command*))
        (qset w "font" *font*))
      (x:do-with (qset *output*)
        ("readOnly" t)
        ("tabStopWidth" (* 8 (first (font-metrics-size)))))
      (x:do-with (qset *completer*)
        ("font" *font*)
        ("frameShape" "Box")
        ("frameShadow" "Plain")
        ("lineWidth" 1))
      (x:do-with (qset *main*)
        ("pos" (list 40 40))
        ("size" (list 800 500))
        ("windowTitle" "Simple Lisp Editor"))
      (x:do-with (qset *command*)
        ("horizontalScrollBarPolicy" "AlwaysOff")
        ("verticalScrollBarPolicy" "AlwaysOff"))
      (qfun *command* "setFixedHeight" (+ (second (font-metrics-size))
                                          (* 2 (qget *command* "frameWidth"))))
      (x:do-with (qfun *splitter* "setStretchFactor")
        (0 2)
        (1 1))
      (set-color *output* +base+ "lavender")
      (qfun *completer* "setWindowFlags" "Popup")
      (dolist (ed (list *editor* *command*))
        (qconnect ed  "cursorPositionChanged()" 'cursor-position-changed))
      (qconnect *completer* "itemDoubleClicked(QListWidgetItem*)" 'insert-completer-option-text)
      (qconnect *action-open* "triggered()" 'file-open)
      (qconnect *action-save* "triggered()" 'file-save)
      (qconnect *action-save-as* "triggered()" 'file-save-as)
      (qconnect *action-save-and-run* "triggered()" 'save-and-run)
      (qconnect *action-eval-region* "triggered()" 'eval-region)
      (qconnect *action-repeat-eval* "triggered()" 'repeat-eval)
      (qconnect (qapp) "aboutToQuit()" 'clean-up)
      (qoverride *editor* "keyPressEvent(QKeyEvent*)" 'editor-key-pressed)
      (qoverride *completer* "keyPressEvent(QKeyEvent*)" 'completer-key-pressed)
      (qoverride *completer* "focusOutEvent(QFocusEvent*)" 'close-completer)
      (qoverride editor-highlighter  "highlightBlock(QString)" (lambda (str) (highlight-block editor-highlighter str)))
      (qoverride command-highlighter "highlightBlock(QString)" (lambda (str) (highlight-block command-highlighter str)))
      (qoverride *command* "keyPressEvent(QKeyEvent*)" 'command-key-pressed)
      (show-status-message (format nil (tr "<b style='color:#4040E0'>Eval Region:</b> move to paren <b>(</b> or <b>)</b>, hit <b>~A</b>")
                                   (qfun (qget *action-eval-region* "shortcut") "toString" +native-text+))
                           :html)
      (ini-highlight-rules)
      (local-client:ini 'data-from-server)
      (qfun *main* "show"))))

(defun clean-up ()
  (file-save))

(defun document ()
  (qfun *current-editor* "document"))

(defun font-metrics-size ()
  (qlet ((fm "QFontMetrics(QFont)" *font*))
    (list (qfun fm "width(QChar)" #\Space)
          (qfun fm "height"))))

(defun set-color (widget role color)
  (let ((pal (qget widget "palette")))
    (qfun pal "setColor(QPalette::ColorRole,QColor)" role color)
    (qset widget "palette" pal)))

(let (label)
  (defun show-status-message (msg &optional html)
    (let ((bar (qfun *main* "statusBar")))
      (when (and html (not label))
        (qfun bar "addWidget" (setf label (qnew "QLabel")) 1))
      (if html
          (qset label "text" msg)
          (qfun bar "showMessage" msg)))))

(defun ini-highlight-rules ()
  (x:do-with (qfun *eql-keyword-format*)
    ("setForeground" (qnew "QBrush(QColor)" "#2020D0"))
    ("setFontWeight" +bold+))
  (x:do-with (qfun *lisp-keyword-format*)
    ("setForeground" (qnew "QBrush(QColor)" "#D02020"))
    ("setFontWeight" +bold+))
  (x:do-with (qfun *comment-format*)
    ("setForeground" (qnew "QBrush(QColor)" "#208080"))
    ("setFontItalic" t))
  (setf *lisp-match-rule* (qnew "QRegExp(QString)" "[('][^ )]+")))

(defun read* (str &optional (start 0))
  (setf *try-read-error* nil)
  (let ((*package* (find-package :eql)))
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

(defun text-until-cursor (text-cursor text-block)
  (subseq (qfun text-block "text") 0 (- (qfun text-cursor "position")
                                        (qfun text-block "position"))))

(defun insert-text (text &optional select)
  (qlet ((text-cursor (qfun *current-editor* "textCursor"))
         (text-block (qfun text-cursor "block")))
    (let* ((text* (text-until-cursor text-cursor text-block))
           (p (position #\" text* :from-end t)))
      (when (and select
                 (not (x:ends-with "\"" text*)))
        (qfun text-cursor "movePosition" +move-left+ +keep-anchor+ (1- (- (length text*) p))))
      (qfun text-cursor "insertText" text)
      (qfun *current-editor* "setTextCursor" text-cursor))))

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
                            (qfun *completer* "findItems"
                                  (format nil "~A(" no-types) "MatchStartsWith | MatchCaseSensitive")))
        (when (string/= fun-name name)
          (let ((num-args (arg-count name)))
            (when (= num-args* num-args)
              (return-from cut-optional-type-list fun-name)))))
      no-types)))

(defun global-var-name-p (var)
  (let ((name (symbol-name var)))
    (flet ((enclosed (ch)
             (and (x:starts-with ch name)
                  (x:ends-with ch name))))
      (or (enclosed "*")
          (enclosed "+")))))

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
                   (kw (subseq text (1+ i) (+ i len))))
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
                (unless (char= #\\ ch)
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
      (qlet ((text-cursor (qfun *current-editor* "textCursor"))
             (text-block (qfun text-cursor "block")))
        (let* ((line (qfun text-block "text"))
               (pos (qfun text-cursor "columnNumber")))
          (when (and (plusp (length line))
                     (< pos (length line))
                     (char= #\( (char line pos))
                     (or (zerop pos)
                         (char/= #\\ (char line (1- pos)))))
            (let ((pos* pos))
              (when (and (plusp pos)
                         (char= #\` (char line (1- pos)))) ; backquote
                (decf pos*))
              (show-matching-parenthesis text-cursor (subseq line pos*) :left pos*)))
          (unless (zerop pos)
            (let ((pos-char (char line (1- pos))))
              (if *current-completer*
                  (if (char= #\Space pos-char)
                      (close-completer)
                      (x:when-it (position #\" line :end pos :from-end t)
                        (let* ((begin (subseq line (1+ x:it) pos))
                               (item (first (qfun *completer* "findItems"
                                                  begin "MatchStartsWith | MatchCaseSensitive"))))
                          (if item
                              (set-current-item item begin)
                              (qfun *completer* "clearSelection")))))
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
                                       ((x:when-it (qt-pos :qenum)
                                          (let ((ending (ending x:it)))
                                            (case (count #\" ending)
                                              (1
                                                 ;; show QENUM names completer
                                                 (completer (enum-names) :qenum)
                                                 (return-from cursor-position-changed))
                                              (3
                                                 ;; show QENUM keys completer?
                                                 (x:when-it* (enum-keys (var ending))
                                                   (completer x:it* :qenum)
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
                                          (return-from cursor-position-changed))))))))))))))))))

(defun insert-completer-option-text (&optional item)
  (qfun *completer* "resize" '(0 0))
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
        ((:qget :qset :qfun-static :qenum :qfind-child :qconnect-from :qconnect-to :qoverride)
           (insert-text (add-quote x:it) :select)))))
  (close-completer))

(defun completer-key-pressed (key-event)
  (when *current-completer*
    (flet ((leave ()
             (return-from completer-key-pressed t)))
      (let ((key (qfun key-event "key"))
            (forward t))
        (case key
          ((#.(key "Up") #.(key "Down") #.(key "PageUp") #.(key "PageDown") #.(key "Home") #.(key "End"))
             (setf forward nil))
          (#.(key "Return")
             (insert-completer-option-text)
             (leave))
          (#.(key "Escape")
             (close-completer)
             (leave)))
        (when forward
          (qfun "QCoreApplication" "sendEvent" *current-editor* key-event)
          t)))))

(defun current-completer-option ()
  (qfun (first (qfun *completer* "selectedItems")) "text"))

(let (cursor-pos height)
  (defun completer (options name)
    (setf *current-completer* name)
    (unless (null options)
      (x:do-with (qfun *completer*)
        "clear"
        ("addItems" options)
        ("resize" '(0 0))
        "adjustSize"
        "show"
        "setFocus")
      (qlet ((index (qfun *completer* "indexAt" '(0 0))))
        (let ((size (nthcdr 2 (qfun *completer* "visualRect" index))))
          (setf height (second size))
          (qset *completer* "size"
                (list (+ 2 (first size))
                      (+ 2 (* (min +max-shown-completions+ (length options)) height))))))
      (set-current-item (qfun *completer* "item" 0)))
    (adjust-completer-pos :ini))
  (defun adjust-completer-pos (&optional ini)
    (let* ((desktop (qfun (qfun "QApplication" "desktop") "availableGeometry"))
           (cursor (if ini
                       (setf cursor-rect (qfun *current-editor* "cursorRect"))
                       cursor-rect))
           (pos (qfun (qfun *current-editor* "viewport") "mapToGlobal"
                      (list (+ (first cursor) (third cursor))
                            (+ (second cursor) (fourth cursor)))))
           (size (qget *completer* "size"))
           (dx (- (+ (first pos) (first size))
                  (third desktop)))
           (dy (- (+ (second pos) (second size))
                  (fourth desktop))))
      (when (plusp dx)
        (decf (first pos) dx))
      (when (plusp dy)
        (decf (second pos) (+ (fourth cursor) (second size))))
      (qset *completer* "pos" pos)))
  (defun set-current-item (item &optional begin)
    (when begin
      (do ((row (qfun *completer* "row" item) (1+ row))
           (n-shown 0 (1+ n-shown)))
          ((or (= row (qfun *completer* "count"))
               (= +max-shown-completions+ n-shown)
               (not (x:starts-with begin (qfun (qfun *completer* "item" row) "text"))))
             (qset *completer* "size" (list (qget *completer* "width")
                                            (+ 2 (* n-shown height))))
             (adjust-completer-pos))))
    (qfun item "setSelected" t)
    (x:do-with (qfun *completer*)
      ("scrollToItem" item "PositionAtTop")
      ("setCurrentItem" item))))

(defun close-completer (&optional event)
  (setf *current-completer* nil)
  (x:do-with (qfun *completer*)
    "hide"
    "clear")
  (qfun *current-editor* "setFocus"))

(defun current-source-code (text-cursor &optional curr-line all)
  (let ((lines (when curr-line (list curr-line))))
    (do ((n (- (qfun text-cursor "blockNumber") (if curr-line 1 0)) (1- n)))
        ((minusp n))
      (qlet ((text-block (qfun (document) "findBlockByNumber" n)))
        (let ((text (qfun text-block "text")))
          (push text lines)
          (when (and (not all)
                     (x:starts-with "(" text))
            (return)))))
    (push "(" lines)
    (code-tree (with-output-to-string (s)
                 (dolist (line lines)
                   (write-line line s))))))

(defun code-tree (str)
  (let ((tree (read* (concatenate 'string
                                  (string-right-trim '(#\Newline #\Space #\") str)
                                  #.(make-string 100 :initial-element #\))))))
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
                                  (when (eql var (first curr))
                                    (case (first (second curr))
                                      (qnew
                                         (setf found (second (second curr))))
                                      (qfind-child
                                         (setf found (qui-class (eval (second (find-in-source (second (second curr)) code nil :exp)))
                                                                (third (second curr)))))))))
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

(let* ((enums (qmeta-enums))
       (names (let (names*)
                (dolist (enums* enums)
                  (let ((scope (first enums*)))
                    (dolist (enum (rest enums*))
                      (push (format nil "~A::~A" scope (first enum)) names*))))
                (sort names* 'string<))))
  (defun enum-names ()
    names)
  (defun enum-keys (name)
    (flet ((find* (str strings)
             (find str strings :key 'first :test 'string=)))
      (let* ((p (position +package-char-dummy+ name))
             (scope (subseq name 0 p))
             (name* (subseq name (+ 2 p))))
        (rest (find* name*
                     (rest (find* scope enums))))))))

;;; auto indent

(defun auto-indent-spaces (kw)
  (when (symbolp kw)
    (let ((name (symbol-name kw)))
      (x:when-it (position +package-char-dummy+ name :from-end t)
        (setf name (subseq name (1+ x:it))))
      (cdr (find name *auto-indent* :test 'string= :key 'car)))))

(defun editor-key-pressed (key-event)
  (flet ((insert (text)
           (qlet ((cursor (qfun *editor* "textCursor")))
             (qfun cursor "insertText" text))
           (qfun *editor* "ensureCursorVisible")
           (return-from editor-key-pressed t)))
    (case (qfun key-event "key")
      ((#.(key "Return") #.(key "Enter"))
         (let ((spaces (+ *current-depth* *current-keyword-indent*)))
           (unless (zerop spaces)
             (insert (format nil "~%~A" (make-string spaces :initial-element #\Space))))))
      (#.(key "Tab")
         (insert "  ")))))

;;; paren highlighting

(defun left-paren (text-cursor curr-line pos)
  (let ((curr-n (qfun text-cursor "blockNumber"))
        (start 0)
        lines)
    (flet ((try-read (curr-line*)
             (setf lines (nconc lines (list curr-line*)))
             (let* ((code (with-output-to-string (s)
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
                                                        (char= #\` (char code (1- start)))) ; backquote
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
        (qlet ((format "QTextCharFormat")
               (cursor1 (qfun *current-editor* "textCursor"))
               (cursor2 (qfun *current-editor* "textCursor")))
          (qfun format "setBackground" (if *error-region* color-region color))
          (qfun cursor1 "movePosition" (if (eql :left type)
                                           +next-character+
                                           +previous-character+)
                +keep-anchor+)
          (if (zerop move-lines)
              (qfun cursor2 "movePosition"
                    +start-of-line+
                    (if *error-region* +keep-anchor+ +move-anchor+))
              (qfun cursor2 "movePosition"
                    (if (eql :left type) +next-block+ +previous-block+)
                    (if *error-region* +keep-anchor+ +move-anchor+)
                    move-lines))
          (unless (zerop move-characters)
            (qfun cursor2 "movePosition"
                  +next-character+
                  (if *error-region* +keep-anchor+ +move-anchor+)
                  move-characters))
          (unless *error-region*
            (qfun cursor2 "movePosition" +next-character+ +keep-anchor+))
          (qfun *current-editor* "setExtraSelections" (list (list cursor1 format)
                                                            (list cursor2 format)))
          (let ((p1 (qfun cursor1 "position"))
                (p2 (qfun cursor2 "position")))
            (setf pos-open (1- (min p1 p2))
                  pos-close (max p1 p2))
            (when (= p1 pos-close)
              (incf pos-close)))
          (setf *extra-selections* t)))))
  (defun highlighted-parenthesis-text ()
    (setf *latest-eval-position* pos-open)
    (subseq (qget *current-editor* "plainText") pos-open pos-close)))

(defun mark-error-region (file-pos)
  (when (string= *file-name* (file-namestring (car file-pos)))
    (let* ((text (qget *editor* "plainText"))
           (end (nth-value 1 (read* text (cdr file-pos))))
           (*keep-extra-selections* t))
      (qlet ((text-cursor (qfun *editor* "textCursor")))
        (qfun *editor* "moveCursor" +start+)
        (setf *error-region* t)
        (qfun text-cursor "setPosition" end)
        (x:do-with (qfun *editor*)
          ("setTextCursor" text-cursor)
          "ensureCursorVisible")))))

;;; external lisp process

(defun run-on-server (str)
  (qprocess-events)
  (local-client:string-request str))

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
    ((:expression :result :trace :error)
       (x:do-with (qfun *output*)
         ("moveCursor" +end+)
         ("setColor" (case type
                       (:result "blue")
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
    (run-on-server text)
    (history-add text)
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
  (defun command-key-pressed (ev)
    (let ((key (qfun ev "key")))
      (x:when-it (cond ((= (key "Up") key)
                        (x:when-it (pop up)
                          (push x:it down)))
                       ((= (key "Down") key)
                        (x:when-it (pop down)
                          (push x:it up)))
                       ((or (= (key "Return") key)
                            (= (key "Enter") key))
                        (command)
                        nil))
        (qset *command* "plainText" (first x:it))))
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

;;; ini

(defun start ()
  (ini)
  (qset *editor* "plainText" (read-file "my.lisp")))

(start)
