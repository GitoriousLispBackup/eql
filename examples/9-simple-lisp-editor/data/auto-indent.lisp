(mapcar (lambda (x)
          (if (atom x)
              (cons (symbol-name x) 2) ; default: 2 spaces
              (cons (symbol-name (car x)) (cdr x))))
        '(case
          ccase
          ecase
          typecase
          handler-bind
          handler-case
          catch
          defun
          defmacro
          destructuring-bind
          do
          do*
          dolist
          dotimes
          do-all-symbols
          do-symbols
          do-with
          flet
          labels
          lambda
          let
          let*
          loop
          multiple-value-bind
          progn
          qlet
          unless
          with-open-file
          with-output-to-string
          ;; package :x
          do-string
          (if-it . 4)
          (if-it* . 4)
          when-it
          while))