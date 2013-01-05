// copyright (c) 2012 Polos Ruetz
// see examples in Qt_EQL, Qt_EQL_dynamic

#ifndef EQL_FUN_H
#define EQL_FUN_H

#include <QGenericArgument>
#include <QVariant>

QT_BEGIN_NAMESPACE

#define QSLOT(x)   "1"#x
#define QSIGNAL(x) "2"#x

#define Q_PTR(type, var) (checkType(qVariantValue<MetaPointer>(var).id, #type) \
                         ? (type)qVariantValue<MetaPointer>(var).pointer \
                         : 0)

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

extern bool checkType(int, const QByteArray&);

struct MetaPointer {
    void* pointer;
    int id;

    MetaPointer()               : pointer(0), id(0) {}
    MetaPointer(void* v, int i) : pointer(v), id(i) {}
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(MetaPointer)

#endif
