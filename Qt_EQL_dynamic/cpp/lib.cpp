#include "lib.h"

QT_BEGIN_NAMESPACE

QObject* ini()
{
    static QObject* cpp = 0; if(!cpp) cpp = new CPP;
    return cpp;
}

// insert here your function implementations

QVariant CPP::returnMe(const QVariant& var)
{
    return var;
}

QT_END_NAMESPACE
