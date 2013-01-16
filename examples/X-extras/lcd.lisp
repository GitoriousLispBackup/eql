;;; LCD pixel color test (inspired by a "comp.lang.lisp" thread)

(in-package :eql-user)

(defun lcd-test ()
  (let ((widget (qnew "QWidget" "mouseTracking" t)))
    (qoverride widget "mouseMoveEvent(QMouseEvent*)"
               (lambda (event)
                 (qset-color widget |QPalette.Window|
                             (qfun "QColor" "fromHsv"
                                   (floor (* 359 (/ (qfun event "x") (qfun widget "width"))))
                                   (floor (* 255 (/ (qfun event "y") (qfun widget "height"))))
                                   255))))
    (qoverride widget "mousePressEvent(QMouseEvent*)" (lambda (event) (qquit)))
    (qfun "QCursor" "setPos" '(0 0))
    (qfun widget "showFullScreen")))

(lcd-test)
