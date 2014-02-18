;;; Ported Qt Widgets Tutorial - Nested Layouts

(in-package :eql-user)

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
      (! "addWidget" query-layout w))
    (! "addLayout" main-layout query-layout)
    (! "addWidget" main-layout result-view)
    (! "setLayout" window main-layout)
    (setup-model-and-view result-view)
    (! "show" window)))

(defun setup-model-and-view (view)
  (let ((model (qnew "QStandardItemModel")))
    (! "setHorizontalHeaderLabels" model (list "Name" "Office"))
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
            (! "setText" item text)
            (push item items)))
        (! "appendRow(QList<QStandardItem*>)" model (nreverse items))))
    (! "setModel" view model)
    (! ("hide" "verticalHeader" view))                          ; see "0.lisp"
    (! (("setStretchLastSection" t) "horizontalHeader" view)))) ; see "0.lisp"

(start)
