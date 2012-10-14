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

void CPP::runExamples(ulong n)
{
    // (1) call user defined function
    {
        QVariant ret = eql_fun("eql-user:say-number", QVariant::String, // see: ecl_fun.cpp:toQVariant()
                               Q_ARG(ulong, n));                        // see: ecl_fun.cpp:to_lisp_arg()

        QMessageBox::information(0, "Example 1", ret.toString());
    }

    // (2) call FORMAT directly
    {
        QVariant ret = eql_fun("format", QVariant::String,
                               Q_ARG(bool, false),   // max. 10 Q_ARG()
                               Q_ARG(QString, "~R"),
                               Q_ARG(ulong, n));

        QMessageBox::information(0, "Example 2", ret.toString());
    }

    // (3) EQL pointer type return value
    {
        QVariant ret = eql_fun("eql-user:new-widget", QMetaType::VoidStar,
                               Q_ARG(QString, "QLabel"));

        QLabel* widget = Q_PTR(QLabel*, ret); // Q_PTR: see "eql_fun.h"

        QString msg;
        QDebug out(&msg);
        out << "<p>Q_PTR returned:<b>" << widget << "</b></p><p>(type checked at run time)</p>";
        QMessageBox::information(0, "Example 3", msg);
    }
}

QT_END_NAMESPACE
