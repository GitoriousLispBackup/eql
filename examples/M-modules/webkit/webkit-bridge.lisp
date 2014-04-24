;;; Simple QtWebKit Bridge Demo
;;;
;;; depends on small plugin, see "lib/webkit_bridge.pro"

#+win32 (si:trap-fpe 'floating-point-underflow nil) ; for QWebInspector

(qrequire :webkit)

(in-package :eql-user)

(defvar *webkit-bridge* (qload-c++ "lib/webkit_bridge"))

(defvar *web-view* (qnew "QWebView" "size" '(700 500)))

(defun frame ()
  (! ("mainFrame" "page" *web-view*)))

(defun ini ()
  (qconnect *web-view* "loadFinished(bool)"
            (lambda (ok)
              (! "addToJavaScriptWindowObject" (frame) "Lisp"    *webkit-bridge*)  ; for examples 1, 2, 3
              (! "addToJavaScriptWindowObject" (frame) "WebView" *web-view*)))     ; for examples 4, 5
  (! "setUrl" *web-view* (qnew "QUrl(QString)" "webkit-bridge.htm"))
  (when (find "debug" (! "arguments" "QApplication") :test 'string=)
    (inspector))
  (! "show" *web-view*))

(let (web-inspector)
  (defun inspector ()
    "Features JavaScript debugger and console."
    (unless web-inspector
      (setf web-inspector (qnew "QWebInspector"))
      (let ((settings (! "settings" *web-view*)))
        (! "setAttribute" settings |QWebSettings.DeveloperExtrasEnabled| t))
      (! "setPage" web-inspector (! "page" *web-view*)))
    (! "show" web-inspector)))

;;; These functions can be called from JavaScript (some C++ glue code needed, see "lib/webkit_bridge").

(defun test-call (arguments)
  ;;                                     From:               C++:            To:
  ;;                                     -------------------------------------------------------
  (qmsg arguments)                     ; JS array of vars -> QVariantList -> LIST
  (mapcar 'princ-to-string arguments)) ; LIST of strings  -> QStringList  -> JS array of strings

(defun eval* (expression)
  (princ-to-string (handler-case (eval (read-from-string expression))
                     (error (condition)
                       condition))))

(defun flip-value (web-element)
  "Passing a QWebElement allows convenient access to its attributes etc. A 'value' of an <input> element can only be changed through JavaScript."
  (flet ((js (code)
           (! ("toString" ("evaluateJavaScript" code) web-element))))
    (js (format nil "this.value = ~S" (reverse (js "this.value"))))))

(ini)
