(in-package :eql-user)

(setf *break-on-errors* t)

(qrequire :sql)

(defvar *db*         (qfun "QSqlDatabase" "addDatabase(QString)" "QSQLITE"))
(defvar *table-view* (qnew "QTableView"
                           "windowTitle" "sqlite"))

(defun populate-db ()
  (x:do-with (qfun *db* "exec")
    "create table friends   ( id int primary key, name    varchar(50), country int )"
    "create table countries ( id int primary key, country varchar(50) )")
  (mapc (lambda (id name country)
          (qfun *db* "exec" (format nil "insert into friends values (~A, '~A', ~A)" id name country)))
        (list 1 2 3)
        (list "Pascal" "Valentina" "Rachel")
        (list 10 20 30))
  (mapc (lambda (id name)
          (qfun *db* "exec" (format nil "insert into countries values (~A, '~A')" id name)))
        (list 10 20 30)
        (list "France" "Italia" "USA")))

(defun ini ()
  (qfun *db* "setDatabaseName" ":memory:")
  (if (qfun *db* "open")
      (progn
        (populate-db)
        (let ((model (qnew "QSqlRelationalTableModel")))
          (x:do-with (qfun model)
            ("setTable" "friends")
            ("setRelation" 2 (qnew "QSqlRelation(QString,QString,QString)" "countries" "id" "country"))
            ("select"))
          (x:do-with (qfun *table-view*)
            ("setModel" model)
            ("setItemDelegate" (qnew "QSqlRelationalDelegate"))
            ("resizeColumnsToContents")
            ("show"))))
      (qfun "QMessageBox" "critical" nil "EQL" (tr "Could not open database."))))

(ini)
