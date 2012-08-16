;;; EQL is about 10 times (depending on the OS) slower than C++

(defvar *size* (* 500 1000)) ; choose a number so that C++ runs at least several seconds

(defun test ()
  (let ((table (qnew "QTableWidget(int,int)" *size* 1))
        (start (get-internal-real-time)))
    (dotimes (i *size*)
      (qfun table "setItem" i 0 (qnew "QTableWidgetItem(QString)" (princ-to-string (1+ i)))))
    (- (get-internal-real-time) start)))

(compile 'test)

(let ((lisp (progn
              (format t "~%~%-> Running EQL... (may take a minute or two)")
              (test)))
      (c++  (progn
              (format t "~%-> Running C++...")
              (let ((proc (qnew "QProcess")))
                (parse-integer
                 (x:bytes-to-string
                  (x:do-with (qfun proc)
                    ("start" (format nil
                                     #+darwin "./test.app/Contents/MacOS/test ~A"
                                     #+linux  "./test ~A"
                                     #+win32  "test.exe ~A"
                                     *size*))
                    ("waitForReadyRead")
                    ("readAllStandardOutput"))))))))
  (qmsg (princ (format nil "~%~%Real time EQL / C++: ~A / ~A = ~A~%~%"
                       lisp
                       c++
                       (truncate (+ 0.5 (float (/ lisp c++)))))))
  (qq))
