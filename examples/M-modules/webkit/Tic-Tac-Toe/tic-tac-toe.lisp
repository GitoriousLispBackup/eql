;;; "Tic-Tac-Toe" as WebKit Application
;;;
;;; (depends on small plugin, see "lib/")

(require :h-utils "h-utils")

(defpackage :tic-tac-toe
  (:nicknames :ttt)
  (:use :common-lisp :eql)
  (:export
   #:*board*
   #:*cells*
   #:*cell-count*
   #:*computer-player*
   #:*new-game*
   #:*win-rows*
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
;;; WebKit Application (neither EQL functions nor JavaScript code needed, see "h-utils.lisp")
;;; 

;;                 CSS2 selectors
(defvar *board*    "#board")
(defvar *cells*    "[class='cells']")
(defvar *new-game* "#new-game")

(defvar *computer-player* t)
(defvar *cell-count*      9)

(defun cell-id (index)
  (format nil "#c~D" (1+ index)))

(defun cell-text (index)
  (h:hget (cell-id index) :text))

(defun pretty-binary (number)
  (reverse (substitute #\. #\0 (format nil "~9,'0B" number))))

(defun ini-html ()
  (dotimes (i *cell-count*)
    (h:hset (cell-id i)
            :class "cells"
            :binary-position (pretty-binary (s i)))) ; dynamic property
  (h:hset *cells*
          :onclick (h:lisp (move :this))) ; pass QWebElement as JS 'this'
  (h:hset *new-game*
          :onclick (h:lisp (new-game))))

(let ((s ""))
  (defun x-o ()
    (setf s (if (string= "X" s) "O" "X")))
  (defun previous-x-o ()
    s)
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
    (check-win)
    (when (and (not (won))
               *computer-player*
      (computer-move)))))

(defun s (&rest numbers)
  "Sum of binary shifted numbers."
  (apply '+ (mapcar (lambda (x) (ash 1 x)) numbers)))

(defvar *win-rows* (list (s 0 1 2) (s 3 4 5) (s 6 7 8) ; horizontal
                         (s 0 3 6) (s 1 4 7) (s 2 5 8) ; vertical
                         (s 0 4 8) (s 2 4 6)))         ; X

(defun state (x-o)
  (let ((sum 0))
    (dotimes (i *cell-count*)
      (when (string= x-o (cell-text i))
        (incf sum (s i))))
    sum))

(defun check-win ()
  (dolist (x-o '("X" "O"))
    (let ((state (state x-o)))
      (dolist (row *win-rows*)
        (when (= row (logand state row)) ; bit logic
          (print-win-state row)
          (mark-row row)
          (blink-row)
          (add-to-history)
          (return-from check-win t))))))

(defun print-win-state (row)
  (format t "~%~A~%~A~%"
          (map 'string (lambda (s) (if (x:empty-string s) #\. (char s 0)))
               (multiple-value-list (h:hget *cells* :text)))
          (pretty-binary row)))

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

;;; computer player

(defun check-win-move (x-o)
  "Find missing position for 3-in-a-row."
  (let ((state (state x-o)))
    (dolist (row *win-rows*)
      (let ((i (position (- row (logand state row)) ; bit logic
                         #.(quote (list (s 0) (s 1) (s 2) (s 3) (s 4) (s 5) (s 6) (s 7) (s 8))))))
        (when (and i (x:empty-string (cell-text i)))
          (return-from check-win-move i))))))

(defun computer-move ()
  (qsleep 1/4)
  (flet ((mv (i)
           (when (and i (x:empty-string (cell-text i)))
             i))
         (rnd (nums)
           (x:when-it (remove-if-not (lambda (i) (x:empty-string (cell-text i)))
                                     nums)
             (nth (random (length x:it)) x:it))))
    (let ((prev (previous-x-o))
          (curr (x-o)))
      ;; not too clever, human can win
      (x:when-it (or (check-win-move curr)
                     (check-win-move prev)
                     (mv 4)
                     (mv (rnd '(0 2 6 8)))
                     (mv (rnd '(1 3 5 7))))
        (h:hset (cell-id x:it) :text curr)
        (check-win)))))

;;; run

(progn
  (ini "tic-tac-toe.htm" '(350 450))
  (qsingle-shot 0 (lambda () (in-package :tic-tac-toe))))
