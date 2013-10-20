;;;
;;; This is a trivial example of integrating with "cl-store",
;;; needed e.g. for the special array types in MAKE-QIMAGE.
;;;
;;; "cl-store" can write to streams too; for simplicity we
;;; use a temporary file here.
;;;
;;; Prepare (in case it isn't obvious):
;;;
;;;   - ensure you have Quicklisp in all your CLs
;;;
;;;   - in "local-server.lisp" add:
;;;
;;;       (ql:quickload :cl-store)
;;;
;;;   - in "q.lisp" add:
;;;
;;;       (ql:quickload :cl-store)
;;;
;;; This example isn't elegant, it's just there to give some hint.
;;;

(cl-store:store rgb888-array "/tmp/cl-store.data")   ; 1) CL

(make-qimage (cl-store:restore "/tmp/cl-store.data") ; 2) EQL
             |QImage.Format_RGB888|)

