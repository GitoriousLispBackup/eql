;;; copyright (c) 2010-2012 Polos Ruetz

(defpackage :eql
  (:use :common-lisp)
  (:export
   #:*break-on-errors*
   #:defvar-ui
   #:in-home
   #:new-qt-object
   #:qadd-event-filter
   #:qapp
   #:qapropos
   #:qapropos*
   #:qcall-default
   #:qclear-event-filters
   #:qconnect
   #:qcopy
   #:qdel
   #:qdelete
   #:qdisconnect
   #:qenum
   #:qeql
   #:qescape
   #:qevents
   #:qexec
   #:qexit
   #:qfind-child
   #:qfrom-utf8
   #:qfun
   #:qfun*
   #:qfuns
   #:qget
   #:qgui
   #:qid
   #:qinvoke-method
   #:qinvoke-method*
   #:qinvoke-methods
   #:qlet
   #:qload-ui
   #:qlocal8bit
   #:qmessage-box
   #:qmeta-enums
   #:qmsg
   #:qnew
   #:qnew-instance
   #:qnull-object
   #:qobject-names
   #:qok
   #:qoverride
   #:qprocess-events
   #:qproperty
   #:qq
   #:qquit
   #:qrequire
   #:qsel
   #:qselect
   #:qsender
   #:qset
   #:qset-null
   #:qset-property
   #:qsingle-shot
   #:qstatic-meta-object
   #:qsuper-class-name
   #:qt-object
   #:qt-object-id
   #:qt-object-name
   #:qt-object-p
   #:qt-object-pointer
   #:qt-object-unique
   #:qtranslate
   #:quic
   #:qui-class
   #:qui-names
   #:qutf8
   #:qversion
   #:tr))

#-win32
(pushnew :serve-event *features*)

(pushnew :eql *features*)
