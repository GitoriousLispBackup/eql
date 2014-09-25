;; Lisp versus C++ (note reversed order)

(! "currentTime" "QTime")                               ; QTime::currentTime()

(! ("toString" "currentTime" "QTime"))                  ; QTime::currentTime().toString()

(! ("toString" ("addSecs" 1000) "currentTime" "QTime")) ; QTime::currentTime().addSecs(1000).toString()

;; ----------------------------------------------------------------------------------------------------

;; using Qt wrappers (see "src/lisp/all-wrappers.lisp")

(|currentTime.QTime|)

(|toString| (|currentTime.QTime|))

(|toString| (|addSecs| (|currentTime.QTime|) 1000))

