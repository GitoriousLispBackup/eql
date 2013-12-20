(defparameter *duration*     5000)
(defparameter *pause*        50)
(defparameter *easing-curve* |QEasingCurve.InOutSine|)

;;; colors

(defparameter *background* "black")
(defparameter *white*      (! "lighter" (qnew "QColor(QString)" "gray")      190))
(defparameter *green*      (! "lighter" (qnew "QColor(QString)" "limegreen") 170))
(defparameter *red*        (! "lighter" (qnew "QColor(QString)" "red")       170))

(defparameter *items*
  (list (list "P" *green* '(g s))
        (list "A" *white* '(d j p v))
        (list "T" *red*   '(c k o w))
        (list "E" *white* '(h l n r))
        (list "R" *green* '(a i q y))
        (list "N" *red*   '(m))
        (list "O" *white* '(b f t x))
        (list "S" *green* '(e u))))

(defparameter *state-1*
  '("..............."
    "..............."
    "..............."
    "..............."
    "..............."
    ".....abcde....."
    ".....fghij....."
    ".....klmno....."
    ".....pqrst....."
    ".....uvwxy....."
    "..............."
    "..............."
    "..............."
    "..............."
    "..............."))

(defparameter *state-2*
  '(".......d......."
    "..............."
    ".......g......."
    ".......j......."
    ".......c......."
    ".......h......."
    ".......a......."
    "p.svklqmbeoni.t"
    ".......f......."
    ".......u......."
    ".......w......."
    ".......r......."
    ".......y......."
    "..............."
    ".......x......."))

(let (ex)
  (defun rotated (&optional (state ex))
    (let* ((width  (length (first state)))
           (height (length state))
           (array  (make-array (list width height))))
      (loop :for string :in state
            :for y :upfrom 0
            :do (loop :for ch :across string
                      :for x :upfrom 0
                      :do (setf (aref array x (- (1- width) y)) ; rotate
                                ch)))
      (setf ex (loop :for y :below height
                     :collect (coerce (loop :for x :below width
                                            :collect (aref array y x))
                                      'string)))))
  (defun ex-rotated ()
    ex))

(defparameter *states*
  (list *state-1*
        *state-2*
        *state-1*
        (rotated *state-1*)
        *state-2*
        (ex-rotated)
        (rotated)
        *state-2*
        (ex-rotated)
        (rotated)
        *state-2*
        (ex-rotated)
        (rotated)
        *state-2*
        (ex-rotated)))

