;;; This is a (slightely extended) port of the Qt example "moveblocks"

(in-package :eql-user)

;;; user interface

(defvar *main* (qload-ui (in-home "examples/data/move-blocks.ui")))

(defvar-ui *main*
  *duration*
  *easing-curve*
  *items*
  *pause*
  *view*)

(defun easing-curve-names ()
  (let (names)
    (do-external-symbols (var (find-package :eql))
      (let ((name (symbol-name var)))
        (when (x:starts-with "QEasingCurve." name)
          (push name names))))
    (mapcar (lambda (name) (subseq name #.(length "QEasingCurve.")))
            (sort names 'string<))))

(defun ini-ui ()
  ;; easing curve
  (x:do-with (qfun *easing-curve*)
    ("setToolTip" "Change easing curve of selected items")
    ("addItems" (easing-curve-names)))
  (qconnect *easing-curve* "activated(QString)" 'change-easing-curve)
  ;; items
  (x:do-with (qset *items*)
    ("columnCount" 2)
    ("rootIsDecorated" nil)
    ("selectionMode" |QAbstractItemView.ExtendedSelection|))
  (qfuns *items* "header" "hide")
  ;; duration
  (x:do-with (qset *duration*)
    ("minimum" 1)
    ("maximum" 4000)
    ("value"   1500))
  (qconnect *duration* "valueChanged(int)" 'change-duration) 
  ;; pause
  (x:do-with (qset *pause*)
    ("minimum" 1)
    ("maximum" 1000)
    ("value"   150))
  (qconnect *pause* "valueChanged(int)" 'change-pause)
  ;; sizes
  (qset *view* "minimumSize" '(250 250))
  (qfun *main* "resize" '(0 0)))

;;; globals

(defconstant +state-switch-event+ (+ |QEvent.User| 256))

(defvar *timer* (qnew "QTimer"
                      "singleShot" t))

;;; state-switch-event

(let (event-rand)
  (defun new-state-switch-event (rand)
    (setf event-rand rand)
    (qnew "QEvent(QEvent::Type)" +state-switch-event+))
  (defun event-rand ()
    event-rand))

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
                         (event-rand)))))
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

;;; main

(let ((n 0))
  (defun new-graphics-rect-widget (color)
    (let ((grect (qnew "QGraphicsWidget")))
      (qoverride grect "paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"
                 (lambda (painter _ _)
                   (qfun painter "fillRect(QRectF,QColor)" (qfun grect "rect") color)))
      ;; add item to *items* (QTreeWidget)
      (let ((item (qnew "QTreeWidgetItem(QStringList)" (list (format nil "item ~D" (incf n))))))
        (qfun item "setIcon" 0 (qnew "QIcon(QPixmap)"
                                     (let ((pixmap (qnew "QPixmap(int,int)" 10 10)))
                                       (qfun pixmap "fill" color)
                                       pixmap)))
        (qfun item "setText" 1 (if (evenp n) "InElastic" "OutElastic")) ; initial values 
        (qfun *items* "addTopLevelItem" item))
      grect)))

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
      ("addAnimation" animation))
    (qfun state-switcher "addTransition(QAbstractTransition*)" trans)))

(let (animations groups)
  (defun add-property-animation (anim-group button property curve-type duration &optional pause)
    (let ((anim (qnew "QPropertyAnimation(QObject*,QByteArray)" button (x:string-to-bytes property)))
          (group (if pause
                     (let ((group (qnew "QSequentialAnimationGroup(QObject*)" anim-group)))
                       (qfun group "addPause" pause)
                       (push group groups)
                       group)
                     anim-group)))
      (x:do-with (qfun anim)
        ("setDuration" duration)
        ("setEasingCurve" (qnew "QEasingCurve(QEasingCurve::Type)" curve-type)))
      (push anim animations)
      (qfun group "addAnimation" anim)))
  (defun change-easing-curve (name)
    (let ((type (symbol-value (intern (concatenate 'string "QEasingCurve." name)))))
      (dotimes (i (qfun *items* "topLevelItemCount"))
        (let ((item (qfun *items* "topLevelItem" i)))
          (when (qfun item "isSelected")
            (qfun item "setText" 1 name)
            (qfun (nth i animations) "setEasingCurve" (qnew "QEasingCurve(QEasingCurve::Type)" type)))))))
  (defun change-duration (msec)
    (dolist (anim animations)
      (qfun anim "setDuration" msec))
    (update-timer))
  (defun change-pause (msec)
    (let ((n 0))
      (dolist (group groups)
        (let ((anim (qfun group "takeAnimation" 1)))
          (x:do-with (qfun group)
            ("clear")
            ("addPause" (* (incf n) msec))
            ("addAnimation" anim)))))
    (update-timer))
  (defun update-timer ()
    (qset *timer* "interval" (+ (qget *duration* "value")
                                (* 4 (qget *pause* "value"))
                                500))))

(defun ini ()
  (let* ((item1 (new-graphics-rect-widget "tomato"))
         (item2 (new-graphics-rect-widget "lightgreen"))
         (item3 (new-graphics-rect-widget "lightblue"))
         (item4 (new-graphics-rect-widget "lightyellow"))
         (items (list item1 item2 item3 item4))
         (scene      (qnew "QGraphicsScene(qreal...)" 0 0 300 300))
         (machine    (qnew "QStateMachine"))
         (group      (qnew "QState"
                           "objectName" "group"))
         (anim-group (qnew "QParallelAnimationGroup")))         
    (qfun *view* "setScene" scene)
    (qfun* item2 "QGraphicsItem" "setZValue" 1)
    (qfun* item3 "QGraphicsItem" "setZValue" 2)
    (qfun* item4 "QGraphicsItem" "setZValue" 3)
    (x:do-with (qfun scene)
      ("setBackgroundBrush" (qnew "QBrush(QColor)" "darkslategray"))
      ("addItem" item1)
      ("addItem" item2)
      ("addItem" item3)
      ("addItem" item4))
    (x:do-with (qfun *view*)
      ("setAlignment" (logior |Qt.AlignLeft| |Qt.AlignTop|))
      ("setHorizontalScrollBarPolicy" |Qt.ScrollBarAlwaysOff|)
      ("setVerticalScrollBarPolicy"   |Qt.ScrollBarAlwaysOff|))
    (qconnect group "entered()" *timer* "start()")
    (qoverride *view* "resizeEvent(QResizeEvent*)"
               (lambda (event)
                 (qfun *view* "fitInView(QRectF)" (qfun scene "sceneRect"))
                 (qcall-default)))
    (let ((state1 (create-geometry-state group items
                                         '((100 0 50 50)
                                           (150 0 50 50)
                                           (200 0 50 50)
                                           (250 0 50 50))))
          (state2 (create-geometry-state group items
                                         '((250 100 50 50)
                                           (250 150 50 50)
                                           (250 200 50 50)
                                           (250 250 50 50))))
          (state3 (create-geometry-state group items
                                         '((150 250 50 50)
                                           (100 250 50 50)
                                           (50  250 50 50)
                                           (0   250 50 50))))
          (state4 (create-geometry-state group items
                                         '((0 150 50 50)
                                           (0 100 50 50)
                                           (0 50  50 50)
                                           (0 0   50 50))))
          (state5 (create-geometry-state group items
                                         '((100 100 50 50)
                                           (150 100 50 50)
                                           (100 150 50 50)
                                           (150 150 50 50))))
          (state6 (create-geometry-state group items
                                         '((50  50  50 50)
                                           (200 50  50 50)
                                           (50  200 50 50)
                                           (200 200 50 50))))
          (state7 (create-geometry-state group items
                                         '((0   0   50 50)
                                           (250 0   50 50)
                                           (0   250 50 50)
                                           (250 250 50 50))))
          (state-switcher (new-state-switcher machine "stateSwitcher")))
      (qfun group "setInitialState" state1)
      (add-property-animation anim-group item4 "geometry" |QEasingCurve.InElastic|  1500)
      (add-property-animation anim-group item3 "geometry" |QEasingCurve.OutElastic| 1500 150)
      (add-property-animation anim-group item2 "geometry" |QEasingCurve.InElastic|  1500 225)
      (add-property-animation anim-group item1 "geometry" |QEasingCurve.OutElastic| 1500 300)
      (qset *timer* "interval" 2500) 
      (qfun group "addTransition" *timer* (qsignal "timeout()") state-switcher)
      (dolist (state (list state1 state2 state3 state4 state5 state6 state7))
        (add-state state-switcher state anim-group)))
    (x:do-with (qfun machine)
      ("addState" group)
      ("setInitialState" group)
      ("start"))
    (qfun *main* "show")))

(progn
  (ini-ui)
  (ini))
