#+unix (si::trap-fpe t nil)

(require :asdf)

(asdf:operate 'asdf:load-op :cl-opengl)

(unless (eql:qrequire :opengl)
  (error "EQL module :opengl could not be found/loaded")
  (eql:qq))

(load (eql:in-home "examples/OpenGL/main-window"))

(main-window:start)
