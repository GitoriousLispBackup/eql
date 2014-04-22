#include "webkit_bridge.h"
#include "../../../../src/eql_fun.h" // for eql_fun()

QT_BEGIN_NAMESPACE

QObject* ini() {
    static QObject* cpp = 0;
    if(!cpp) {
        cpp = new CPP;
        cpp->setObjectName("webkit_bridge"); }
    return cpp; }

QStringList CPP::testCall(const QVariantList& arguments) {
    QVariant ret = eql_fun("eql-user:test-call", QVariant::StringList,
                           Q_ARG(QVariantList, arguments));
    return ret.toStringList(); }

QString CPP::eval(const QString& expression) {
    QVariant ret = eql_fun("eql-user:eval*", QVariant::String,
                           Q_ARG(QString, expression));
    return ret.toString(); }

QT_END_NAMESPACE

