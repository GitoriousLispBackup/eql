;;; To avoid creation of instances, prepend "//" to the object name
;;;     "//QEvent"
;;;
;;; To enable copying of an object (using QCOPY), prepend "=" to the object name (very few classes allow copying)
;;;     "=QPalette"

(setf *n-names*
      (nconc *n-names*
	     (list "QSvgGenerator"
		   )))
