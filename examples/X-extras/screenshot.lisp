;;; Screenshot with countdown

#-qt-wrapper-functions
(load (in-home "src/lisp/all-wrappers"))

(in-package :eql-user)

(defvar *pixmap* (qnew "QPixmap(QString)" (in-home "examples/data/camera.png")))

(defvar *splash* (qnew "QSplashScreen(QPixmap,Qt::WindowFlags)" *pixmap* |Qt.WindowStaysOnTopHint|
                       "font" (x:let-it (|font.QApplication|)
                                (|setPointSize| x:it (+ 12 (|pointSize| x:it)))
                                (|setBold| x:it t))
                       "windowOpacity" 8/10))

(defun countdown (seconds)
  (if (zerop seconds)
      (progn
        (|hide| *splash*)
        (qprocess-events)
        ;; screenshot
        (|save| (|grabWindow.QPixmap| (|winId| (|desktop.QApplication|)))
                "screenshot.png")
        (qquit))
      (progn
        (|showMessage| *splash* (princ-to-string seconds) |Qt.AlignCenter| "white")
        (qsingle-shot 1000 (lambda () (countdown (1- seconds)))))))

(progn
  (|setMask| *splash* (|mask| *pixmap*)) ; transparent pixels
  (|show| *splash*)
  (countdown 9))
