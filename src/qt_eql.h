// copyright (c) 2011 Polos Ruetz
// see Qt_EQL example

#ifndef QT_EQL_H
#define QT_EQL_H

#include <QGenericArgument>
#include <QGenericReturnArgument>
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
                 QVariant::Type,
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
