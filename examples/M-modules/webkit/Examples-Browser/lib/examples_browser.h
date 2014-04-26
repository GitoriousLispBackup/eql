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
    Q_INVOKABLE bool run(const QString&, const QStringList&);
    Q_INVOKABLE void clearCache() { eql_fun("eql-user:clear-cache"); }
};

QT_END_NAMESPACE

#endif
