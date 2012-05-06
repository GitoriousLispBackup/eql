;;; Ported Qt Widgets Tutorial - Nested Layouts

(in-package :eql)

(defun start ()
  (let ((window       (qnew "QWidget"
                            "windowTitle" "Nested layouts"))
        (query-label  (qnew "QLabel"
                            "text" "Query:"))
        (query-edit   (qnew "QLineEdit"))
        (result-view  (qnew "QTableView"))
        (query-layout (qnew "QHBoxLayout"))
        (main-layout  (qnew "QVBoxLayout")))
    (dolist (w (list query-label query-edit))
      (qfun query-layout "addWidget" w))
    (qfun main-layout "addLayout" query-layout)
    (qfun main-layout "addWidget" result-view)
    (qfun window "setLayout" main-layout)
    (setup-model-and-view result-view)
    (qfun window "show")))

(defun setup-model-and-view (view)
  (let ((model (qnew "QStandardItemModel")))
    (qfun model "setHorizontalHeaderLabels" (list "Name" "Office"))
    (dolist (row (list (list "Verne Nilsen" "123")
                       (list "Carlos Tang" "77")
                       (list "Bronwyn Hawcroft" "119")
                       (list "Alessandro Hanssen" "32")
                       (list "Andrew John Bakken" "54")
                       (list "Vanessa Weatherley" "85")
                       (list "Rebecca Dickens" "17")
                       (list "David Bradley" "42")
                       (list "Knut Walters" "25")
                       (list "Andrea Jones" "34")))
      (let (items)
        (dolist (text row)
          (let ((item (qnew "QStandardItem")))
            (qfun item "setText" text)
            (push item items)))
        (qfun model "appendRow(QList<QStandardItem*>)" (nreverse items))))
    (qfun view "setModel" model)
    (qfuns view "verticalHeader" "hide")
    (qfuns view "horizontalHeader" ("setStretchLastSection" t))))

(start)
