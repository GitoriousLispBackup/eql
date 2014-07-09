;;; "Tic-Tac-Toe" as WebKit Application
;;;
;;; (depends on small plugin, see "lib/")

(require :h-utils "h-utils")

(defpackage :tic-tac-toe
  (:nicknames :ttt)
  (:use :common-lisp :eql)
  (:export
   #:move
   #:new-game))

(in-package :tic-tac-toe)

(defun ini (html-file size)
  (qconnect h:*web-view* "loadFinished(bool)" (lambda (ok) (ini-html)))
  (x:do-with h:*web-view*
    ("setUrl" (qnew "QUrl(QString)" html-file))
    ("setWindowTitle" "WebKit Application")
    ("resize" size)
    ("show")))

;;;
;;; WebKit Application (no EQL functions needed, see "h-utils.lisp")
;;; 

;;                 CSS2 selectors
(defvar *board*    "#board")
(defvar *cells*    "[class='cells']")
(defvar *new-game* "#new")

(defvar *cell-count* 9)

(defun cell-id (index)
  (format nil "#c~D" (1+ index)))

(defun ini-html ()
  (dotimes (i *cell-count*)
    (h:hset (cell-id i)
            :class "cells"))
  (h:hset *cells*
          :onclick "Lisp.web('tic-tac-toe:move', this)") 
  (h:hset *new-game*
          :onclick "Lisp.fun('tic-tac-toe:new-game')")) 

(let ((s ""))
  (defun x-o ()
    (setf s (if (string= "X" s) "O" "X")))
  (defun reset-x-o ()
    (setf s "")))

(defun new-game ()
  (reset-x-o)
  (unmark-row)
  (h:hset *cells* :text ""))

(defun move (web-element)
  (when (and (not (won))
             (x:empty-string (h:hget web-element :text)))
    (h:hset web-element :text (x-o))
    (check-win)))

(defun s (&rest numbers)
  "Sum of binary shifted numbers."
  (apply '+ (mapcar (lambda (x) (ash 1 x)) numbers)))

(defvar *win-rows* (list (s 0 1 2) (s 3 4 5) (s 6 7 8) ; horizontal
                         (s 0 3 6) (s 1 4 7) (s 2 5 8) ; vertical
                         (s 0 4 8) (s 2 4 6)))         ; X

(defun check-win ()
  (let ((values (multiple-value-list (h:hget *cells* :text))))
    (dolist (xo '("X" "O"))
      (let ((sum 0))
        (loop :for val :in values
              :for i :upfrom 0
              :do (when (string= xo val)
                    (incf sum (s i))))
        (dolist (row *win-rows*)
          (when (= row (logand sum row)) ; bit logic
            (mark-row row)
            (blink-row)
            (add-to-history)
            (return-from check-win)))))))

(defun set-background-color (i color)
  (h:set-style-property (cell-id i) :background-color color))

(defun blink-row ()
  (dotimes (n 2)
    (qsleep 0.15) ; a SLEEP processing Qt events
    (unmark-row nil)
    (qsleep 0.15)
    (unmark-row nil "orange")))

(defun add-to-history ()
  (flet ((img-id (i)
           (format nil "#i~D" (1+ i))))
    (dotimes (i 4)
      ;; shift right
      (h:assign-pixmap (h:to-pixmap (img-id (- 3 i)))
                       (img-id (- 4 i))))
    (h:assign-pixmap (h:to-pixmap *board* 1/6)
                     (img-id 0))))

(let (marked)
  (defun mark-row (row)
    (dotimes (i *cell-count*)
      (when (= row (logior (s i) row)) ; bit logic
        (set-background-color i "orange")
        (push i marked))))
  (defun unmark-row (&optional (reset t) (color "steelblue"))
    (dolist (i marked)
      (set-background-color i color))
    (when reset
      (setf marked nil)))
  (defun won ()
    marked))

(ini "tic-tac-toe.htm" '(350 450))
