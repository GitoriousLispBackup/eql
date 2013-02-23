// copyright (c) 2010-2013 Polos Ruetz

#ifndef EQL_H
#define EQL_H

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QCoreApplication>
#include <ecl/ecl.h>
#include "eql_global.h"

QT_BEGIN_NAMESPACE

#define QSLOT(x)   "1"#x
#define QSIGNAL(x) "2"#x

typedef void (*lisp_ini)(cl_object);

class EQL_EXPORT EQL : public QObject {
    Q_OBJECT
public:
    EQL();
    ~EQL();

    static bool cl_booted;
    static bool return_value_p;
    static const char version[];
    static QEventLoop* eventLoop;
    static void ini(char**);
    static void eval(const char*);
    static QString home();

    void exec(const QStringList&);
    void exec(lisp_ini, const QByteArray& = "nil", const QByteArray& = "eql-user"); // see my_app example
    void exec(QWidget*, const QString&, const QString& = QString());                // see Qt_EQL example

public Q_SLOTS:
    void exitEventLoop() { eventLoop->exit(); }
};

QT_END_NAMESPACE

#endif
