;;; copyright (c) 2010-2011 Polos Ruetz

(defpackage :eql
  (:use :common-lisp)
  (:export
   #:defvar-ui
   #:in-home
   #:new-qt-object
   #:qadd-event-filter
   #:qapropos
   #:qapropos*
   #:qapp
   #:qclear-event-filters
   #:qconnect
   #:qcopy
   #:qenum
   #:qeql
   #:qescape
   #:qevents
   #:qexec
   #:qdelete
   #:qdisconnect
   #:qfind-child
   #:qfrom-utf8
   #:qgui
   #:qid
   #:qinvoke-method
   #:qinvoke-method*
   #:qlet
   #:qload-ui
   #:qlocal8bit
   #:qmessage-box
   #:qmeta-enums
   #:qnew-instance
   #:qnull-object
   #:qobject-names
   #:qok
   #:qoverride
   #:qprocess-events
   #:qproperty
   #:qquit
   #:qrequire
   #:qsender
   #:qset-ini
   #:qset-null
   #:qset-property
   #:qsingle-shot
   #:qstatic-meta-object
   #:qsuper-class-name
   #:qnew
   #:qdel
   #:qget
   #:qset
   #:qfun
   #:qfun*
   #:qmsg
   #:qq
   #:qtranslate
   #:qt-object
   #:qt-object-id
   #:qt-object-name
   #:qt-object-p
   #:qt-object-pointer
   #:qt-object-unique
   #:qui-class
   #:qui-names
   #:qutf8
   #:qversion
   #:tr))

#-win32
(progn
  (provide :serve-event)
  (pushnew :serve-event *features*))

(progn
  (provide :eql)
  (pushnew :eql *features*))
