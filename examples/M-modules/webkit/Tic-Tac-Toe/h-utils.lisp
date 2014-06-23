;;; Html utils

#+win32 (si:trap-fpe 'floating-point-underflow nil) ; for QWebInspector

(qrequire :webkit)

(provide :h-utils)

(defvar *web-view* (qnew "QWebView")) 

(defvar *webkit-bridge* (qload-c++ "lib/webkit_bridge"))

(defun frame ()
  (qrun* (! ("mainFrame" "page" *web-view*))))

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
  (let ((el (qrun* (! "findFirstElement" (frame) selector))))
    (unless (qrun* (! "isNull" el))
      el)))

(defun assert-web-element (x)
  (assert (= #.(qid "QWebElement") (qt-object-id x)) nil
          "Wanted <QWebElement>, got: ~S." x))

(defun htag-p (tag web-element)
  (string-equal tag (qrun* (! "tagName" web-element))))

(defun htype-p (type web-element)
  (string-equal type (qrun* (! "attribute" web-element "type"))))

(defun input-text-p (web-element)
  (and (htag-p :input web-element)
       (htype-p :text web-element)))

;;; Html utils

(defmacro iterate-elements (selector &body body)
  "Iterates over web elements of QWebFrame, binding ELEMENT to the current QWebElement."
  (let ((i (gensym)))
    `(let ((elements (qrun* (! "findAllElements" (frame) ,selector))))
       (dotimes (,i (qrun* (! "count" elements)))
         (let ((element (qrun* (! "at" elements ,i))))
           ,@body)))))

(defun js (javascript &optional web-element)
  "Evaluates JavaScript in the context of either a QWebElement (as 'this') or the main QWebFrame."
  (qrun* (! ("toString" ("evaluateJavaScript" javascript)
                        (or web-element (frame))))))

(defun hget (selector/web-element attribute)
  "Returns (as multiple values) Html attribute of either all elements matching selector, or of the given web element."
  (let (values)
    (flet ((%do (element)
             (push (if (eql :text attribute)
                       (qrun* (! "toPlainText" element))
                       (if (and (input-text-p element)
                                (member attribute '(:value :size)))
                           (js (format nil "this.~(~A~)" attribute) element)
                           (qrun* (! "attribute" element (string-downcase attribute)))))
                   values)))
      (if (stringp selector/web-element)
          (iterate-elements selector/web-element
            (%do element))
          (progn
            (assert-web-element selector/web-element)
            (%do selector/web-element))))
    (values-list (nreverse values))))

(defun hset (selector/web-element &rest attributes)
  "Sets Html attributes (any number of attribute/value pairs) of either all elements matching selector, or of the given web element."
  (flet ((%do (element)
           (do ((curr attributes (cddr curr)))
               ((null curr))
             (let ((attribute (first curr))
                   (value (second curr)))
               (if (eql :text attribute)
                   (qrun* (! "setPlainText" element value))
                   (if (and (input-text-p element)
                            (member attribute '(:value :size)))
                       (js (format nil "this.~(~A~) = ~S" attribute value) element)
                       (qrun* (! "setAttribute" element (string-downcase attribute) value))))))))
    (if (stringp selector/web-element)
        (iterate-elements selector/web-element
          (%do element))
        (progn
          (assert-web-element selector/web-element)
          (%do selector/web-element)))))

(defun style-property (web-element property &optional (resolve |QWebElement.ComputedStyle|))
  "Convenience function."
  (qrun* (! "styleProperty" web-element (string-downcase property) resolve)))

(defun set-style-property (web-element property value)
  "Convenience function."
  (qrun* (! "setStyleProperty" web-element (string-downcase property) value)))

;;; JavaScript bridge

(defun fun (function arguments)
  "Qt: QString fun(QString, QVariantList = 0)
   Use this variant for ordinary function calls, e.g. Lisp.fun('+', ['1/2', '1/3'])"
  (if arguments
      (>> (apply (<< function) (<< arguments)))
      (>> (funcall (<< function)))))

(defun web (function web-element arguments)
  "Qt: QString web(QString, QWebElement, QVariantList = 0)
   Use this variant if you need to pass a QWebElement, e.g. Lisp.web('move', this)"
  (cond (arguments
         (>> (apply (<< function) web-element (<< arguments))))
        ((not (qrun* (! "isNull" web-element)))
         (>> (funcall (<< function) web-element)))
        (t
         (>> (funcall (<< function))))))
