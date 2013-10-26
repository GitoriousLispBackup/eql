;;; A simple demo for macro QRUN-IN-GUI-THREAD* / QRUN*
;;;
;;; Calculate primes in threads and update QTreeWidget directly from threads.

(defvar *tree-widget* (qnew "QTreeWidget"
                            "alternatingRowColors" t
                            "size" '(500 300)))

(defvar *start-time*)

(defun new-item (text)
  (let ((column (or (ignore-errors
                      (parse-integer (mp:process-name mp:*current-process*)))
                    1)))
    (qrun* (let ((item (qnew "QTreeWidgetItem")))
             (x:do-with (qfun item)
               ("setTextAlignment" 0 |Qt.AlignRight|)
               ("setText" 0 (format nil "~:D" (- (get-internal-real-time) *start-time*)))
               ("setText" column text))
             (x:do-with (qfun *tree-widget*)
               ("addTopLevelItem" item)
               ("resizeColumnToContents" 0)
               ("resizeColumnToContents" column)
               ("scrollToBottom"))))))

(defun primep (x)
  ;; slow/dumb
  (or (= 2 x)
      (and (integerp x)
           (> x 2)
           (not (zerop (mod x 2)))
           (loop :for i :from 3 :to (isqrt x) :by 2 :never (zerop (mod x i))))))

(defun primes (start number)
  (qrun* (qfun *tree-widget* "clear"))
  (setf *start-time* (get-internal-real-time))
  (do ((i (1+ start) (1+ i))
       (found 0))
    ((= found number) (new-item "Done"))
    (when (primep i)
      (incf found)
      (new-item (princ-to-string i)))))

(defun run (&optional (number-threads 2))
  (qset *tree-widget* "columnCount" (1+ number-threads))
  (qfun *tree-widget* "setHeaderLabels"
        (cons "Time" (loop :for i :from 1 :to number-threads :collect (format nil "Thread ~D" i))))
  (dotimes (n number-threads)
    (let ((name (princ-to-string (1+ n))))
      (mp:process-run-function name (lambda () (primes #.(expt 10 12) 15)))))
  (x:do-with (qfun *tree-widget*) "show" "raise"))

(run)
