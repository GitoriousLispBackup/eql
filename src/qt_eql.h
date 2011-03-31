// copyright (c) 2011 Polos Ruetz
// see Qt_EQL example

#ifndef QT_EQL_H
#define QT_EQL_H

#include <QGenericArgument>
#include <QVariant>
#include "eql_global.h"

EQL_EXPORT
QVariant eql_fun(const QByteArray&,
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

EQL_EXPORT
QVariant eql_fun(const QByteArray&,
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
