;;; Tic-Tac-Toe
;;;
;;; (depends on small plugin, see "lib/")

(defun ini (html-file size)
  (qconnect *web-view* "loadFinished(bool)" (lambda (ok) (ini-html)))
  (x:do-with *web-view*
    ("setUrl" (qnew "QUrl(QString)" html-file))
    ("setWindowTitle" "WebKit Application")
    ("resize" size)
    ("show")))

;;;
;;; WebKit Application (no EQL functions needed, see "h-utils.lisp")
;;; 

(require :h-utils "h-utils")

;; CSS2 selectors
(defvar *cells*    "TD")
(defvar *new-game* "#new")

(defun ini-html ()
  (hset *cells*
        :style "width: 2cm;
                height: 2cm;
                text-align: center;
                font-family: Courier New, Courier, monospaced;
                font-size: 1.7cm;
                font-weight: bold;
                color: white;
                background-color: steelblue;")
  (hset *cells*
        :onclick "Lisp.web('move', this)") 
  (hset *new-game*
        :onclick "Lisp.fun('new-game')")) 

(let ((s ""))
  (defun x-o ()
    (setf s (if (string= "X" s) "O" "X")))
  (defun reset-x-o ()
    (setf s "")))

(defun new-game ()
  (reset-x-o)
  (unmark-row)
  (hset *cells* :text ""))

(defun move (web-element)
  (when (and (not (won))
             (x:empty-string (hget web-element :text)))
    (hset web-element :text (x-o))
    (check-win)))

(defun s (&rest numbers)
  "Sum of binary shifted numbers."
  (apply '+ (mapcar (lambda (x) (ash 1 x)) numbers)))

(defvar *win-rows* (list (s 0 1 2) (s 3 4 5) (s 6 7 8) ; horizontal
                         (s 0 3 6) (s 1 4 7) (s 2 5 8) ; vertical
                         (s 0 4 8) (s 2 4 6)))         ; X

(defun check-win ()
  (let ((values (multiple-value-list (hget *cells* :text))))
    (dolist (xo '("X" "O"))
      (let ((sum 0))
        (loop :for val :in values
              :for i :upfrom 0
              :do (when (string= xo val)
                    (incf sum (s i))))
        (dolist (row *win-rows*)
          (when (= row (logand sum row)) ; bit logic
            (mark-row row)
            (return-from check-win)))))))

(defun set-background-color (i color)
  (set-style-property (element (format nil "#c~D" (1+ i)))
                      :background-color color))

(defun add-to-history ()
  (flet ((img (x)
           (format nil "#i~D" x)))
    (dotimes (i 4)
      ;; shift right
      (assign-pixmap (to-pixmap (img (- 4 i)))
                     (img (- 5 i))))
    (assign-pixmap (to-pixmap "TABLE" 1/6)
                   (img 1))))

(let (marked)
  (defun mark-row (row)
    (dotimes (i 9)
      (when (= row (logior (s i) row)) ; bit logic
        (set-background-color i "orange")
        (push i marked)))
    ;; blink
    (dotimes (n 2)
      (qsleep 0.15) ; a SLEEP processing Qt events
      (unmark-row nil)
      (qsleep 0.15)
      (unmark-row nil "orange"))
    (add-to-history))
  (defun unmark-row (&optional (reset t) (color "steelblue"))
    (dolist (i marked)
      (set-background-color i color))
    (when reset
      (setf marked nil)))
  (defun won ()
    marked))

(ini "tic-tac-toe.htm" '(350 450))
