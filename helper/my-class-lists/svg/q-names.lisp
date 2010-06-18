;;; To avoid creation of instances, prepend "//" to the object name
;;;     "//QAbstractButton"

(setf *q-names*
      (append *q-names*
              (list "QGraphicsSvgItem"
                    "QSvgRenderer"
                    "QSvgWidget"
                    )))
