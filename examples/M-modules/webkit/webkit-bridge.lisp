;;; Simple QtWebKit Bridge Demo
;;;
;;; depends on small plugin, see "lib/webkit_bridge.pro"

(qrequire :webkit)

(in-package :eql-user)

(defvar *webkit-bridge* (qload-c++ "lib/webkit_bridge"))

(defvar *web-view* (qnew "QWebView"))

(defun ini ()
  (! "addToJavaScriptWindowObject" (frame) "Lisp"    *webkit-bridge*) ; for example  1
  (! "addToJavaScriptWindowObject" (frame) "WebView" *web-view*)      ; for examples 2, 3
  (! "setHtml" *web-view*
     (format nil "<html>~
                ~%  <body>~
                ~%    <h3>Simple QtWebKit Bridge Demo</h3>~
                ~%    <ol>~
                ~%      <li>~
                ~%        <p>Call Lisp function with list of arguments (JavaScript array).</p>~
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
                ~%  </body>~
                ~%</html>"))
  (! "show" *web-view*))

(defun frame ()
  (! ("mainFrame" "page" *web-view*)))

(defun test-call (arguments)
  "This function can be called from JavaScript. Needs C++ glue code, see 'lib/webkit_bridge'."
  (qmsg arguments)
  (mapcar 'princ-to-string (reverse arguments)))

(ini)
