#include "lib.h"
#include "../../src/eql_fun.h"

QT_BEGIN_NAMESPACE

QObject* ini()
{
    // any QObject inherited class will do (e.g. main window of a C++ application)
    static QObject* cpp = 0; if(!cpp) cpp = new CPP;
    return cpp;
}

// insert here your function implementations

void CPP::sayNumber(ulong n)
{
    // see "Qt_EQL/" for "eql_fun()" documentation

    // (1) call user defined function
    QVariant ret = eql_fun("eql-user:say-number", QVariant::String,
                           Q_ARG(ulong, n));

/*
    // (2) call FORMAT directly
    QVariant ret = eql_fun("format", QVariant::String,
                           Q_ARG(bool, false),
                           Q_ARG(QString, "~R"),
                           Q_ARG(ulong, n));
*/

    QMessageBox::information(0, QString::number(n), ret.toString());
}

QT_END_NAMESPACE
