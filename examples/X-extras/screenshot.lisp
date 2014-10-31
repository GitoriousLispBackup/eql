;;; Screenshot with countdown

(in-package :eql-user)

#-qt-wrapper-functions
(load (in-home "src/lisp/all-wrappers"))

(defvar *pixmap* (x:let-it (qnew "QPixmap(QSize)" '(100 100))
                   (|fill| x:it "transparent")
                   (qlet ((p "QPainter(QPixmap*)" x:it))
                     (dotimes (i 25)
                       (let* ((x (* 2 i))
                              (w (- 99 (* 2 x))))
                         (|drawRect(QRect)| p (list x x w w)))))))

(defvar *splash* (qnew "QSplashScreen(QPixmap,Qt::WindowFlags)" *pixmap* |Qt.WindowStaysOnTopHint|
                       "font" (x:let-it (|font.QApplication|)
                                (|setPointSize| x:it (+ 48 (|pointSize| x:it)))
                                (|setBold| x:it t))))

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
  (|setMask(QBitmap)| *splash* (|mask| *pixmap*))
  (|show| *splash*)
  (countdown 9))
