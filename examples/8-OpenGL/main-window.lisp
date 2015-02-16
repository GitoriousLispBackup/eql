;;; This is a port of the Qt OpenGL Example "Grabber"

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(require :gl-widget (eql:in-home "examples/8-OpenGL/gl-widget"))

(defpackage :main-window
  (:use :common-lisp :eql :gl-widget)
  (:export
   #:start))

(in-package :main-window)

(defvar *me*                (qnew "QMainWindow"))
(defvar *pixmap-label*      (qnew "QLabel"))
(defvar *pixmap-label-area* (qnew "QScrollArea"
                                  "sizePolicy" (qnew "QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy)"
                                                     |QSizePolicy.Ignored| |QSizePolicy.Ignored|)
                                  "minimumSize" '(50 50)))

(defun ini ()
  (ini-gl-widget)
  (let ((widget-area    (qnew "QScrollArea"
                              "widgetResizable" t
                              "horizontalScrollBarPolicy" |Qt.ScrollBarAlwaysOff|
                              "verticalScrollBarPolicy"   |Qt.ScrollBarAlwaysOff|
                              "sizePolicy" (qnew "QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy)"
                                                 |QSizePolicy.Ignored| |QSizePolicy.Ignored|)
                              "minimumSize" (list 50 50)))
        (central-widget (qnew "QWidget"))
        (central-layout (qnew "QGridLayout"))
        (x-slider (create-slider '*x-rotation-changed* 'set-x-rotation))
        (y-slider (create-slider '*y-rotation-changed* 'set-y-rotation))
        (z-slider (create-slider '*z-rotation-changed* 'set-z-rotation)))
    (|setCentralWidget| *me* central-widget)
    (|setWidget| widget-area *gl-widget*)
    (|setWidget| *pixmap-label-area* *pixmap-label*)
    (create-menus (create-actions))
    (x:do-with (|addWidget| central-layout)
      (widget-area         0 0)
      (*pixmap-label-area* 0 1)
      (x-slider            1 0 1 2)
      (y-slider            2 0 1 2)
      (z-slider            3 0 1 2))
    (|setLayout| central-widget central-layout)
    (|setValue| x-slider (* 15  16))
    (|setValue| y-slider (* 345 16))
    (|setValue| z-slider 0)
    (x:do-with *me*
      (|setWindowTitle| (tr "Grabber"))
      (|resize| (list 400 300)))))

(defun render-into-pixmap ()
  (let ((size (get-size)))
    (when (every 'plusp size)
      (set-pixmap (|renderPixmap| *gl-widget* (first size) (second size))))))

(defun grab-frame-buffer ()
  (set-pixmap (|fromImage.QPixmap| (|grabFrameBuffer| *gl-widget*))))

(defun clear-pixmap ()
  (set-pixmap (qnew "QPixmap")))

(defun about ()
  (|about.QMessageBox|
    *me*
    (tr "About Grabber")
    (tr "The <b>Grabber</b> example demonstrates two approaches for rendering OpenGL into a Qt pixmap.")))

(defun create-actions ()
  (let (actions)
    (flet ((action (name text shortcut slot)
             (let ((action (qnew "QAction(QObject*)" *me*
                                 "text" text)))
               (when shortcut
                 (|setShortcut| action (qnew "QKeySequence(QString)" shortcut)))
               (qconnect action "triggered()" slot)
               (push (cons name action) actions))))
      (action :render-into-pixmap (tr "&Render into Pixmap...") "Ctrl+R" 'render-into-pixmap)
      (action :grab-frame-buffer  (tr "&Grab Frame Buffer")     "Ctrl+G" 'grab-frame-buffer)
      (action :clear-pixmap       (tr "&Clear Pixmap")          "Ctrl+L" 'clear-pixmap)
      (action :exit               (tr "E&xit")                  "Ctrl+Q" (lambda () (|close| *me*)))
      (action :about    (tr "&About")    nil 'about)
      (action :about-qt (tr "About &Qt") nil (lambda () (|aboutQt| (qapp)))))
    actions))

(defun create-menus (actions)
  (flet ((action (name)
           (cdr (assoc name actions))))
    (let* ((menu-bar (|menuBar| *me*))
           (file-menu (|addMenu| menu-bar (tr "&File")))
           (help-menu (|addMenu| menu-bar (tr "&Help"))))
      (x:do-with file-menu
        (|addAction| (action :render-into-pixmap))
        (|addAction| (action :grab-frame-buffer))
        (|addAction| (action :clear-pixmap))
        (|addSeparator|)
        (|addAction| (action :exit)))
      (x:do-with help-menu
        (|addAction| (action :about))
        (|addAction| (action :about-qt))))))

(defun create-slider (changed setter)
  (let ((slider (qnew "QSlider(Qt::Orientation)" |Qt.Horizontal|
                      "minimum"      0
                      "maximum"      (* 360 16)
                      "singleStep"   (* 1   16)
                      "pageStep"     (* 15  16)
                      "tickInterval" (* 15  16)
                      "tickPosition" |QSlider.TicksRight|)))
    (qconnect slider "valueChanged(int)" setter)
    (setf (symbol-value changed) (lambda (x) (|setValue| slider x)))
    slider))

(defun set-pixmap (pixmap)
  (|setPixmap| *pixmap-label* pixmap)
  (let* ((size (|size| pixmap))
         (width (first size)))
    (when (equal (list (1- width) (second size))
                 (|maximumViewportSize| *pixmap-label-area*))
      (setf (first size) (1- width)))
    (|resize| *pixmap-label* size)))

(defun get-size ()
  (let ((text (|getText.QInputDialog|
                 *me*
                 (tr "Grabber")
                 (tr "Enter pixmap size:")
                 |QLineEdit.Normal|
                 (format nil "~{~D~^ x ~}" (|size| *gl-widget*))
                 nil))) ; ok
    (if (qok)
        (progn
          (qlet ((reg-exp "QRegExp(QString)" "([0-9]+) *x *([0-9]+)"))
            (flet ((cap (n)
                     (parse-integer (|cap| reg-exp n))))
              (when (|exactMatch| reg-exp text)
                (let ((width  (cap 1))
                      (height (cap 2)))
                  (when (and (< 0 width  2048)
                             (< 0 height 2048))
                    (return-from get-size (list width height)))))))
          (|size| *gl-widget*))
        '(0 0))))

(defun start ()
  (ini)
  (x:do-with *me* |show| |raise|))
