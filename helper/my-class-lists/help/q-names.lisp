;;; To avoid creation of instances, prepend "//" to the object name
;;;     "//QAbstractButton"

(setf *q-names*
      (nconc *q-names*
	     (list "QHelpContentModel"
		   "QHelpContentWidget"
		   "QHelpEngineCore"
		   "//QHelpIndexModel"
		   "QHelpIndexWidget"
		   "QHelpSearchEngine"
		   "QHelpSearchQueryWidget"
		   "QHelpSearchResultWidget"
		   )))
