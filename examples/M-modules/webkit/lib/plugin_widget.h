#ifndef LIB_H
#define LIB_H

#include <QtGui>
#include <eql_fun.h>

#ifdef Q_WS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

extern "C" { LIB_EXPORT QObject* ini(); }

class CPP : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE void setParams(const QStringList& argNames, const QStringList& argValues) {
        eql_fun("eql-user:set-params", Q_ARG(QStringList, argNames), Q_ARG(QStringList, argValues)); }
};

QT_END_NAMESPACE

#endif
