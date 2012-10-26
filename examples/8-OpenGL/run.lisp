#+unix (si::trap-fpe t nil)

(load "~/.eclrc") ; for Quicklisp

(asdf:load-system :cl-opengl)

(unless (eql:qrequire :opengl)
  (error "EQL module :opengl could not be found/loaded")
  (eql:qq))

(load (eql:in-home "examples/8-OpenGL/main-window"))

(main-window:start)
