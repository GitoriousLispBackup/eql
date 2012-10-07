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
    // see "Qt_EQL/" for "eql_fun" documentation
    QVariant ret = eql_fun("eql-user:say-number", QVariant::String,
                           Q_ARG(ulong, n));
    QMessageBox::information(0, QString::number(n), ret.toString());
}

QT_END_NAMESPACE
