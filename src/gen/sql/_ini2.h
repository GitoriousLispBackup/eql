#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR(QSqlDatabase, qsqldatabase)
TO_QT_TYPE_PTR(QSqlError, qsqlerror)
TO_QT_TYPE_PTR(QSqlField, qsqlfield)
TO_QT_TYPE_PTR(QSqlIndex, qsqlindex)
TO_QT_TYPE_PTR(QSqlQuery, qsqlquery)
TO_QT_TYPE_PTR(QSqlRecord, qsqlrecord)
TO_QT_TYPE_PTR(QSqlRelation, qsqlrelation)

void ini2() {
    LObjects::T_QSqlDatabase = qRegisterMetaType<QSqlDatabase>("QSqlDatabase");
    LObjects::T_QSqlError =    qRegisterMetaType<QSqlError>("QSqlError");
    LObjects::T_QSqlField =    qRegisterMetaType<QSqlField>("QSqlField");
    LObjects::T_QSqlIndex =    qRegisterMetaType<QSqlIndex>("QSqlIndex");
    LObjects::T_QSqlQuery =    qRegisterMetaType<QSqlQuery>("QSqlQuery");
    LObjects::T_QSqlRecord =   qRegisterMetaType<QSqlRecord>("QSqlRecord");
    LObjects::T_QSqlRelation = qRegisterMetaType<QSqlRelation>("QSqlRelation"); }

void* toMetaArg(int n, cl_object l_arg) {
    void* p = 0;
    if(LObjects::T_QSqlDatabase == n)      { p = new QSqlDatabase(*toQSqlDatabasePointer(l_arg)); }
    else if(LObjects::T_QSqlError == n)    { p = new QSqlError(*toQSqlErrorPointer(l_arg)); }
    else if(LObjects::T_QSqlField == n)    { p = new QSqlField(*toQSqlFieldPointer(l_arg)); }
    else if(LObjects::T_QSqlIndex == n)    { p = new QSqlIndex(*toQSqlIndexPointer(l_arg)); }
    else if(LObjects::T_QSqlQuery == n)    { p = new QSqlQuery(*toQSqlQueryPointer(l_arg)); }
    else if(LObjects::T_QSqlRecord == n)   { p = new QSqlRecord(*toQSqlRecordPointer(l_arg)); }
    else if(LObjects::T_QSqlRelation == n) { p = new QSqlRelation(*toQSqlRelationPointer(l_arg)); }
    return p; }

cl_object to_lisp_arg(int n, void* p) {
    cl_object l_ret = Cnil;
    if(LObjects::T_QSqlDatabase == n)      { l_ret = from_qsqldatabase(*(QSqlDatabase*)p); }
    else if(LObjects::T_QSqlError == n)    { l_ret = from_qsqlerror(*(QSqlError*)p); }
    else if(LObjects::T_QSqlField == n)    { l_ret = from_qsqlfield(*(QSqlField*)p); }
    else if(LObjects::T_QSqlIndex == n)    { l_ret = from_qsqlindex(*(QSqlIndex*)p); }
    else if(LObjects::T_QSqlQuery == n)    { l_ret = from_qsqlquery(*(QSqlQuery*)p); }
    else if(LObjects::T_QSqlRecord == n)   { l_ret = from_qsqlrecord(*(QSqlRecord*)p); }
    else if(LObjects::T_QSqlRelation == n) { l_ret = from_qsqlrelation(*(QSqlRelation*)p); }
    return l_ret; }

QT_END_NAMESPACE

#endif
