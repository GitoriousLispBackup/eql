// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

class LSqlDatabase : public QSqlDatabase {
    friend class N135;
public:
    LSqlDatabase(uint u) : unique(u) {}
    LSqlDatabase(uint u, const QSqlDatabase& x1) : QSqlDatabase(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlError : public QSqlError {
    friend class N136;
public:
    LSqlError(uint u, const QString& x1 = QString(), const QString& x2 = QString(), ErrorType x3 = NoError, int x4 = -1) : QSqlError(x1, x2, x3, x4), unique(u) {}
    LSqlError(uint u, const QSqlError& x1) : QSqlError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlField : public QSqlField {
    friend class N137;
public:
    LSqlField(uint u, const QString& x1 = QString(), QVariant::Type x2 = QVariant::Invalid) : QSqlField(x1, x2), unique(u) {}
    LSqlField(uint u, const QSqlField& x1) : QSqlField(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlIndex : public QSqlIndex {
    friend class N138;
public:
    LSqlIndex(uint u, const QString& x1 = QString(), const QString& x2 = QString()) : QSqlIndex(x1, x2), unique(u) {}
    LSqlIndex(uint u, const QSqlIndex& x1) : QSqlIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlQuery : public QSqlQuery {
    friend class N139;
public:
    LSqlQuery(uint u, QSqlResult* x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QString& x1 = QString(), QSqlDatabase x2 = QSqlDatabase()) : QSqlQuery(x1, x2), unique(u) {}
    LSqlQuery(uint u, QSqlDatabase x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QSqlQuery& x1) : QSqlQuery(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRecord : public QSqlRecord {
    friend class N140;
public:
    LSqlRecord(uint u) : unique(u) {}
    LSqlRecord(uint u, const QSqlRecord& x1) : QSqlRecord(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRelation : public QSqlRelation {
    friend class N141;
public:
    LSqlRelation(uint u) : unique(u) {}
    LSqlRelation(uint u, const QString& x1, const QString& x2, const QString& x3) : QSqlRelation(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlResult : public QSqlResult {
    friend class N142;
public:

    static NumList overrideIds;
    uint unique;

    QVariant handle() const { quint64 id = LObjects::override_id(unique, 307); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = qVariantValue<QVariant>(callOverrideFun(fun, 307, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::handle(); } return ret; }
    void bindValue(int x1, const QVariant& x2, QSql::ParamType x3) { quint64 id = LObjects::override_id(unique, 422); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 422, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::bindValue(x1, x2, x3); }}
    QVariant data(int x1) { quint64 id = LObjects::override_id(unique, 417); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 417, args, id)); } return ret; }
    bool exec() { quint64 id = LObjects::override_id(unique, 98); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 98, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::exec(); } return ret; }
    bool fetch(int x1) { quint64 id = LObjects::override_id(unique, 424); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 424, args, id).toBool(); } return ret; }
    bool fetchFirst() { quint64 id = LObjects::override_id(unique, 425); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 425, 0, id).toBool(); } return ret; }
    bool fetchLast() { quint64 id = LObjects::override_id(unique, 426); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 426, 0, id).toBool(); } return ret; }
    bool fetchNext() { quint64 id = LObjects::override_id(unique, 427); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 427, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchNext(); } return ret; }
    bool fetchPrevious() { quint64 id = LObjects::override_id(unique, 428); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 428, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchPrevious(); } return ret; }
    bool isNull(int x1) { quint64 id = LObjects::override_id(unique, 429); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 429, args, id).toBool(); } return ret; }
    QVariant lastInsertId() const { quint64 id = LObjects::override_id(unique, 430); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = qVariantValue<QVariant>(callOverrideFun(fun, 430, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::lastInsertId(); } return ret; }
    int numRowsAffected() { quint64 id = LObjects::override_id(unique, 431); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 431, 0, id).toInt(); } return ret; }
    bool prepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 432); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 432, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::prepare(x1); } return ret; }
    QSqlRecord record() const { quint64 id = LObjects::override_id(unique, 433); void* fun = LObjects::overrideFun(id); QSqlRecord ret; if(fun && (LObjects::calling != id)) { ret = qVariantValue<QSqlRecord>(callOverrideFun(fun, 433, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::record(); } return ret; }
    bool reset(const QString& x1) { quint64 id = LObjects::override_id(unique, 434); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 434, args, id).toBool(); } return ret; }
    bool savePrepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 435); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 435, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::savePrepare(x1); } return ret; }
    void setActive(bool x1) { quint64 id = LObjects::override_id(unique, 436); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 436, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setActive(x1); }}
    void setAt(int x1) { quint64 id = LObjects::override_id(unique, 437); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 437, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setAt(x1); }}
    void setForwardOnly(bool x1) { quint64 id = LObjects::override_id(unique, 438); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 438, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setForwardOnly(x1); }}
    void setLastError(const QSqlError& x1) { quint64 id = LObjects::override_id(unique, 316); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 316, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setLastError(x1); }}
    void setQuery(const QString& x1) { quint64 id = LObjects::override_id(unique, 439); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 439, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setQuery(x1); }}
    void setSelect(bool x1) { quint64 id = LObjects::override_id(unique, 440); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 440, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setSelect(x1); }}
    int size() { quint64 id = LObjects::override_id(unique, 123); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 123, 0, id).toInt(); } return ret; }
};

QT_END_NAMESPACE

#endif
