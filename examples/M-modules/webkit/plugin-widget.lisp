;;; QtWebKit Plugin Widget Example
;;;
;;; (depends on small plugin, see "lib/plugin_widget.pro")
;;;
;;; This is a simple example of embedding a custom QWidget in a QWebView.
;;;
;;; Note: Adding QNetworkRequest to the plugin widget would allow to get
;;;       any data from the web, but this is not shown here.

(qrequire :webkit)

(in-package :eql-user)

(defvar *web-view*      (qnew "QWebView"))
(defvar *webkit-bridge* (qload-c++ "lib/plugin_widget"))

(defun frame ()
  (! ("mainFrame" "page" *web-view*)))

(defun clock ()
  (symbol-value (find-symbol "*CLOCK*" :clock)))

(defun set-params (arg-names arg-values)
  (mapc (lambda (name value)
          (when (find name '("show-minutes" "show-seconds") :test 'string-equal)
            (setf (symbol-value (find-symbol (string-upcase (format nil "*~A*" name)) :clock))
                  (string-equal "true" value))))
        arg-names arg-values))

(defun ini ()
  ;; use example "clock" as plugin widget
  (load "../../2-clock")
  (! "hide" (clock))
  (let ((web-plugin (qnew "QWebPluginFactory(QObject*)" *web-view*))
        (settings (! "settings" *web-view*)))
    (! "setAttribute" settings |QWebSettings.PluginsEnabled| t)
    (qoverride web-plugin "create(QString,QUrl,QStringList,QStringList)"
               (lambda (mime-type url arg-names arg-values)
                 (when (string= "application/x-clock" mime-type)
                   (set-params arg-names arg-values)
                   (clock))))
    (! (("setPluginFactory" web-plugin) "page" *web-view*)))
  (qconnect *web-view* "loadFinished(bool)"
            (lambda (ok)
              (! "addToJavaScriptWindowObject" (frame) "Lisp" *webkit-bridge*)))
  (! "setUrl" *web-view* (qnew "QUrl(QString)" "plugin-widget.htm"))
  (! "show" *web-view*))

(ini)

