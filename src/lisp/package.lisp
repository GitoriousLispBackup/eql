;;; copyright (c) 2010 power4projects software

(require :util)

(defpackage :eql
  (:use :common-lisp :util)
  (:export
   #:in-home
   #:qadd-event-filter
   #:qapropos
   #:qapropos*
   #:qapp
   #:qclear-event-filters
   #:qconnect
   #:qcopy
   #:qenum
   #:qeql
   #:qevents
   #:qdelete
   #:qdisconnect
   #:qfind-child
   #:qgui
   #:qid
   #:qinvoke-method
   #:qinvoke-method*
   #:qlet
   #:qload-ui
   #:qmessage-box
   #:qnew-instance
   #:qnobject-super-class
   #:qnull-object
   #:qobject-names
   #:qok
   #:qoverride
   #:qprocess-events
   #:qproperty
   #:qquit
   #:qsender
   #:qset-ini
   #:qset-null
   #:qset-property
   #:qsingle-shot
   #:qstatic-meta-object
   #:qnew
   #:qdel
   #:qget
   #:qset
   #:qfun
   #:qfun*
   #:qmsg
   #:qq
   #:qt-object
   #:qt-object-id
   #:qt-object-name
   #:qt-object-p
   #:qt-object-pointer
   #:qt-object-unique
   #:tr))

#-win32
(progn
  (provide :serve-event)
  (pushnew :serve-event *features*))

(progn
  (provide :eql)
  (pushnew :eql *features*))
