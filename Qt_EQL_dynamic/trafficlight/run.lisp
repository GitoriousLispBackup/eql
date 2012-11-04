(in-package :eql-user)

(defvar *qt-main* (qload-c++ (in-home "Qt_EQL_dynamic/trafficlight/trafficlight")))

(assert (qt-object-p *qt-main*))

(qapropos nil (first (qfind-children *qt-main* nil "LightWidget")))
(qapropos nil *qt-main*)

