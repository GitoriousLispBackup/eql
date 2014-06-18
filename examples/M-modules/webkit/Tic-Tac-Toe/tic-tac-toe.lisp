;;; Tic-Tac-Toe
;;;
;; (depends on small plugin, see "lib/")
;; 
;;; This is a simple WebKit application example.

(require :h-utils "h-utils")

;; CSS2 selectors
(defvar *cells*    "TD")
(defvar *new-game* "#new")

(defun ini ()
  (qconnect *web-view* "loadFinished(bool)" (lambda (ok) (ini-html)))
  (x:do-with *web-view*
    ("setUrl" (qnew "QUrl(QString)" "tic-tac-toe.htm"))
    ("resize" '(350 400))
    ("show")))

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
        :onclick "Lisp.call('move', this)")
  (hset *new-game*
        :onclick "Lisp.call('new-game')"))

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

(defun e (x)
  (expt 2 x))

(let ((win-rows '(#.(+ (e 0) (e 1) (e 2)) #.(+ (e 3) (e 4) (e 5)) #.(+ (e 6) (e 7) (e 8)) ; horizontal
                  #.(+ (e 0) (e 3) (e 6)) #.(+ (e 1) (e 4) (e 7)) #.(+ (e 2) (e 5) (e 8)) ; vertical
                  #.(+ (e 0) (e 4) (e 8)) #.(+ (e 2) (e 4) (e 6)))))                      ; X
  (defun check-win ()
    (let ((values (multiple-value-list (hget *cells* :text))))
      (dolist (xo '("X" "O"))
        (let ((sum 0))
          (loop :for val :in values
                :for i :upfrom 0
                :do (when (string= xo val)
                      (incf sum (e i))))
          (dolist (row win-rows)
            (when (>= (logand sum row) row)
              (mark-row row)
              (return-from check-win))))))))

(flet ((set-background-color (i color)
         (! "setStyleProperty" (element (format nil "#c~D" (1+ i)))
            "background-color" color)))
  (let (marked)
    (defun mark-row (row)
      (dotimes (i 9)
        (when (= row (logior (e i) row))
          (set-background-color i "red")
          (push i marked))))
    (defun unmark-row ()
      (dolist (i marked)
        (set-background-color i "steelblue"))
      (setf marked nil))
    (defun won ()
      marked)))

(ini)

