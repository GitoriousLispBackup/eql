;;;
;;; *** EXPERIMENTAL ***
;;;
;;;
;;; SIMPLE AND SAFE SLIME MODE
;;; ==========================
;;;
;;; Loading this file before loading EQL code guarantees running EQL functions in the GUI thread.
;;;
;;; This means that we don't need a Slime REPL-hook, making it safe to evaluate any EQL code in Slime, both
;;; on the REPL and using 'eval-region'.
;;;
;;; This is very convenient during development, and the only drawbacks are more consing and a small
;;; performance overhead -- but guaranteeing thread safety for all EQL functions wrapped this way.
;;;
;;; Currently only these functions are wrapped:
;;;
;;; QNEW, QFUN, QGET, QSET, QCONNECT, QDISCONNECT, QOVERRIDE
;;; (QFUN includes both the macro '!' and all wrapper functions)
;;;
;;; (this is sufficient to run "eql/real-time-comparison/profiling.lisp" for testing)

(in-package :eql)

;; keep reference to original EQL functions

(defvar %qnew-instance-orig  (symbol-function '%qnew-instance))
(defvar %qinvoke-method-orig (symbol-function '%qinvoke-method))
(defvar qproperty-orig       (symbol-function 'qproperty))
(defvar qset-property-orig   (symbol-function 'qset-property))
(defvar %qconnect-orig       (symbol-function '%qconnect))
(defvar %qdisconnect-orig    (symbol-function '%qdisconnect))
(defvar qoverride-orig       (symbol-function 'qoverride))

;; redefine EQL functions, wrapping them in QRUN*

(defun %qnew-instance (name arguments)
  (qrun* (funcall %qnew-instance-orig name arguments)))

(defun %qinvoke-method (object cast function arguments)
  (qrun* (funcall %qinvoke-method-orig object cast function arguments)))

(defun qproperty (object name)
  (qrun* (funcall qproperty-orig object name)))

(defun qset-property (object name value)
  (qrun* (funcall qset-property-orig object name value)))

(defun %qconnect (caller signal receiver slot)
  (qrun* (funcall %qconnect-orig caller signal receiver slot)))

(defun %qdisconnect (caller signal receiver slot)
  (qrun* (funcall %qdisconnect-orig caller signal receiver slot)))

(defun qoverride (object name function)
  (qrun* (funcall qoverride-orig object name function)))

