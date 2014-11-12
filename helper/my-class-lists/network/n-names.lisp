;;; To avoid creation of instances, prepend "//" to the object name
;;;     "//QPaintDevice"
;;;
;;; To enable copying of an object (using QCOPY), prepend "=" to the object name (very few classes allow copying)
;;;     "=QPalette"

(defparameter *network-n-names*
  (list "=QAuthenticator"
        "=QHostAddress"
        "=QHostInfo"
        "=QNetworkAddressEntry"
        "=QNetworkCacheMetaData"
        "=QNetworkCookie"
        "=QNetworkInterface"
        "=QNetworkProxy"
        "QNetworkProxyFactory"
        "=QNetworkProxyQuery"
        "=QNetworkRequest"
        "=QSslCertificate"
        "=QSslCipher"
        "=QSslConfiguration"
        "=QSslError"
        "=QSslKey"
        "=QUrlInfo"
        ))
