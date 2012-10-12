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
    // (1) call user defined function
    QVariant ret = eql_fun("eql-user:say-number", QVariant::String, // see: ecl_fun.cpp:toQVariant()
                           Q_ARG(ulong, n));                        // see: ecl_fun.cpp:to_lisp_arg()

/*
    // (2) call FORMAT directly
    QVariant ret = eql_fun("format", QVariant::String, // pointer: QMetaType::VoidStar / QWidget* w = Q_PTR(QWidget*, ret);
                           Q_ARG(bool, false),         // max. 10 arguments
                           Q_ARG(QString, "~R"),
                           Q_ARG(ulong, n));
*/

    QMessageBox::information(0, QString::number(n), ret.toString());
}

QT_END_NAMESPACE
