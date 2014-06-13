;;; This is a port of Qt example "webkit/domtraversal/"

(qrequire :webkit)

(in-package :eql-user)

(load "ui/ui-dom") ; generated: "eql -quic dom.ui"

(defun ini (&optional url)
  (qconnect ui:*web-view* "loadFinished(bool)" 'load-finished)
  (when url
    (set-url url)))

(defun set-url (string)
  (qlet ((url "QUrl(QString)" string))
    (! "setUrl" ui:*web-view* url)))

(defun load-finished (ok)
  (! "clear" ui:*tree-widget*)
  (examine-child-elements (! ("documentElement" "mainFrame" "page" ui:*web-view*))
                          (! "invisibleRootItem" ui:*tree-widget*)))

(defun examine-child-elements (parent-element parent-item)
  (let ((element (! "firstChild" parent-element)))
    (x:while (not (! "isNull" element))
      (let ((item (qnew "QTreeWidgetItem")))
        (! "setText" item 0 (! "tagName" element))
        (! "addChild" parent-item item)
        (examine-child-elements element item)
        (setf element (! "nextSibling" element))))))

(ini (or (third (! "arguments" "QApplication"))
         "../../../doc/index.html"))

