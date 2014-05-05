#include "webkit_bridge.h"

QT_BEGIN_NAMESPACE

QObject* ini() {
    static QObject* cpp = 0;
    if(!cpp) {
        cpp = new CPP;
        cpp->setObjectName("webkit_bridge"); }
    return cpp; }

QStringList CPP::testCall(const QDateTime& dateTime, const QVariantList& arguments) {
    QVariant ret = eql_fun("eql-user:test-call", QVariant::StringList,
                           Q_ARG(QDateTime, dateTime),
                           Q_ARG(QVariantList, arguments));
    return ret.toStringList(); }

QString CPP::eval(const QString& expression) {
    QVariant ret = eql_fun("eql-user:eval*", QVariant::String,
                           Q_ARG(QString, expression));
    return ret.toString(); }

QT_END_NAMESPACE

