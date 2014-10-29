;;; Save desktop screenshot

(in-package :eql-user)

#-qt-wrapper-functions
(load (in-home "src/lisp/all-wrappers"))

(|save| (|grabWindow.QPixmap| (|winId| (|desktop.QApplication|)))
        "screenshot.png")

(qq)

