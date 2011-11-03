// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

class LSqlDatabase : public QSqlDatabase {
    friend class N134;
public:
    LSqlDatabase(uint u) : unique(u) {}
    LSqlDatabase(uint u, const QSqlDatabase& x1) : QSqlDatabase(x1), unique(u) {}
    LSqlDatabase(uint u, const QString& x1) : QSqlDatabase(x1), unique(u) {}
    LSqlDatabase(uint u, QSqlDriver* x1) : QSqlDatabase(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlError : public QSqlError {
    friend class N135;
public:
    LSqlError(uint u, const QString& x1 = QString(), const QString& x2 = QString(), ErrorType x3 = NoError, int x4 = -1) : QSqlError(x1, x2, x3, x4), unique(u) {}
    LSqlError(uint u, const QSqlError& x1) : QSqlError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlField : public QSqlField {
    friend class N136;
public:
    LSqlField(uint u, const QString& x1 = QString(), QVariant::Type x2 = QVariant::Invalid) : QSqlField(x1, x2), unique(u) {}
    LSqlField(uint u, const QSqlField& x1) : QSqlField(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlIndex : public QSqlIndex {
    friend class N137;
public:
    LSqlIndex(uint u, const QString& x1 = QString(), const QString& x2 = QString()) : QSqlIndex(x1, x2), unique(u) {}
    LSqlIndex(uint u, const QSqlIndex& x1) : QSqlIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlQuery : public QSqlQuery {
    friend class N138;
public:
    LSqlQuery(uint u, QSqlResult* x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QString& x1 = QString(), QSqlDatabase x2 = QSqlDatabase()) : QSqlQuery(x1, x2), unique(u) {}
    LSqlQuery(uint u, QSqlDatabase x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QSqlQuery& x1) : QSqlQuery(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRecord : public QSqlRecord {
    friend class N139;
public:
    LSqlRecord(uint u) : unique(u) {}
    LSqlRecord(uint u, const QSqlRecord& x1) : QSqlRecord(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRelation : public QSqlRelation {
    friend class N140;
public:
    LSqlRelation(uint u) : unique(u) {}
    LSqlRelation(uint u, const QString& x1, const QString& x2, const QString& x3) : QSqlRelation(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlResult : public QSqlResult {
    friend class N141;
public:
    LSqlResult(uint u, const QSqlDriver* x1) : QSqlResult(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant handle() const { void* fun = LObjects::overrideFun(unique, 306); QVariant ret; if(fun) { ret = qVariantValue<QVariant>(callOverrideFun(fun, 306, 0)); } if(!fun || LObjects::call_default) { ret = QSqlResult::handle(); } return ret; }
    void bindValue(int x1, const QVariant& x2, QSql::ParamType x3) { void* fun = LObjects::overrideFun(unique, 418); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 418, args); } if(!fun || LObjects::call_default) { QSqlResult::bindValue(x1, x2, x3); }}
    QVariant data(int x1) { void* fun = LObjects::overrideFun(unique, 413); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 413, args)); } return ret; }
    bool exec() { void* fun = LObjects::overrideFun(unique, 97); bool ret = false; if(fun) { ret = callOverrideFun(fun, 97, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QSqlResult::exec(); } return ret; }
    bool fetch(int x1) { void* fun = LObjects::overrideFun(unique, 420); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 420, args).toBool(); } return ret; }
    bool fetchFirst() { void* fun = LObjects::overrideFun(unique, 421); bool ret = false; if(fun) { ret = callOverrideFun(fun, 421, 0).toBool(); } return ret; }
    bool fetchLast() { void* fun = LObjects::overrideFun(unique, 422); bool ret = false; if(fun) { ret = callOverrideFun(fun, 422, 0).toBool(); } return ret; }
    bool fetchNext() { void* fun = LObjects::overrideFun(unique, 423); bool ret = false; if(fun) { ret = callOverrideFun(fun, 423, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QSqlResult::fetchNext(); } return ret; }
    bool fetchPrevious() { void* fun = LObjects::overrideFun(unique, 424); bool ret = false; if(fun) { ret = callOverrideFun(fun, 424, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QSqlResult::fetchPrevious(); } return ret; }
    bool isNull(int x1) { void* fun = LObjects::overrideFun(unique, 425); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 425, args).toBool(); } return ret; }
    QVariant lastInsertId() const { void* fun = LObjects::overrideFun(unique, 426); QVariant ret; if(fun) { ret = qVariantValue<QVariant>(callOverrideFun(fun, 426, 0)); } if(!fun || LObjects::call_default) { ret = QSqlResult::lastInsertId(); } return ret; }
    int numRowsAffected() { void* fun = LObjects::overrideFun(unique, 427); int ret = 0; if(fun) { ret = callOverrideFun(fun, 427, 0).toInt(); } return ret; }
    bool prepare(const QString& x1) { void* fun = LObjects::overrideFun(unique, 428); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 428, args).toBool(); } if(!fun || LObjects::call_default) { ret = QSqlResult::prepare(x1); } return ret; }
    QSqlRecord record() const { void* fun = LObjects::overrideFun(unique, 429); QSqlRecord ret; if(fun) { ret = qVariantValue<QSqlRecord>(callOverrideFun(fun, 429, 0)); } if(!fun || LObjects::call_default) { ret = QSqlResult::record(); } return ret; }
    bool reset(const QString& x1) { void* fun = LObjects::overrideFun(unique, 430); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 430, args).toBool(); } return ret; }
    bool savePrepare(const QString& x1) { void* fun = LObjects::overrideFun(unique, 431); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 431, args).toBool(); } if(!fun || LObjects::call_default) { ret = QSqlResult::savePrepare(x1); } return ret; }
    void setActive(bool x1) { void* fun = LObjects::overrideFun(unique, 432); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 432, args); } if(!fun || LObjects::call_default) { QSqlResult::setActive(x1); }}
    void setAt(int x1) { void* fun = LObjects::overrideFun(unique, 433); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 433, args); } if(!fun || LObjects::call_default) { QSqlResult::setAt(x1); }}
    void setForwardOnly(bool x1) { void* fun = LObjects::overrideFun(unique, 434); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 434, args); } if(!fun || LObjects::call_default) { QSqlResult::setForwardOnly(x1); }}
    void setLastError(const QSqlError& x1) { void* fun = LObjects::overrideFun(unique, 315); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 315, args); } if(!fun || LObjects::call_default) { QSqlResult::setLastError(x1); }}
    void setQuery(const QString& x1) { void* fun = LObjects::overrideFun(unique, 435); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 435, args); } if(!fun || LObjects::call_default) { QSqlResult::setQuery(x1); }}
    void setSelect(bool x1) { void* fun = LObjects::overrideFun(unique, 436); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 436, args); } if(!fun || LObjects::call_default) { QSqlResult::setSelect(x1); }}
    int size() { void* fun = LObjects::overrideFun(unique, 122); int ret = 0; if(fun) { ret = callOverrideFun(fun, 122, 0).toInt(); } return ret; }
};

#endif
