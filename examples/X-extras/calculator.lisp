;;; A simple calculator
;;;
;;; - displays exact value + float value
;;; - runs visual automations

(defpackage :calculator
  (:use :common-lisp :eql)
  (:export))

(in-package :calculator)

(defvar *main*      (qnew "QDialog"))
(defvar *real*      (qnew "QLabel"
                          "frameShape" |QFrame.Box|))
(defvar *float*     (qnew "QLineEdit"
                          "readOnly" t
                          "font" (x:let-it (qfun "QApplication" "font")
                                   (qfun x:it "setPointSize" (+ 6 (qfun x:it "pointSize"))))))

(defvar *precision* 0f0) ; f = float, d = double, l = long
(defvar *value1*    nil)
(defvar *value2*    nil)
(defvar *reset*     nil)
(defvar *operation*)
(defvar *decimals*)

(defun error-to-string (err)
  (let ((err (string-trim "#<a >" (write-to-string err :case :downcase))))
    (subseq err 0 (position #\# err))))

(defun funcall-protect (fun &rest args)
  (multiple-value-bind (val err)
      (ignore-errors (apply fun args))
    (or val
        (progn
          (qfun "QMessageBox" "critical" nil "Error" (error-to-string err))
          0))))

(defun display-number (n)
  (flet ((str (x)
           (format nil "~:D" x)))
    (x:when-it (funcall-protect (lambda (x) (float x *precision*)) n)
      (qset *float* "text" (princ-to-string x:it)))
    (let* ((num (str (numerator n)))
           (den (str (denominator n)))
           (dif (- (length den) (length num))))
      (qset *real* "text" (format nil "<pre><u>~A~A</u><br>~A" (if (plusp dif) (make-string dif) "") num den))
      (qset (qfind-child *main* "blah") "enabled" (= 1 (denominator n))))))

(defun clear-display ()
  (setf *value1* 0
        *decimals* nil)
  (display-number 0))

(defun words-clicked ()
  (qmsg (format nil "~R" *value1*)))

(defun digit-clicked ()
  (when *reset*
    (clear-display)
    (setf *reset* nil))
  (let ((clicked (parse-integer (qget (qsender) "text"))))
    (setf *value1* (if *decimals*
                       (+ (* clicked (expt 10 (- (incf *decimals*))))
                          *value1*)
                       (+ clicked
                          (* 10 *value1*)))))
  (display-number *value1*))

(defun back-clicked ()
  (when (and *decimals* (zerop *decimals*))
    (setf *decimals* nil))
  (setf *value1* (if *decimals*
                     (let ((n (expt 10 (decf *decimals*))))
                       (/ (truncate (* n *value1*)) n))
                     (truncate (/ *value1* 10))))
  (display-number *value1*))

(defun invert (operation)
  (setf *value1* (funcall-protect operation *value1*))
  (display-number *value1*))

(defun sign-clicked ()
  (invert '-))

(defun reci-clicked ()
  (invert '/))

(defun point-clicked ()
  (setf *decimals* 0))

(defun clear-clicked ()
  (setf *value2* nil)
  (clear-display))

(defun operate ()
  (x:when-it (funcall-protect *operation* *value2* *value1*)
    (setf *value2* x:it)
    (display-number *value2*)))

(defun operation-clicked ()
  (if *value2*
      (operate)
      (setf *value2* *value1*))
  (setf *operation* (intern (qget (qsender) "text"))
        *reset* t))

(defun equal-clicked ()
  (when *value2*
    (operate)
    (shiftf *value1* *value2* nil)
    (setf *reset* t)))

;;; UI

(defun run ()
  (flet ((b ()
           (qnew "QToolButton"
                 "minimumSize" '(35 25)
                 "sizePolicy" (qnew "QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy)"
                                    |QSizePolicy.Expanding| |QSizePolicy.Expanding|))))
    (let* ((layout (qnew "QGridLayout(QWidget*)" *main*))
           (digits (make-array 10))
           (plus (b)) (minus (b)) (multiply (b)) (divide (b)) (reci (b)) (sign (b))
           (point (b)) (clear (b)) (back (b)) (words (b)) (equal (b)))
      (dotimes (n 10)
        (setf (svref digits n) (b)))
      (x:do-with (qfun layout "addWidget")
        (reci     2 0)
        (divide   2 1)
        (multiply 2 2)
        (minus    2 3)
        (clear    2 4)
        (back     3 4)
        (words    4 4)
        (sign     5 3)
        (point    6 3)
        (*real*           0 0 1 5)
        (*float*          1 0 1 5)
        (plus             3 3 2 1)
        (equal            5 4 2 1)
        ((svref digits 0) 6 0 1 3))
      (let ((n 0))
        (dotimes (r 3)
          (dotimes (c 3)
            (qfun layout "addWidget" (svref digits (incf n)) (- 5 r) c))))
      (dolist (btn (list (list plus     "+")
                         (list minus    "-")
                         (list multiply "*")
                         (list divide   "/")
                         (list reci     "1/x"  "R")
                         (list sign     "+-"   "S")
                         (list point    ".")
                         (list clear    "AC"   "Delete")
                         (list back     "<<"   "Backspace")
                         (list words    "blah" "B")
                         (list equal    "="    "Return")))
        (let ((w (first btn))
              (s (second btn)))
          (x:do-with (qset w)
            ("text" s)
            ("objectName" s)
            ("shortcut" (qnew "QKeySequence(QString)" (or (third btn) s))))))
      (dolist (w (list *float* *real*))
        (qset w "alignment" |Qt.AlignRight|))
      (dotimes (n 10)
        (let ((w (svref digits n))
              (s (princ-to-string n)))
          (x:do-with (qset w)
            ("text" s)
            ("objectName" s)
            ("shortcut" (qnew "QKeySequence(QString)" s)))))
      (dotimes (n 10)
        (qconnect (svref digits n) "clicked()" 'digit-clicked))
      (dolist (w (list plus minus multiply divide))
        (qconnect w "clicked()" 'operation-clicked))
      (mapc (lambda (w fun)
              (qconnect w "clicked()" fun))
            (list clear back sign point reci words equal)
            (list 'clear-clicked 'back-clicked 'sign-clicked 'point-clicked 'reci-clicked 'words-clicked 'equal-clicked))
      (clear-display)
      (qfun *real* "setFocus")
      (x:do-with (qfun *main*) "show" "raise"))))

(run)

;;; visual automation

(defun auto (buttons)
  "Runs visually the passed BUTTONS (either one string or a list of button strings)."
  (when (stringp buttons)
    (setf buttons (x:split buttons)))
  (when buttons
    (qfun (qfind-child *main* (first buttons)) "animateClick" 200)
    (qsingle-shot 1200 (lambda () (auto (rest buttons))))))

;;; example / eql calculator -a

(defun qarg (argument)
  (find argument (qfun "QApplication" "arguments") :test 'string=))

(when (qarg "-a")
  (auto "AC 1 . 5 + 3 . 5 = * = 1/x 1/x +- blah"))
