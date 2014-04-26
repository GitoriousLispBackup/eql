#include "examples_browser.h"

QT_BEGIN_NAMESPACE

QObject* ini() {
    static QObject* cpp = 0;
    if(!cpp) {
        cpp = new CPP;
        cpp->setObjectName("webkit_bridge"); }
    return cpp; }

bool CPP::run(const QString& id, const QStringList& fileNames) {
    QVariant ret = eql_fun("eql-user:run", QVariant::Bool,
                           Q_ARG(QString, id),
                           Q_ARG(QStringList, fileNames));
    return ret.toBool(); }

QT_END_NAMESPACE

