#include "plugin_widget.h"
#include <eql_fun.h>

QT_BEGIN_NAMESPACE

QObject* ini() {
    static QObject* cpp = 0;
    if(!cpp) {
        cpp = new CPP;
        cpp->setObjectName("webkit_bridge"); }
    return cpp; }

void CPP::setParams(const QStringList& argNames, const QStringList& argValues) {
    eql_fun("eql-user:set-params",
            Q_ARG(QStringList, argNames),
            Q_ARG(QStringList, argValues)); }

QT_END_NAMESPACE

