;;; A simple demo for macro QRUN-IN-GUI-THREAD* / QRUN*
;;;
;;; Calculate primes in thread and update QListWidget directly from thread.

(defvar *list-widget* (qnew "QListWidget"))

(defun new-item (text)
  (qrun* (qnew "QListWidgetItem(QString,QListWidget*)" text *list-widget*)
         (qfun *list-widget* "scrollToBottom")))

(defun prime-p (x)
  ;; slow and dumb
  (cond ((not (integerp x)) nil)
        ((< x 2) nil)
        ((= x 2) 2)
        ((= 0 (mod x 2)) nil)
        (t (loop :for i :from 3 :to (isqrt x) :by 2
                 :never (= 0 (mod x i))))))

(defun primes (start number)
  (do ((i (1+ start) (1+ i))
       (found 0))
    ((= found number) (new-item "OK"))
    (when (prime-p i)
      (incf found)
      (new-item (princ-to-string i)))))

(defun run ()
  (mp:process-run-function :primes (lambda () (primes (expt 10 12) 25)))
  (x:do-with (qfun *list-widget*) "show" "raise"))

(run)

