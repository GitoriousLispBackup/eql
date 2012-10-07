#include "lib.h"

QT_BEGIN_NAMESPACE

QObject* ini()
{
    // any QObject inherited class will do (e.g. main window of a C++ application)
    static QObject* cpp = 0; if(!cpp) cpp = new CPP;
    return cpp;
}

// insert here your function implementations

QVariant CPP::returnMe(const QVariant& var)
{
    return var;
}

QT_END_NAMESPACE
