(unless (eql:qrequire :network)
  (error "EQL module :network could not be found/loaded")
  (eql:qq))

(defpackage :download
  (:use :common-lisp :util :eql)
  (:export
   #:ini
   #:download))

(in-package :download)

(defparameter *manager* nil)

(defun ini ()
  (setf *manager* (qnew "QNetworkAccessManager"))
  (qconnect *manager* "finished(QNetworkReply*)" 'download-finished))

(defun download (name)
  (qlet ((url (qnew "QUrl(QString)" name)))
        (qfun *manager* "get" (qnew "QNetworkRequest(QUrl)" url))))

(defun download-finished (reply)
  (qfun reply "deleteLater") ; delete manually, because result is passed asynchronously
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
