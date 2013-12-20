(in-package :eql-user)

(when (probe-file "definitions.lisp")
  (load "definitions"))

(defconstant +state-switch-event+ (+ |QEvent.User| 256))
(defconstant +size+               20)

(defparameter *item-size* (list +size+ +size+))
(defparameter *view-size* (list (* +size+ (length (caar *states*)))
                                (* +size+ (length (car *states*)))))
(defparameter *color-m*   "white")

(defvar *main*  (qnew "QWidget"
                      "mouseTracking" t
                      "windowOpacity" 5/5))
(defvar *view*  (qnew "QGraphicsView"
                      "mouseTracking" t
                      "frameShape" |QFrame.NoFrame|))
(defvar *timer* (qnew "QTimer"
                      "singleShot" t))
(defvar *width* (x:when-it (third (! "arguments" "QApplication")) (parse-integer x:it)))

(defmacro push* (item list)
  `(setf ,list (nconc ,list (list ,item))))

;;; state-switch-event

(let (event-n)
  (defun new-state-switch-event (n)
    (setf event-n n)
    (qnew "QEvent(QEvent::Type)" +state-switch-event+))
  (defun event-number ()
    event-n))

;;; state-switch-transition

(defstruct (state-switch-transition (:conc-name transition-))
  (q      (qnew "QAbstractTransition"))
  (number nil))

(defmethod the-qt-object ((object state-switch-transition))
  (transition-q object))

(defun new-state-switch-transition (n)
  (let ((trans (make-state-switch-transition :number n)))
    (qoverride trans "eventTest(QEvent*)"
               (lambda (event)
                 (and (= +state-switch-event+
                         (! "type" event))
                      (= (transition-number trans)
                         (event-number)))))
    trans))

;;; state-switcher

(defstruct (state-switcher (:conc-name :switcher-))
  (q           nil)
  (state-count 0)
  (last-index  0))

(defmethod the-qt-object ((object state-switcher))
  (switcher-q object))

(let ((ini t))
  (defun new-state-switcher (machine name)
    (let ((switch (make-state-switcher :q (qnew "QState(QState*)" machine
                                                "objectName" name))))
      (qoverride switch "onEntry(QEvent*)"
                 (lambda (event)
                   (let ((n (1+ (switcher-last-index switch))))
                     (when (> n (switcher-state-count switch))
                       (setf n 1))
                     (when ini
                       (setf ini nil)
                       (incf n)
                       (qset *timer* "interval" (* 2 *duration*)))
                     (setf (switcher-last-index switch) n)
                     (! (("postEvent" (new-state-switch-event n)) "machine" switch)))))
      switch)))

;;; main

(let ((font (let ((font (! "font" "QApplication")))
              (! "setBold" font t)
              font))
      items items*)
  (defun new-graphics-item (text color id)
    (let ((item (qnew "QGraphicsWidget")))
      (qoverride item "paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"
                 (lambda (painter _ _)
                   (let ((rect (! "rect" item)))
                     (x:do-with painter
                       ("fillRect(QRectF,QColor)" rect color)
                       ("setFont" font)
                       ("drawText(QRectF,int,QString)" rect |Qt.AlignCenter| text)))))
      (push (cons id item) items*)
      item))
  (defun id-item (id)
    (cdr (assoc id items*)))
  (defun items ()
    (or items (setf items
                    (loop :for i :to (1- (length items*))
                      :collect (id-item (intern (string (code-char (+ i #.(char-code #\A)))))))))))

(defun create-geometry-state (parent objects positions)
  (let ((result (qnew "QState(QState*)" parent)))
    (mapc (lambda (object pos)
            (! "assignProperty" result object "geometry" (qnew "QVariant(QRect)"
                                                               (append (mapcar '* (mapcar '- pos '(1 1)) *item-size*)
                                                                       *item-size*))))
          objects positions)
    result))

(defun add-state (state-switcher state animation)
  (let ((trans (new-state-switch-transition (incf (switcher-state-count state-switcher)))))
    (x:do-with trans
      ("setTargetState" state)
      ("addAnimation" animation))
    (! "addTransition(QAbstractTransition*)" state-switcher trans)))

(let (animations groups)
  (defun add-property-animation (anim-group button property curve-type duration &optional pause)
    (let ((anim (qnew "QPropertyAnimation(QObject*,QByteArray)" button (x:string-to-bytes property)))
          (group (if pause
                     (let ((group (qnew "QSequentialAnimationGroup(QObject*)" anim-group)))
                       (! "addPause" group pause)
                       (push* group groups)
                       group)
                     anim-group)))
      (x:do-with anim
        ("setDuration" duration)
        ("setEasingCurve" (qnew "QEasingCurve(QEasingCurve::Type)" curve-type)))
      (push* anim animations)
      (! "addAnimation" group anim)
      anim))
  (defun change-easing-curve (name)
    (let ((type (symbol-value (intern (concatenate 'string "QEasingCurve." name)))))
      (dotimes (i (! *items* "topLevelItemCount" *items*))
        (let ((item (! *items* "topLevelItem" *items* i))
              (curve (if (string= "Custom" name)
                     *custom-easing-curve*
                     (qnew "QEasingCurve(QEasingCurve::Type)" type))))
          (when (! item "isSelected" item)
            (! "setText" item 1 name)
            (! "setEasingCurve" (nth i animations) curve))
          (update-graph-pixmap curve)))))
  (defun change-duration (msec)
    (dolist (anim animations)
      (! "setDuration" anim msec))
    (update-timer))
  (defun change-pause (msec)
    (let ((n 0))
      (dolist (group groups)
        (let ((anim (! "takeAnimation" group 1)))
          (x:do-with group
            ("clear")
            ("addPause" (* (incf n) msec))
            ("addAnimation" anim)))))
    (update-timer))
  (defun update-timer ()
    (qset *timer* "interval" (+ (qget *duration* "value")
                                (* 4 (qget *pause* "value"))
                                500))))

(defun create-geometry-states (group)
  (flet ((item-count ()
           (let ((sum 0))
             (mapcar (lambda (item) (incf sum (length (third item))))
                     *items*)
             sum))
         (item-pos (char list)
           (let ((y 0))
             (dolist (state list)
               (incf y)
               (x:when-it (position char state)
                 (return-from item-pos (list (1+ x:it) y)))))))
    (let ((letters (loop :for i :to (item-count) :collect (code-char (+ i #.(char-code #\a)))))
          states)
      (dolist (state *states*)
        (let (positions)
          (dolist (char letters)
            (push* (item-pos char state)
                   positions))
          (push* (create-geometry-state group (items) positions)
                 states)))
      states)))

(defun ini ()
  (dolist (item *items*)
    (let ((text (first item))
          (color (second item)))
      (dolist (id (third item))
        (new-graphics-item text (if (eql 'm id) (setf *color-m* color) color) id))))
  (let ((scene      (qnew "QGraphicsScene(QRectF)" (append '(0 0) *view-size*)))
        (machine    (qnew "QStateMachine"))
        (group      (qnew "QState"
                          "objectName" "group"))
        (anim-group (qnew "QParallelAnimationGroup"))
        (layout     (qnew "QHBoxLayout(QWidget*)" *main*)))
    (qset-color *main* |QPalette.Window| *background*)
    (! "setBackgroundBrush" scene (qnew "QBrush(QColor)" *background*))
    (x:do-with layout
      ("addStretch")
      ("addWidget" *view*)
      ("addStretch"))
    (! "setScene" *view* scene)
    (dolist (item (items))
      (! "addItem" scene item))
    (let ((pause 0))
      (dolist (item (items))
        (add-property-animation anim-group item "geometry" *easing-curve* *duration* (incf pause *pause*))))
    (qset *timer* "interval" (/ *duration* 2))
    (let ((states (create-geometry-states group))
          (state-switcher (new-state-switcher machine "stateSwitcher")))
      (dolist (state states)
        (add-state state-switcher state anim-group))
      (x:do-with group
        ("setInitialState" (first states))
        ("addTransition" *timer* (qsignal "timeout()") state-switcher)))
    (x:do-with machine
      ("addState" group)
      ("setInitialState" group)
      ("start"))
    (qconnect group "entered()" *timer* "start()")
    (qoverride *view* "resizeEvent(QResizeEvent*)"
               (lambda (event)
                 (! "fitInView(QRectF)" *view* (! "sceneRect" scene))
                 (qcall-default)))
    ;; change background color on mouse move events outside of view
    (qoverride *main* "mouseMoveEvent(QMouseEvent*)"
               (lambda (event)
                 (qlet ((brush "QBrush(QColor)" (if (< (! "x" event)
                                                       (/ (! "width" *main*) 2))
                                                    *background*
                                                    *color-m*)))
                   (! "setBackgroundBrush" scene brush))))
    ;; change background color on mouse move events inside of view
    (qoverride *view* "mouseMoveEvent(QMouseEvent*)"
               (lambda (event)
                 (qlet ((brush "QBrush(QColor)"
                               (! "fromHsv" "QColor"
                                  (floor (* 359 (/ (! "x" event) (! "width" *view*))))
                                  (floor (* 255 (/ (! "y" event) (! "height" *view*))))
                                  255)))
                   (! "setBackgroundBrush" scene brush))))
    ;; quit on mouse click
    (dolist (w (list *main* *view*))
      (qoverride w "mousePressEvent(QMouseEvent*)" (lambda (event) (qquit))))
    ;; save screenshot on key S
    ;; quit on key Escape
    (qadd-event-filter nil |QEvent.KeyPress|
                       (lambda (_ event)
                         (let ((key (! "key" event)))
                           (case key
                             (#.|Qt.Key_S|
                                (let ((widget (! "viewport" *view*)))
                                  (! (("save" "screenshot.png" "PNG")
                                      ("grabWidget(QWidget*,QRect)" widget (qget widget "rect"))
                                      "QPixmap"))))
                             (#.|Qt.Key_Escape|
                                (qquit))))))
    (if *width*
        (! "setFixedSize" *view* (list *width* *width*))
        (! "setFixedWidth" *view* (apply 'min (nthcdr 2 (! ("screenGeometry" "desktop" "QApplication"))))))
    (! "setPos" "QCursor" (qget *main* "pos"))
    (x:do-with *main*
      ((if *width* "show" "showFullScreen"))
      ("raise"))))

(ini)
