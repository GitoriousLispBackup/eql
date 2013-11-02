;;; A simple demo for macro QRUN-IN-GUI-THREAD* / QRUN*
;;;
;;; Calculate primes in threads and update QTreeWidget directly from threads.

(defvar *tree-widget* (qnew "QTreeWidget"
                            "alternatingRowColors" t
                            "size" '(500 300)))

(defvar *start-time*)

(defun new-item (text)
  ;; in "primes" thread
  (let ((column (or (parse-integer (symbol-name (mp:process-name mp:*current-process*)) :junk-allowed t)
                    1)))
    ;; in GUI/main thread (safe because queued and blocking)
    (qrun* (let ((item (qnew "QTreeWidgetItem")))
             (x:do-with item
               ("setTextAlignment" 0 |Qt.AlignRight|)
               ("setText" 0 (format nil "~:D" (- (get-internal-real-time) *start-time*)))
               ("setText" column text))
             (x:do-with *tree-widget*
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
  (qrun* (! "clear" *tree-widget*))
  (setf *start-time* (get-internal-real-time))
  (do ((i start (1+ i))
       (found 0))
    ((= found number) (new-item "Done"))
    (when (primep i)
      (incf found)
      (new-item (princ-to-string i)))))

(defun all-threads ()
  (format t "~%Threads:~%~%~{  ~S~%~}~%" (reverse (mp:all-processes))))

(defun run (&optional (number-threads 2))
  (! "setColumnCount" *tree-widget* (1+ number-threads))
  (! "setHeaderLabels" *tree-widget*
     (cons "Time" (loop :for i :from 1 :to number-threads :collect (format nil "Thread ~D" i))))
  (dotimes (n number-threads)
    (let ((name (make-symbol (princ-to-string (1+ n)))))
      (mp:process-run-function name (lambda () (primes #.(expt 10 12) 15)))))
  (x:do-with *tree-widget* "show" "raise")
  (all-threads))

(run)
