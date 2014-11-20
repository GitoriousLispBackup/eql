;;; This measures the function call time in EQL and in C++.
;;;
;;; (EQL calls are about 10 times slower than direct C++ calls.)

(in-package :eql-user)

(defvar *repeat* 2000) ; choose a number so that C++ will run at least several seconds

(defun test ()
  (let ((table (qnew "QTableWidget(int,int)" 1000 1))
        (start (get-internal-real-time)))
    (dotimes (n *repeat*)
      (dotimes (i 1000)
        (|setItem| table i 0 (qnew "QTableWidgetItem(QString)" "X")))
      (|clear| table))
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
                  (x:do-with proc
                    (|start| (format nil
                                     #+darwin "./test.app/Contents/MacOS/test ~A"
                                     #+linux  "./test ~A"
                                     #+win32  "test.exe ~A"
                                     *repeat*))
                    (|waitForReadyRead|)
                    (|readAllStandardOutput|))))))))
  (qmsg (princ (format nil "~%~%Real time EQL / C++: ~A / ~A = ~A~%~%"
                       lisp
                       c++
                       (truncate (+ 0.5 (float (/ lisp c++)))))))
  (qq))
