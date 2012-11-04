;;; Send Lisp expressions to "local-server" (no EQL and no X server needed).
;;;
;;; Example:
;;;   (! (qmsg :test))

(defmacro ! (exp)
  (ext:run-program "send/send" (list (prin1-to-string exp))))

