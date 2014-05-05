#ifndef LIB_H
#define LIB_H

#include <QtGui>
#include <QtWebKit>
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
    Q_INVOKABLE QStringList testCall(const QDateTime&, const QVariantList&);
    Q_INVOKABLE QString eval(const QString&);
    Q_INVOKABLE void flipValue(const QWebElement& we) { eql_fun("eql-user:flip-value", Q_ARG(QWebElement, we)); }
};

QT_END_NAMESPACE

#endif
