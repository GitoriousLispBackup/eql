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
  (let ((data (qfun reply "readAll")))
    (save-data data)
    (format t "~%Downloaded ~D bytes, see \"download.data\".~%~%" (length data))
    (qq)))

(defun save-data (data)
  (with-open-file (s "download.data" :direction :output :if-exists :supersede
                     :element-type '(signed-byte 8))
    (write-sequence data s)))

(progn
  (ini)
  (download "http://planet.lisp.org/"))
