;;; To avoid creation of instances, prepend "//" to the object name
;;;     "//QAbstractButton"

(setf *q-names*
      (nconc *q-names*
	     (list "QGLShader"
		   "QGLShaderProgram"
		   "QGLWidget"
		   )))
