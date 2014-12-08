;;;
;;; SIMPLE AND SAFE SLIME MODE
;;; ==========================
;;;
;;; Loading this file before loading EQL code guarantees running EQL functions in the GUI thread.
;;;
;;; This means that we don't need a Slime REPL-hook, making it safe to evaluate any EQL code in Slime,
;;; both on the REPL and using 'eval-region'.
;;;
;;; This is very convenient during development, and the only drawbacks are more consing and a small
;;; performance overhead -- but guaranteeing thread safety for all EQL functions wrapped this way.
;;;

(in-package :eql)

(setf *slime-mode* :thread-safe)

(defmacro wrap-in-qrun* (function &rest arguments)
  (let ((orig (intern (format nil "%~A-ORIG%" (string-left-trim "%" (symbol-name function))))))
   `(progn
      (defvar ,orig (symbol-function ',function)) ; hold a reference to original
      (setf (symbol-function ',orig) ,orig)
      (defun ,function (,@arguments)              ; re-define function
        (qrun* ,(if arguments
                    `(,orig ,@(remove '&optional (mapcar (lambda (x) (if (atom x) x (first x)))
                                                         arguments)))
                    `(,orig)))))))

(wrap-in-qrun*
  %qnew-instance name arguments)

(wrap-in-qrun*
  %qinvoke-method object cast function arguments)

(wrap-in-qrun*
  qproperty object name)

(wrap-in-qrun*
  qset-property object name value)

(wrap-in-qrun*
  %qconnect caller signal receiver slot)

(wrap-in-qrun*
  %qdisconnect caller signal receiver slot)

(wrap-in-qrun*
  qoverride object name function)

(wrap-in-qrun*
  qadd-event-filter object event function)

(wrap-in-qrun*
  %qapropos search class type)

(wrap-in-qrun*
  qcall-default)

(wrap-in-qrun*
  qclear-event-filters)

(wrap-in-qrun*
  qcopy object)

(wrap-in-qrun*
  %qdelete object later)

(wrap-in-qrun*
  %qexec milliseconds)

(wrap-in-qrun*
  qexit)

(wrap-in-qrun*
  qfind-bound* &optional class-name)

(wrap-in-qrun*
  qgui &optional process-events)

(wrap-in-qrun*
  %qload-c++ library-name unload)

(wrap-in-qrun*
  qload-ui file-name)

(wrap-in-qrun*
  qmessage-box x)

(wrap-in-qrun*
  qprocess-events)

(wrap-in-qrun*
  qquit &optional (exit-status 0) (kill-all-threads t))

(wrap-in-qrun*
  qremove-event-filter handle)

(wrap-in-qrun*
  %qrequire name quiet)

(wrap-in-qrun*
  qselect &optional on-selected)

(wrap-in-qrun*
  qset-null object)

(wrap-in-qrun*
  %qsingle-shot milliseconds function)

