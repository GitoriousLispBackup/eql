(in-package :eql-user)

(defvar *trafficlight* (qload-c++ (in-home "Qt_EQL_dynamic/trafficlight/trafficlight")))
(defvar *lights*       (qfind-children *trafficlight* nil "LightWidget"))
(defvar *red*          (first *lights*))
(defvar *yellow*       (second *lights*))
(defvar *green*        (third *lights*))

(assert (qt-object-p *trafficlight*))

(qapropos nil (first *lights*))
(qapropos nil *trafficlight*)

;;; generate wrappers

(define-qt-wrappers '*trafficlight*)
(define-qt-wrappers '*red*)

;;; now you can do:
;;;
;;; (start *trafficlight*)
;;; (stop *trafficlight*)
;;;
;;; (turn-on *red*)
;;; (turn-off *green*)
