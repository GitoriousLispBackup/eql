;;; Simple QtWebKit Bridge Demo
;;;
;;; depends on small plugin, see "lib/webkit_bridge.pro"

#+win32 (si:trap-fpe 'floating-point-underflow nil) ; for QWebInspector

(qrequire :webkit)

(load "inspector")

(defvar *web-view* (qnew "QWebView" "size" '(700 550)))

(defvar eql-user::*webkit-bridge* (qload-c++ "lib/webkit_bridge"))
(defvar eql-user::*clone-count*   0)

(defun frame ()
  (! ("mainFrame" "page" *web-view*)))

(defun ini ()
  (qconnect (frame) "javaScriptWindowObjectCleared()"
            (lambda ()
              (! "addToJavaScriptWindowObject" (frame) "Lisp"    eql-user::*webkit-bridge*) ; for examples 1, 2, 3
              (! "addToJavaScriptWindowObject" (frame) "WebView" *web-view*)))              ; for examples 4, 5
  (! "setUrl" *web-view* (qnew "QUrl(QString)" "webkit-bridge.htm"))
  (when (find "debug" (! "arguments" "QApplication") :test 'string=)
    (inspector))
  (! "show" *web-view*))

;;; clone me

(defvar *clone-name* #.(format nil "CLONE-~D" (incf eql-user::*clone-count*)))

(defun clone ()
  (make-package #.*clone-name*)
  (in-package #.*clone-name*)
  (use-package :eql)
  (load "webkit-bridge")
  (! "setWindowTitle" (symbol-value (find-symbol "*WEB-VIEW*" #.*clone-name*))
     #.*clone-name*)
  "(clone)")

;;; These functions can be called from JavaScript (see "README-GLUE-CODE.txt")

(defun test-call (now arguments)
  "qt: QStringList testCall(QDateTime, QVariantList)"
  ;;           | from                C++             to
  ;; ----------|--------------------------------------------------------
  ;; arguments | JS array of vars -> QVariantList -> LIST
  ;; return    | LIST of strings  -> QStringList  -> JS array of strings
  ;;
  (qmsg (cons now arguments))
  (mapcar (lambda (arg)
            (if (qt-object-p arg)
                (! "toString" arg)
                (princ-to-string arg)))
          (cons now arguments)))

(defun eval* (expression)
  "qt: QString eval(QString)"
  (handler-case (princ-to-string (eval (read-from-string expression)))
    (error (condition)
      (qmsg (format nil "<p><b style='color:red'>Lisp Eval Error</b></p><p>~A</p>"
                    (qescape (princ-to-string condition))))
      expression)))

(defun flip-value (web-element)
  "qt: void flipValue(QWebElement)"
  ;; indirection fun: a 'value' of an <input> element can only be changed through JavaScript
  (flet ((js (code)
           (! ("toString" ("evaluateJavaScript" code) web-element))))
    (js (format nil "this.value = ~S" (reverse (js "this.value"))))))

(ini)
