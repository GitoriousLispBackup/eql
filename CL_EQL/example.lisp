;;;
;;; A simple example showing how to use all of: 'q' '!' '?'
;;;
;;; Usage:
;;;
;;;   eql local-server.lisp  (see example 9; optionally see "<example 9>/exe/")
;;;   ecl -load example.lisp (any CL + CFFI will do)
;;;

(load "q.lisp")

;;; CL ---------------------------------------------------------------------------------------

(defparameter *words-of-wisdom* '("When you loose, don't loose the lesson."
                                  "Silence is sometimes the best answer."
                                  "Fall seven times get up eight."
                                  "Nobody can make you feel inferior without your permission."
                                  "A smile increases your face value."
                                  "My best friend is the one who brings out the best in me."
                                  "'My way is the highway' - God"))

(defparameter *button-text*     "Click for words of wisdom.")

(let (seq)
  (defun %reset ()
    (dotimes (i (length *words-of-wisdom*))
      (push i seq)))
  (defun words-of-wisdom ()
    (unless seq
      (%reset))
    (let ((n (nth (random (length seq)) seq)))
      (setf seq (remove n seq))
      (nth n *words-of-wisdom*))))

;;; q ----------------------------------------------------------------------------------------

;;; ! pass a CL value to EQL
;;; ? EQL will ask for evaluation in CL at execution time

(q (defvar *button* (qnew "QPushButton"
                          "text"        !*button-text*                    ; note '!'
                          "minimumSize" '(200 50)))
   (qfun *button* "show")
   (qconnect *button* "clicked()" (lambda () (qmsg ?(words-of-wisdom))))) ; note '?'

(ev) ; needed for '?' only (see "Back to REPL" at the top of the desktop)
