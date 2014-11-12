;;; To avoid creation of instances, prepend "//" to the object name
;;;     "//QPaintDevice"
;;;
;;; To enable copying of an object (using QCOPY), prepend "=" to the object name (very few classes allow copying)
;;;     "=QPalette"

(defparameter *sql-n-names*
  (list "=QSqlDatabase"
        "=QSqlError"
        "=QSqlField"
        "=QSqlIndex"
        "=QSqlQuery"
        "=QSqlRecord"
        "QSqlRelation"
        "QSqlResult"
        ))
