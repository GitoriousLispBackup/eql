#ifndef EQL_OBJECTS_H
#define EQL_OBJECTS_H

#include <QtGui>

typedef QList<int>        NumList;
typedef QList<QByteArray> StrList;

Q_DECLARE_METATYPE(QModelIndex)
Q_DECLARE_METATYPE(QModelIndexList)
Q_DECLARE_METATYPE(QPainterPath)
Q_DECLARE_METATYPE(QStyleOptionViewItem)
Q_DECLARE_METATYPE(QTableWidgetSelectionRange)

class EQL;
class DynObject;

class Objects {
public:
    static QObject **Q;
    static QObject **N;
    static uint i_unique;
    static char ***override_arg_types;
    static DynObject *dynObject;
    static EQL *eql;
    static QList<QByteArray> qNames;
    static QList<QByteArray> nNames;
    static QMap<QByteArray, int> q_names;
    static QMap<QByteArray, int> n_names;
    static QHash<QString, uint> ui_unique;
    static QHash<QByteArray, uint> override_function_ids;
    static QHash<quint64, void*> override_lisp_functions;

    static void ini(EQL*);
    static uint unique() { return ++i_unique; }
    static void deleteNObject(int, void*);
    static const QMetaObject *staticMetaObject(const QByteArray&, int n = -1);
    static const char *nObjectSuperClass(const QByteArray&);
    static StrList override(const QByteArray&);
    static void *overrideFun(uint, int);
    static void setOverrideFun(uint, const QByteArray&, void*);
};

#endif
