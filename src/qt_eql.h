// copyright (c) 2011 Polos Ruetz
// see Qt_EQL example

#ifndef QT_EQL_H
#define QT_EQL_H

#include <QGenericArgument>
#include <QGenericReturnArgument>

bool eql_fun(const QByteArray&,
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

bool eql_fun(const QByteArray&,
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

#endif
