(in-package :eql-user)

(setf *break-on-errors* t)

(qrequire :sql)

(defvar *db*         (! "addDatabase(QString)" "QSqlDatabase" "QSQLITE"))
(defvar *table-view* (qnew "QTableView"
                           "windowTitle" "sqlite"))

(defun populate-db ()
  (x:do-with (! "exec" *db*)
    "create table friends   ( id int primary key, name    varchar(50), country int )"
    "create table countries ( id int primary key, country varchar(50) )")
  (mapc (lambda (id name country)
          (! "exec" *db* (format nil "insert into friends values (~A, '~A', ~A)" id name country)))
        (list 1 2 3)
        (list "Pascal" "Valentina" "Rachel")
        (list 10 20 30))
  (mapc (lambda (id name)
          (! "exec" *db* (format nil "insert into countries values (~A, '~A')" id name)))
        (list 10 20 30)
        (list "France" "Italia" "USA")))

(defun ini ()
  (! "setDatabaseName" *db* ":memory:")
  (if (! "open" *db*)
      (progn
        (populate-db)
        (let ((model (qnew "QSqlRelationalTableModel")))
          (x:do-with model
            ("setTable" "friends")
            ("setRelation" 2 (qnew "QSqlRelation(QString...)" "countries" "id" "country"))
            ("select"))
          (x:do-with *table-view*
            ("setModel" model)
            ("setItemDelegate" (qnew "QSqlRelationalDelegate"))
            ("resizeColumnsToContents")
            ("show"))))
      (! "critical" "QMessageBox" nil "EQL" (tr "Could not open database."))))

(defun cell-string (row column)
  (! ("toString" "data" ("index" row column) "model" *table-view*)))

(defun selected-cells ()
  (mapcar (lambda (index)
            (cons (! "row" index)
                  (! "column" index)))
          (! ("selectedIndexes" "selectionModel" *table-view*))))

(ini)
