;;; Screenshot with countdown

(in-package :eql-user)

#-qt-wrapper-functions
(load (in-home "src/lisp/all-wrappers"))

(defvar *pixmap* (x:let-it (qnew "QPixmap(QSize)" '(100 100))
                   (|fill| x:it "red")
                   (qlet ((p "QPainter(QPixmap*)" x:it))
                     (dotimes (i 17)
                       (let* ((x (* 3 i))
                              (w (- 100 (* 2 x))))
                         (|drawRect(QRect)| p (list x x w w)))))))

(defvar *splash* (qnew "QSplashScreen(QPixmap,Qt::WindowFlags)" *pixmap* |Qt.WindowStaysOnTopHint|
                       "font" (x:let-it (|font.QApplication|)
                                (|setPointSize| x:it (+ 32 (|pointSize| x:it)))
                                (|setBold| x:it t))
                       "visible" t))

(defun countdown (seconds)
  (if (zerop seconds)
      (progn
        (|hide| *splash*)
        ;; screenshot
        (|save| (|grabWindow.QPixmap| (|winId| (|desktop.QApplication|)))
                "screenshot.png")
        (qquit))
      (progn
        (|showMessage| *splash* (princ-to-string seconds) |Qt.AlignCenter| "white")
        (qsingle-shot 1000 (lambda () (countdown (1- seconds)))))))

(countdown 9)

