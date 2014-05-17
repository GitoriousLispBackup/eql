;;; generate C++ glue code
;;; (see "invokables.lisp" in sources)

(progn
  (load (in-home "src/lisp/invokables"))
  (load "plugin-widget")
  (load "webkit-bridge")
  (generate-invokables "lib/")
  (qq))

