;;; Html utils

#+win32 (si:trap-fpe 'floating-point-underflow nil) ; for QWebInspector

(qrequire :webkit)

(provide :h-utils)

(defvar *web-view* (qnew "QWebView")) 

(defvar *webkit-bridge* (qload-c++ "lib/webkit_bridge"))

(defun frame ()
  (! ("mainFrame" "page" *web-view*)))

;;; ini

(qconnect (frame) "javaScriptWindowObjectCleared()"
          (lambda ()
            (! "addToJavaScriptWindowObject" (frame) "Lisp" *webkit-bridge*)
            (! "addToJavaScriptWindowObject" (frame) "WebView" *web-view*)))

;;; utils

(defun >> (expression)
  "Convert to string if needed."
  (if (stringp expression)
      expression
      (princ-to-string expression)))

(defun << (expression)
  "Convert from string if needed (to preserve strings, quote them in JavaScript)."
  (cond ((stringp expression)
         (read-from-string expression))
        ((listp expression)
         (mapcar (lambda (x) (if (stringp x) (read-from-string x) x))
                 expression))
        (t
         expression)))

(defun element (selector)
  (let ((el (! "findFirstElement" (frame) selector)))
    (unless (! "isNull" el)
      el)))

(defun htag-p (tag web-element)
  (string-equal tag (! "tagName" web-element)))

(defun htype-p (type web-element)
  (string-equal type (! "attribute" web-element "type")))

(defun input-text-p (web-element)
  (and (htag-p :input web-element)
       (htype-p :text web-element)))

;;; Html utils

(defmacro iterate-elements (selector &body body)
  "Iterates over web elements of QWebFrame, binding ELEMENT to the current QWebElement."
  (let ((i (gensym)))
    `(let ((elements (! "findAllElements" (frame) ,selector)))
       (dotimes (,i (! "count" elements))
         (let ((element (! "at" elements ,i)))
           ,@body)))))

(defun js (javascript &optional web-element)
  "Evaluates JavaScript in the context of either a QWebElement (as 'this') or the main QWebFrame."
  (! ("toString" ("evaluateJavaScript" javascript)
                 (or web-element (frame)))))

(defun hget (selector/web-element attribute)
  "Returns (as multiple values) Html attribute of either all elements matching selector, or of the given web element."
  (let (values)
    (flet ((%do (element)
             (push (if (eql :text attribute)
                       (! "toPlainText" element)
                       (if (and (input-text-p element)
                                (member attribute '(:value :size)))
                           (js (format nil "this.~(~A~)" attribute) element)
                           (! "attribute" element (string-downcase attribute))))
                   values)))
      (if (stringp selector/web-element)
          (iterate-elements selector/web-element
            (%do element))
          (%do selector/web-element)))
    (values-list (nreverse values))))

(defun hset (selector/web-element attribute value)
  "Sets Html attribute of either all elements matching selector, or of the given web element."
  (flet ((%do (element)
           (if (eql :text attribute)
               (! "setPlainText" element value))
               (if (and (input-text-p element)
                        (member attribute '(:value :size)))
                   (js (format nil "this.~(~A~) = ~S" attribute value) element)
                   (! "setAttribute" element (string-downcase attribute) value))))
    (if (stringp selector/web-element)
        (iterate-elements selector/web-element
          (%do element))
        (%do selector/web-element))))

(defun style-property (web-element property &optional (resolve |QWebElement.ComputedStyle|))
  "Convenience function."
  (! "styleProperty" web-element (string-downcase property) resolve))

(defun set-style-property (web-element property value)
  "Convenience function."
  (! "setStyleProperty" web-element (string-downcase property) value))

;;; JavaScript bridge

(defun call (function web-element arguments)
  "Qt: QString call(QString, QWebElement = 0, QVariantList = 0)"
  (cond (arguments
         (>> (apply (<< function) web-element (<< arguments))))
        ((and web-element (not (! "isNull" web-element)))
         (>> (funcall (<< function) web-element)))
        (t
         (>> (funcall (<< function))))))

