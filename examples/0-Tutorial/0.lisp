;;; Lisp versus C++ (note reversed order)

(! "currentTime" "QTime")                               ; QTime::currentTime()

(! ("toString" "currentTime" "QTime"))                  ; QTime::currentTime().toString()

(! ("toString" ("addSecs" 1000) "currentTime" "QTime")) ; QTime::currentTime().addSecs(1000).toString()

