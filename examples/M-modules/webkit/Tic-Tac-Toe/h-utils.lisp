;;; Html utils

#+win32 (si:trap-fpe 'floating-point-underflow nil) ; for QWebInspector

(qrequire :webkit)

(provide :h-utils)

(defvar *web-view*      (qnew "QWebView")) 
(defvar *webkit-bridge* (qload-c++ "lib/webkit_bridge"))
(defvar *web-pixmap*)

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
  "Return first matching web element for given selector."
  (let ((el (qrun* (! "findFirstElement" (frame) selector))))
    (unless (qrun* (! "isNull" el))
      el)))

(defun assert-web-element (x)
  (assert (= #.(qid "QWebElement") (qt-object-id x)) nil
          "Wanted <QWebElement>, got: ~S." x)
  x)

(defun ensure-web-element (x)
  (if (stringp x)
      (element x)
      (assert-web-element x)))

(defun %input-text-p (web-element)
  (and (string-equal "INPUT" (tag-name web-element))
       (string-equal "text" (qrun* (! "attribute" web-element "type")))))

;;; Html utils

(defmacro iterate-elements (selector &body body)
  "Iterate over web elements of QWebFrame, binding ELEMENT to the current QWebElement."
  (let ((i (gensym)))
    `(let ((elements (qrun* (! "findAllElements" (frame) ,selector))))
       (dotimes (,i (qrun* (! "count" elements)))
         (let ((element (qrun* (! "at" elements ,i))))
           ,@body)))))

(defmacro iterate-child-elements (web-element selector &body body)
  "Iterate over child elements of a QWebElement, binding ELEMENT to the current QWebElement."
  (let ((i (gensym)))
    `(let ((elements (qrun* (! "findAll" (ensure-web-element ,web-element) ,selector))))
       (dotimes (,i (qrun* (! "count" elements)))
         (let ((element (qrun* (! "at" elements ,i))))
           ,@body)))))

(defun js (javascript &optional web-element)
  "Evaluate JavaScript in the context of either a QWebElement (as 'this') or the main QWebFrame."
  (qrun* (! ("toString" ("evaluateJavaScript" javascript)
                        (or web-element (frame))))))

;;; Special functions HGET and HSET for :text :inner-xml :outer-xml, attributes like :value :src etc.

(defun hget (selector/web-element attribute)
  "Return (as multiple values) Html attribute of either all elements matching selector, or of the given web element."
  (let (values)
    (flet ((%do (element)
             (push (cond ((eql :text attribute)
                          (qrun* (! "toPlainText" element)))
                         ((eql :inner-xml attribute)
                          (qrun* (! "toInnerXml" element)))
                         ((eql :outer-xml attribute)
                          (qrun* (! "toOuterXml" element)))
                         ((and (%input-text-p element)
                               (member attribute '(:value :size)))
                          (js (format nil "this.~(~A~)" attribute) element))
                         (t
                          (let ((a (! "attribute" element (string-downcase attribute) "NIL")))
                            (unless (string= "NIL" a)
                              a))))
                   values)))
      (if (stringp selector/web-element)
          (iterate-elements selector/web-element
            (%do element))
          (progn
            (assert-web-element selector/web-element)
            (%do selector/web-element))))
    (values-list (nreverse values))))

(defun hset (selector/web-element &rest attributes)
  "Set Html attributes (any number of attribute/value pairs) of either all elements matching selector, or of the given web element."
  (flet ((%do (element)
           (do ((curr attributes (cddr curr)))
               ((null curr))
             (let ((attribute (first curr))
                   (value (second curr)))
               (cond ((eql :text attribute)
                      (qrun* (! "setPlainText" element value)))
                     ((eql :inner-xml attribute)
                      (qrun* (! "setInnerXml" element value)))
                     ((eql :outer-xml attribute)
                      (qrun* (! "setOuterXml" element value)))
                     ((and (%input-text-p element)
                           (member attribute '(:value :size)))
                      (js (format nil "this.~(~A~) = ~S" attribute value) element))
                     (t
                      (qrun* (! "setAttribute" element (string-downcase attribute) value))))))))
    (if (stringp selector/web-element)
        (iterate-elements selector/web-element
          (%do element))
        (progn
          (assert-web-element selector/web-element)
          (%do selector/web-element)))))

;;; convenience functions (wrappers for all QWebElement methods)

(defmacro defun-web-element ((name qt-name))
  `(defun ,name (x)
     "QWebElement convenience function."
     (qrun* (! ,qt-name (ensure-web-element x)))))

(defmacro defun-web-element-arg ((name qt-name))
  `(defun ,name (x arg)
     "QWebElement convenience function."
     (qrun* (! ,qt-name (ensure-web-element x) arg))))

(defun attribute-names (web-element &optional namespace-uri)
  "QWebElement convenience function."
  (qrun* (! "attributeNames" (ensure-web-element web-element) namespace-uri)))

(defun append-inside (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "appendInside(QString)" (ensure-web-element web-element) x))
      (qrun* (! "appendInside(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun append-outside (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "appendOutside(QString)" (ensure-web-element web-element) x))
      (qrun* (! "appendOutside(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun enclose-contents-with (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "encloseContentsWith(QString)" (ensure-web-element web-element) x))
      (qrun* (! "encloseContentsWith(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun enclose-with (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "encloseWith(QString)" (ensure-web-element web-element) x))
      (qrun* (! "encloseWith(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun prepend-inside (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "prependInside(QString)" (ensure-web-element web-element) x))
      (qrun* (! "prependInside(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun prepend-outside (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "prependOutside(QString)" (ensure-web-element web-element) x))
      (qrun* (! "prependOutside(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun replace* (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "replace(QString)" (ensure-web-element web-element) x))
      (qrun* (! "replace(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun set-style-property (selector/web-element property value)
  "QWebElement convenience function."
  (qrun* (! "setStyleProperty" (ensure-web-element selector/web-element)
            (string-downcase property) value)))

(defun style-property (selector/web-element property &optional (resolve |QWebElement.ComputedStyle|))
  "QWebElement convenience function."
  (qrun* (! "styleProperty" (ensure-web-element selector/web-element)
            (string-downcase property) resolve)))

(defun-web-element-arg (add-class "addClass"))

(defun-web-element (classes "classes"))

(defun-web-element (clone "clone"))

(defun-web-element (document "document"))

(defun-web-element-arg (find-first "findFirst"))

(defun-web-element (first-child "firstChild"))

(defun-web-element (geometry "geometry"))

(defun-web-element-arg (has-attribute "hasAttribute"))

(defun-web-element (has-attributes "hasAttributes"))

(defun-web-element-arg (has-class "hasClass"))

(defun-web-element (has-focus "hasFocus"))

(defun-web-element (is-null "isNull"))

(defun-web-element (last-child "lastChild"))

(defun-web-element (local-name "localName"))

(defun-web-element (namespace-uri "namespaceUri"))

(defun-web-element (next-sibling "nextSibling"))

(defun-web-element (parent "parent"))

(defun-web-element (prefix "prefix"))

(defun-web-element (previous-sibling "previousSibling"))

(defun-web-element-arg (remove-attribute "removeAttribute"))

(defun-web-element (remove-all-children "removeAllChildren"))

(defun-web-element-arg (remove-class "removeClass"))

(defun-web-element (remove-from-document "removeFromDocument"))

(defun-web-element (set-focus "setFocus"))

(defun-web-element (tag-name "tagName"))

(defun-web-element-arg (toggle-class "toggleClass"))

(defun-web-element (web-frame "webFrame"))

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

(defun %web-pixmap ()
  "Qt: QPixmap pixmap()"
  *web-pixmap*)

;;; pixmap utilities

(defun assign-pixmap (pixmap web-element)
  "Assign pixmap directly to a QWebElement."
  (let ((*web-pixmap* pixmap))
    ;; "Lisp.pixmap()" will call %WEB-PIXMAP
    (js (format nil "Lisp.pixmap().assignToHTMLImageElement(document.getElementById('~A'))"
                (hget web-element :id)))))

(defun to-pixmap (web-element &optional scale-factor)
  "Get pixmap from web element, optionally scaling it."
  (qrun* (let ((rect (geometry web-element))
               (pos (! "scrollPosition" (frame))))
           (decf (first rect) (first pos))
           (decf (second rect) (second pos))
           (let ((pixmap (! "grabWidget(QWidget*,QRect)" "QPixmap" *web-view* rect)))
                  (if scale-factor
                      (! "scaled(QSize,Qt::AspectRatioMode,Qt::TransformationMode)" pixmap
                         (mapcar (lambda (x) (truncate (+ 0.5 (* scale-factor x))))
                                 (nthcdr 2 rect))
                         |Qt.IgnoreAspectRatio| |Qt.SmoothTransformation|)
                      pixmap)))))

