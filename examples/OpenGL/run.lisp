#+unix (si::trap-fpe t nil)

(require :asdf)

(asdf:operate 'asdf:load-op :cl-opengl)

(load "main-window")

(main-window:start)
