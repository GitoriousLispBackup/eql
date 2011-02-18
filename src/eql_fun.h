// copyright (c) 2011 Polos Ruetz
// see Qt_EQL example

#include <QGenericArgument>
#include <QGenericReturnArgument>

#define QSLOT(x)   "1"#x
#define QSIGNAL(x) "2"#x

extern bool eql_fun(const QByteArray&,
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

extern bool eql_fun(const QByteArray&,
                    QGenericReturnArgument,
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
