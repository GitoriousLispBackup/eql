;;; This is (kind of) a port of the Qt example "moveblocks"

(in-package :eql-user)

(defconstant +state-switch-event+ (+ |QEvent.User| 256))

(defparameter *qsignal-timeout* "2timeout()") ; literal

;;; state-switch-event

(let (events)
  (defun new-state-switch-event (rand)
    (let ((ev (qnew "QEvent(QEvent::Type)" +state-switch-event+)))
      (push (list ev rand) events)
      ev))
  (defun event-rand (event)
    (second (find event events :key 'first :test 'qeql))))

;;; state-switch-transition

(defstruct (state-switch-transition (:conc-name transition-))
  (q    (qnew "QAbstractTransition"))
  (rand 0))

(defmethod the-qt-object ((object state-switch-transition))
  (transition-q object))

(defun new-state-switch-transition (rand)
  (let ((trans (make-state-switch-transition :rand rand)))
    (qoverride trans "eventTest(QEvent*)"
               (lambda (event)
                 (and (= +state-switch-event+
                         (qfun event "type"))
                      (= (transition-rand trans)
                         (event-rand event)))))
    trans))

;;; state-switcher

(defstruct (state-switcher (:conc-name :switcher-))
  (q           nil)
  (state-count 0)
  (last-index  0))

(defmethod the-qt-object ((object state-switcher))
  (switcher-q object))

(defun new-state-switcher (machine name)
  (let ((switch (make-state-switcher :q (qnew "QState(QState*)" machine
                                              "objectName" name))))
    (qoverride switch "onEntry(QEvent*)"
               (lambda (event)
                 (let (n)
                   (x:while (= (setf n (1+ (random (switcher-state-count switch))))
                               (switcher-last-index switch)))
                   (setf (switcher-last-index switch) n)
                   (qfuns switch "machine" ("postEvent" (new-state-switch-event n))))))
    switch))

;;;

(defun new-graphics-rect-widget (color)
  (let ((grect (qnew "QGraphicsWidget")))
    (qoverride grect "paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"
               (lambda (painter _ _)
                 (qfun painter "fillRect(QRectF,QColor)" (qfun grect "rect") color)))
    grect))

(defun create-geometry-state (parent objects rects)
  (let ((result (qnew "QState(QState*)" parent)))
    (mapc (lambda (object rect)
            (qfun result "assignProperty" object "geometry" (qnew "QVariant(QRect)" rect)))
          objects rects)
    result))

(defun add-state (state-switcher state animation)
  (let ((trans (new-state-switch-transition (incf (switcher-state-count state-switcher)))))
    (x:do-with (qfun trans)
      ("setTargetState" state)
      ( "addAnimation" animation))
    (qfun state-switcher "addTransition(QAbstractTransition*)" trans)))

(defun add-property-animation (anim-group button property curve-type duration &optional pause)
  (let ((anim (qnew "QPropertyAnimation(QObject*,QByteArray)" button (x:string-to-bytes property)))
        (group (if pause
                   (let ((group (qnew "QSequentialAnimationGroup(QObject*)" anim-group)))
                     (qfun group "addPause" pause)
                     group)
                   anim-group)))
    (x:do-with (qfun anim)
      ("setDuration" duration)
      ("setEasingCurve" (qnew "QEasingCurve(QEasingCurve::Type)" curve-type)))
    (qfun group "addAnimation" anim)))

(defun ini ()
  (let* ((button1 (new-graphics-rect-widget "tomato"))
         (button2 (new-graphics-rect-widget "lightgreen"))
         (button3 (new-graphics-rect-widget "lightblue"))
         (button4 (new-graphics-rect-widget "lightyellow"))
         (buttons (list button1 button2 button3 button4))
         (scene      (qnew "QGraphicsScene(qreal,qreal,qreal,qreal)" 0 0 300 300))
         (window     (qnew "QGraphicsView(QGraphicsScene*)" scene))
         (machine    (qnew "QStateMachine"))
         (group      (qnew "QState"
                           "objectName" "group"))
         (anim-group (qnew "QParallelAnimationGroup"))         
         (timer      (qnew "QTimer"
                           "singleShot" t)))
    (qfun* button2 "QGraphicsItem" "setZValue" 1)
    (qfun* button3 "QGraphicsItem" "setZValue" 2)
    (qfun* button4 "QGraphicsItem" "setZValue" 3)
    (x:do-with (qfun scene)
      ("setBackgroundBrush" (qnew "QBrush(QColor)" "darkslategray"))
      ("addItem" button1)
      ("addItem" button2)
      ("addItem" button3)
      ("addItem" button4))
    (x:do-with (qfun window)
      ("setFrameStyle" 0)
      ("setAlignment" (logior |Qt.AlignLeft| |Qt.AlignTop|))
      ("setHorizontalScrollBarPolicy" |Qt.ScrollBarAlwaysOff|)
      ("setVerticalScrollBarPolicy"   |Qt.ScrollBarAlwaysOff|))
    (qconnect group "entered()" timer "start()")
    (qoverride window "resizeEvent(QResizeEvent*)"
               (lambda (event)
                 (qfun window "fitInView(QRectF)" (qfun scene "sceneRect"))
                 (qcall-default)))
    (let ((state1 (create-geometry-state group buttons
                                         '((100 0 50 50)
                                           (150 0 50 50)
                                           (200 0 50 50)
                                           (250 0 50 50))))
          (state2 (create-geometry-state group buttons
                                         '((250 100 50 50)
                                           (250 150 50 50)
                                           (250 200 50 50)
                                           (250 250 50 50))))
          (state3 (create-geometry-state group buttons
                                         '((150 250 50 50)
                                           (100 250 50 50)
                                           (50  250 50 50)
                                           (0   250 50 50))))
          (state4 (create-geometry-state group buttons
                                         '((0 150 50 50)
                                           (0 100 50 50)
                                           (0 50  50 50)
                                           (0 0   50 50))))
          (state5 (create-geometry-state group buttons
                                         '((100 100 50 50)
                                           (150 100 50 50)
                                           (100 150 50 50)
                                           (150 150 50 50))))
          (state6 (create-geometry-state group buttons
                                         '((50  50  50 50)
                                           (200 50  50 50)
                                           (50  200 50 50)
                                           (200 200 50 50))))
          (state7 (create-geometry-state group buttons
                                         '((0   0   50 50)
                                           (250 0   50 50)
                                           (0   250 50 50)
                                           (250 250 50 50))))
          (state-switcher (new-state-switcher machine "stateSwitcher")))
      (qfun group "setInitialState" state1)
      (add-property-animation anim-group button4 "geometry" |QEasingCurve.InElastic|  1500)
      (add-property-animation anim-group button3 "geometry" |QEasingCurve.OutElastic| 1500 150)
      (add-property-animation anim-group button2 "geometry" |QEasingCurve.InElastic|  1500 225)
      (add-property-animation anim-group button1 "geometry" |QEasingCurve.OutElastic| 1500 300)
      (qset timer "interval" 2500) 
      (qfun group "addTransition" timer *qsignal-timeout* (ensure-qt-object state-switcher))
      (dolist (state (list state1 state2 state3 state4 state5 state6 state7))
        (add-state state-switcher state anim-group)))
    (x:do-with (qfun machine)
      ("addState" group)
      ("setInitialState" group)
      ("start"))
    (x:do-with (qfun window)
      ("resize" 300 300)
      ("show"))))

(ini)
