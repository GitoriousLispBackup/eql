;;; copyright (c) 2010 power4projects software
;;;
;;; This is a port of the Qt OpenGL Example "Grabber"

(require :gl-widget "gl-widget")

(defpackage :main-window
  (:use :common-lisp :util :eql :gl-widget)
  (:export
   #:start))

(in-package :main-window)

(defconstant +ignored+ (logior 1 4 8) "policy")

(defparameter *me*                nil)
(defparameter *pixmap-label*      nil)
(defparameter *pixmap-label-area* nil)

(defun create-main-window ()
  (create-gl-widget)
  (setf *me*                (qnew "QMainWindow")
        *pixmap-label*      (qnew "QLabel")
        *pixmap-label-area* (qnew "QScrollArea"
                                  "sizePolicy" +ignored+
                                  "minimumSize" (list 50 50)))
  (let ((widget-area    (qnew "QScrollArea"
                              "widgetResizable" t
                              "horizontalScrollBarPolicy" "ScrollBarAlwaysOff"
                              "verticalScrollBarPolicy"   "ScrollBarAlwaysOff"
                              "sizePolicy" +ignored+
                              "minimumSize" (list 50 50)))
        (central-widget (qnew "QWidget"))
        (central-layout (qnew "QGridLayout"))
        (x-slider (create-slider '*x-rotation-changed* 'set-x-rotation))
        (y-slider (create-slider '*y-rotation-changed* 'set-y-rotation))
        (z-slider (create-slider '*z-rotation-changed* 'set-z-rotation)))
    (qfun *me* "setCentralWidget" central-widget)
    (qfun widget-area         "setWidget" *gl-widget*)
    (qfun *pixmap-label-area* "setWidget" *pixmap-label*)
    (create-menus (create-actions))
    (do- (qfun central-layout "addWidget")
      (widget-area         0 0)
      (*pixmap-label-area* 0 1)
      (x-slider            1 0 1 2)
      (y-slider            2 0 1 2)
      (z-slider            3 0 1 2))
    (qfun central-widget "setLayout" central-layout)
    (qset x-slider "value" (* 15  16))
    (qset y-slider "value" (* 345 16))
    (qset z-slider "value" 0)
    (do- (qset *me*)
      ("windowTitle" (tr "Grabber"))
      ("size" (list 400 300)))))

(defun render-into-pixmap ()
  (let ((size (get-size)))
    (when (every #'(lambda (x) (> x 0))
                 size)
      (set-pixmap (apply #'qfun *gl-widget* "renderPixmap" size)))))

(defun grab-frame-buffer ()
  (set-pixmap (qfun "QPixmap" "fromImage" (qfun *gl-widget* "grabFrameBuffer"))))

(defun clear-pixmap ()
  (set-pixmap (qnew "QPixmap")))

(defun about ()
  (qfun "QMessageBox" "about" *me*
        (tr "About Grabber")
        (tr "The <b>Grabber</b> example demonstrates two approaches for rendering OpenGL into a Qt pixmap.")))

(defun create-actions ()
  (let (actions)
    (flet ((action (name text shortcut slot)
             (let ((action (qnew "QAction(QObject*)" *me*
                                 "text" text)))
               (when shortcut
                 (qset action "shortcut" shortcut))
               (qconnect action "triggered()" slot)
               (push (cons name action) actions))))
      (action :render-into-pixmap (tr "&Render into Pixmap...") "Ctrl+R" 'render-into-pixmap)
      (action :grab-frame-buffer  (tr "&Grab Frame Buffer")     "Ctrl+G" 'grab-frame-buffer)
      (action :clear-pixmap       (tr "&Clear Pixmap")          "Ctrl+L" 'clear-pixmap)
      (action :exit               (tr "E&xit")                  "Ctrl+Q" #'(lambda () (qfun *me* "close")))
      (action :about    (tr "&About")    nil 'about)
      (action :about-qt (tr "About &Qt") nil #'(lambda () (qfun (qapp) "aboutQt"))))
    actions))

(defun create-menus (actions)
  (flet ((action (name)
           (cdr (assoc name actions))))
    (let* ((menu-bar (qfun *me* "menuBar"))
           (file-menu (qfun menu-bar "addMenu(QString)" (tr "&File")))
           (help-menu (qfun menu-bar "addMenu(QString)" (tr "&Help"))))
      (do- (qfun file-menu)
        ("addAction(QAction*)" (action :render-into-pixmap))
        ("addAction(QAction*)" (action :grab-frame-buffer))
        ("addAction(QAction*)" (action :clear-pixmap))
        "addSeparator"
        ("addAction(QAction*)" (action :exit)))
      (do- (qfun help-menu)
        ("addAction(QAction*)" (action :about))
        ("addAction(QAction*)" (action :about-qt))))))

(defun create-slider (changed setter)
  (let ((slider (qnew "QSlider(Qt::Orientation)" "Horizontal"
                      "minimum"      0
                      "maximum"      (* 360 16)
                      "singleStep"   (* 1   16)
                      "pageStep"     (* 15  16)
                      "tickInterval" (* 15  16)
                      "tickPosition" "TicksRight")))
    (qconnect slider "valueChanged(int)" setter)
    (setf (symbol-value changed) #'(lambda (x) (qset slider "value" x)))
    slider))

(defun set-pixmap (pixmap)
  (qset *pixmap-label* "pixmap" pixmap)
  (let* ((size (qfun pixmap "size"))
         (width (first size)))
    (when (equal (list (1- width) (second size))
                 (qfun *pixmap-label-area* "maximumViewportSize"))
      (setf (first size) (1- width)))
    (qset *pixmap-label* "size" size)))

(defun get-size ()
  (let ((text (qfun "QInputDialog" "getText" *me*
                    (tr "Grabber")
                    (tr "Enter pixmap size:")
                    (qenum "QLineEdit::EchoMode" "Normal")
                    (format nil "~{~d~^ x ~}" (qget *gl-widget* "size"))
                    nil))) ; ok
    (if (qok)
        (progn
          (qlet ((reg-exp (qnew "QRegExp(QString)" "([0-9]+) *x *([0-9]+)")))
                (when (qfun reg-exp "exactMatch" text)
                  (let ((width  (parse-integer (qfun reg-exp "cap" 1)))
                        (height (parse-integer (qfun reg-exp "cap" 2))))
                    (when (and (< 0 width  2048)
                               (< 0 height 2048))
                      (return-from get-size (list width height))))))
          (qget *gl-widget* "size"))
        (list 0 0))))

(defun start ()
  (create-main-window)
  (qfun *me* "show"))
