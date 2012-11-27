;;;
;;; A simple example showing how to use all of: #q #! #?
;;;
;;; Usage:
;;;
;;;   eql local-server.lisp  (see example 9)
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

(defun words-of-wisdom ()
  (nth (random (length *words-of-wisdom*)) *words-of-wisdom*))

;;; #q ---------------------------------------------------------------------------------------

;; passing a CL value: #!

#q (defvar *button* (qnew "QPushButton"
                          "text"        #!*button-text*
                          "minimumSize" '(200 50)))

#q (qfun *button* "show")

;; event driven eval request: #?

#q (qconnect *button* "clicked()" (lambda () (qmsg #?(words-of-wisdom))))

;; needed for #? only (see "Back to REPL" at the top of the desktop)

(ev)

