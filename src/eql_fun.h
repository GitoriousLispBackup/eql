// copyright (c) 2011 Polos Ruetz
// see Qt_EQL example

#ifndef EQL_FUN_H
#define EQL_FUN_H

#include <QGenericArgument>
#include <QVariant>

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

#endif
