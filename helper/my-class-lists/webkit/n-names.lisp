;;; To avoid creation of instances, prepend "//" to the object name
;;;     "//QPaintDevice"
;;;
;;; To enable copying of an object (using QCOPY), prepend "=" to the object name (very few classes allow copying)
;;;     "=QPalette"

(defparameter *webkit-n-names*
  (list "=QWebDatabase"
        "=QWebElement"
        "=QWebElementCollection"
        "//QWebHistory"
        "=QWebHistoryItem"
        "=QWebHitTestResult"
        "=QWebSecurityOrigin"
        "//QWebSettings"
        ))
