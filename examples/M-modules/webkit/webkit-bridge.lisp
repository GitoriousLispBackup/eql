;;; Simple QtWebKit Bridge Demo
;;;
;;; - depends on small plugin, see "lib/webkit_bridge.pro"
;;; - run (inspector) for JavaScript debugging

(qrequire :webkit)

(in-package :eql-user)

(defvar *webkit-bridge* (qload-c++ "lib/webkit_bridge"))

(defvar *web-view* (qnew "QWebView"))

(defun frame ()
  (! ("mainFrame" "page" *web-view*)))

(defun ini ()
  (! "addToJavaScriptWindowObject" (frame) "Lisp"    *webkit-bridge*) ; for example  1
  (! "addToJavaScriptWindowObject" (frame) "WebView" *web-view*)      ; for examples 2, 3
  (! "setHtml" *web-view*
     (format nil "<html>~
                ~%  <body>~
                ~%    <h3>Simple QtWebKit Bridge Demo</h3>~
                ~%    <ol>~
                ~%      <li>~
                ~%        <p>Call Lisp function passing a JavaScript array.</p>~
                ~%        <input type=\"button\" value=\"Call Lisp\"~
                ~%               onclick=\"alert( Lisp.testCall( [1, 2, 3, 'hello world'] ))\">~
                ~%      <li>~
                ~%        <p>Set <b>Qt Property</b> of this QWebView.</p>~
                ~%        <input type=\"button\" value=\"Set zoom factor:\"~
                ~%               onclick=\"WebView.zoomFactor = document.getElementById('zoom').value\">~
                ~%        <input type=\"text\" value=\"0.8\" size=\"3\" id=\"zoom\">~
                ~%      <li>~
                ~%        <p>Call <b>Qt Slot</b> of this QWebView.</p>~
                ~%        <input type=\"button\" value=\"Maximize\"~
                ~%               onclick=\"WebView.showMaximized()\">~
                ~%    </ol>~
                ~%    <p>See <b>QWebInspector</b> [Scripts] and [Console] for debugging.</p>
                ~%  </body>~
                ~%</html>"))
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

(defun test-call (arguments)
  "This function can be called from JavaScript. Needs C++ glue code, see 'lib/webkit_bridge'."
  ;;                              From:               C++:            To:
  (qmsg arguments)              ; JS array of vars -> QVariantList -> LIST
  (mapcar 'princ-to-string      ; LIST of strings  -> QStringList  -> JS array of strings
          (reverse arguments)))

(ini)
