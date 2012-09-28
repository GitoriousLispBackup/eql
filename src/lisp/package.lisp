;;; copyright (c) 2010-2012 Polos Ruetz

(defpackage :eql
  (:use :common-lisp)
  (:export
   #:*break-on-errors*
   #:*slime-mode*
   #:defvar-ui
   #:ensure-qt-object
   #:in-home
   #:make-qimage
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
   #:qeval
   #:qexec
   #:qexit
   #:qfind-child
   #:qfind-children
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
   #:qremove-event-filter
   #:qrequire
   #:qrgb
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
   #:the-qt-object
   #:tr))

(defpackage :eql-user
  (:use :common-lisp :eql))

(pushnew :eql *features*)
