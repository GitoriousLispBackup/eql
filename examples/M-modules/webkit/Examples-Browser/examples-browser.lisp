;;; "Examples" Browser
;;;
;;; (depends on small plugin, see "lib/examples_browser.pro")
;;;
;;; Run EQL examples "downloading"/starting them from an EQL WebKit browser.
;;;
;;; Here we use the local example files, but you could put them on a server and point
;;; the QUrl to a network location (in function RUN, see below).
;;;
;;; Once downloaded, the application files are cached locally (to be run offline).
;;;
;;; This could be a convenient way for distributing/updating applications in a network.

(qrequire :webkit)
(qrequire :network)

(in-package :eql-user)

(defvar *web-view*        (qnew "QWebView"
                                "windowTitle"
                                "EQL-WebKit -- Lisp enabled Browser with JavaScript / Lisp bridge"))
(defvar *network-manager* (qnew "QNetworkAccessManager"))
(defvar *webkit-bridge*   (qload-c++ "lib/examples_browser"))
(defvar *files-left*)
(defvar *ini-file*)

(defun frame ()
  (! ("mainFrame" "page" *web-view*)))

(defun ini ()
  (qconnect *web-view* "loadFinished(bool)"
            (lambda (ok)
              (! "addToJavaScriptWindowObject" (frame) "Lisp" *webkit-bridge*)))
  (qconnect *network-manager* "finished(QNetworkReply*)" 'download-finished)
  (! "setUrl" *web-view* (qnew "QUrl(QString)" "examples-browser.htm"))
  (! "show" *web-view*))

;;; download

(defun download (url id name)
  (qlet ((qurl "QUrl(QString)" url)
         (request "QNetworkRequest(QUrl)" qurl)
         (qid "QVariant(QString)" id)
         (qname "QVariant(QString)" name))
    (let ((reply (! "get" *network-manager* request)))
      ;; set dynamic properties
      (! "setProperty" reply "id" qid)
      (! "setProperty" reply "cache-name" qname))))

(defun download-finished (reply)
  (! "deleteLater" reply) ; QNetworkReply*: heap result, delete manually
  (let ((error (! "error" reply)))
    (if (= |QNetworkReply.NoError| error)
        (save-data reply)
        (show-download-error error))))

(defun cache-file (name)
  (format nil "cache/~A" name))

(defun save-data (reply)
  (let ((file (cache-file (! ("toString" ("property" "cache-name") reply))))) ; get dynamic property
    (ensure-directories-exist file)
    (with-open-file (s file :direction :output :if-exists :supersede
                       :element-type '(signed-byte 8))
      (write-sequence (! "readAll" reply) s)))
  (when (zerop (decf *files-left*))
    (disable-link (! ("toString" ("property" "id") reply))) ; get dynamic property
    (load *ini-file*)))

(defun show-download-error (error)
  (let ((msg (x:when-it (find error (cdadr (qenums "QNetworkReply" "NetworkError")) :key 'cdr)
               (format nil (tr "Download error: <span style='color:red; font-weight:bold;'>~A</span>")
                       (car x:it)))))
    (! "critical" "QMessageBox" nil "EQL" (or msg (tr "Unknown download error.")))))

(defun disable-link (id)
  "Avoid multiple LOAD of same application."
  (let ((a (! "findFirstElement" (frame) (format nil "#~A" id))))
    (! "setOuterXml" a (! "toPlainText" a))))

;;; these functions are callable from JavaScript (see "lib/examples_browser.*")

(defun run (id file-names)
  (let ((ini-file (cache-file (first file-names))))
    (if (probe-file ini-file)
        (progn
          (disable-link id)
          (load ini-file))
        (progn
          (setf *files-left* (length file-names)
                *ini-file*   ini-file)
          (dolist (name file-names)
            (download (format nil "file:///~A" (in-home "examples/" name)) ; change this to a network location
                      id
                      name))))))

(defun clear-cache ()
  (let ((fs 0)
        (ds 0))
    ;; delete files
    (dolist (file (directory "cache/**/*.*"))
      (when (ignore-errors (delete-file file))
        (incf fs)))
    ;; delete empty directories
    (dolist (dir (butlast (sort (directory "cache/**/") '>
                                :key (lambda (dir) (count #\/ (namestring dir))))))
      (when (ignore-errors (delete-file dir))
        (incf ds)))
    (! "setPlainText" (! "findFirstElement" (frame) "#message")
       (format nil "deleted: ~D file~:P, ~D director~:@P" fs ds))))

(ini)
