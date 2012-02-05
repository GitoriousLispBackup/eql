// copyright (c) 2012 Polos Ruetz
// see Qt_EQL example

#ifndef EQL_FUN_H
#define EQL_FUN_H

#include <QGenericArgument>
#include <QVariant>

QT_BEGIN_NAMESPACE

#define QSLOT(x)   "1"#x
#define QSIGNAL(x) "2"#x

#define Q_PTR(type, var) (type)qVariantValue<void*>(var)

extern void
eql_fun(const QByteArray&,
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument());

extern QVariant
eql_fun(const QByteArray&,
        int,
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument());

QT_END_NAMESPACE

#endif
