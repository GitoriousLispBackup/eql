(unless (eql:qrequire :network)
  (error "EQL module :network could not be found/loaded")
  (eql:qq))

(defpackage :download
  (:use :common-lisp :eql)
  (:export
   #:ini
   #:download))

(in-package :download)

(defvar *manager* (qnew "QNetworkAccessManager"))

(defun ini ()
  (qconnect *manager* "finished(QNetworkReply*)" 'download-finished))

(defun download (name)
  (qlet ((url "QUrl(QString)" name)
         (request "QNetworkRequest(QUrl)" url))
    (qfun *manager* "get" request)))

(defun download-finished (reply)
  (qfun reply "deleteLater") ; QNetworkReply*: heap result, delete manually
  (let ((error (qfun reply "error")))
    (if (= |QNetworkReply.NoError| error)
        (let ((data (qfun reply "readAll")))
          (save-data data)
          (qfun "QMessageBox" "information" nil "EQL"
                (format nil (tr "Downloaded ~:D bytes, see \"download.data\".") (length data))))
        (show-error error)))
  (qq))

(defun save-data (data)
  (with-open-file (s "download.data" :direction :output :if-exists :supersede
                     :element-type '(signed-byte 8))
    (write-sequence data s)))

(defun show-error (error)
  (let (msg) 
    (do-external-symbols (symbol)
      (let ((name (symbol-name symbol)))
        ;; take the error string from the Qt enumerator symbol name
        (when (and (x:starts-with "QNetworkReply." name)
                   (x:ends-with "Error" name)
                   (= error (symbol-value symbol)))
          (setf msg (format nil (tr "Download error: <span style='color:red; font-weight:bold;'>~A</span>")
                            (subseq name (1+ (position #\. name)) (- (length name) #.(length "Error")))))
          (return))))
    (qfun "QMessageBox" "critical" nil "EQL" (if msg msg (tr "Unknown download error.")))))

(progn
  (ini)
  (download "http://planet.lisp.org/"))
