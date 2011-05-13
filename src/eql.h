// copyright (c) 2010-2011 Polos Ruetz

#ifndef EQL_H
#define EQL_H

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <ecl/ecl.h>
#include "eql_global.h"

#define QSLOT(x)   "1"#x
#define QSIGNAL(x) "2"#x

typedef void (*lisp_ini)(cl_object);

class EQL_EXPORT EQL : public QObject {
    Q_OBJECT
public:
    EQL();
    ~EQL();

    static bool is_arg_return_value;
    static const char version[];
    static QString home();

    void* fun;
    void exec(const QStringList&);
    void exec(lisp_ini, const QByteArray&, const QByteArray& = "cl-user"); // see my_app example
    void exec(QWidget*, const QString&);                                   // see Qt_EQL example

public Q_SLOTS:
    void singleShot();
};

#endif
