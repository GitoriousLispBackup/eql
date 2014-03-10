;;; Removes web elements from Html file:
;;;
;;; (file-open)
;;;
;;; (strip :img)              ; removes all <img>
;;; (strip :div :id   "main") ; removes <div id="main">
;;; (strip :a   :rel  "next") ; removes <a rel="next" ...>
;;; (strip :a   :text "spam") ; removes <a href="...">This is spam.</a>
;;;
;;; (file-save)
;;;
;;; (view :div :id "main")    ; displays "outerHtml" of single element

(qrequire :webkit)

(in-package :eql-user)

(defvar *web-view* (qnew "QWebView"))

(defun os-pathname (name)
  #+(or darwin linux)
  (qutf8 name)
  #+win32
  (qlocal8bit name))

(let ((filter "Html files (*.htm *.html)"))
  (defun file-open ()
    (let ((file (! "getOpenFileName" "QFileDialog" nil nil nil filter)))
      (unless (x:empty-string file)
        (qlet ((url "QUrl(QString)" file))
          (x:do-with *web-view*
            ("load(QUrl)" url)
            ("show"))))))
  (defun file-save ()
    (let ((file (! "getSaveFileName" "QFileDialog" nil nil nil filter)))
      (unless (x:empty-string file)
        (with-open-file (s (os-pathname file) :direction :output :if-exists :supersede)
          (write-string (! "toHtml" (frame)) s))))))

(defun frame ()
  (! ("mainFrame" "page" *web-view*)))

(defun strip (tag &optional attribute value)
  "Removes all web elements matching tag and attribute value. Returns number of removed elements."
  (let ((removed 0))
    (flet ((str (x)
             (when x (string-downcase (symbol-name x))))
           (rm (el)
             (incf removed)
             (! "removeFromDocument" el)))
      (let ((els (! "findAllElements" (frame) (str tag)))
            (attr (str attribute)))
        (dotimes (i (! "count" els))
          (let ((el (! "at" els i)))
            (if (eql :text attribute)
                (when (search value (! "toPlainText" el) :test 'string-equal)
                  (rm el))
                (when (or (not attribute)
                          (string-equal value (! "attribute" el attr)))
                  (rm el)))))))
    removed))

(defun web-view-dialog (html)
  "Displays html in temporary dialog."
  (qlet ((dialog "QDialog")
         (layout "QVBoxLayout(QWidget*)" dialog)
         (view   "QWebView"))
    (! "addWidget" layout view)
    (! "setHtml" view html)
    (! "exec" dialog))) ; delete on closing (see QLET)

(defun view (tag &optional attribute value)
  "Displays 'outerHtml' of first tag found matching the attribute value."
  (flet ((str (x)
           (when x (string-downcase (symbol-name x))))
         (view* (el)
           (web-view-dialog (! "toOuterXml" el))
           (return-from view)))
    (let ((els (! "findAllElements" (frame) (str tag)))
          (attr (str attribute)))
      (dotimes (i (! "count" els))
        (let ((el (! "at" els i)))
          (if (eql :text attribute)
              (when (search value (! "toPlainText" el) :test 'string-equal)
                (view* el))
              (when (or (not attribute)
                        (string-equal value (! "attribute" el attr)))
                (view* el))))))))

(file-open)
