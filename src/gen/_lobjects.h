#ifndef LOBJECTS_H
#define LOBJECTS_H

#include "../eql_global.h"
#include <QtGui>
#include <ecl/ecl.h>

typedef QList<int>        NumList;
typedef QList<QByteArray> StrList;

Q_DECLARE_METATYPE(QFileInfo)
Q_DECLARE_METATYPE(QItemSelection)
Q_DECLARE_METATYPE(QList<QAction*>)
Q_DECLARE_METATYPE(QList<QByteArray>)
Q_DECLARE_METATYPE(QModelIndex)
Q_DECLARE_METATYPE(QModelIndexList)
Q_DECLARE_METATYPE(QPainterPath)
Q_DECLARE_METATYPE(QStyleOptionViewItem)
Q_DECLARE_METATYPE(QTableWidgetSelectionRange)
Q_DECLARE_METATYPE(QTextBlock)
Q_DECLARE_METATYPE(QTextCharFormat)
Q_DECLARE_METATYPE(QTextCursor)

class EQL;
class DynObject;

// functions from EQL modules
typedef const QMetaObject* (*StaticMetaObject)(int);
typedef void (*DeleteNObject)(int, void*);
typedef NumList* (*Override)(const QByteArray&);
typedef void* (*ToMetaArg)(int, cl_object);
typedef cl_object (*To_lisp_arg)(int, void*);

class EQL_EXPORT LObjects {
public:
    static int T_QNetworkRequest;
    static int T_GLfloat;
    static int T_GLint;
    static int T_GLuint;

    static QObject** Q;
    static QObject** N;
    static uint i_unique;
    static const char*** override_arg_types;
    static DynObject* dynObject;
    static EQL* eql;
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
    static const QMetaObject* staticMetaObject(const QByteArray&, int n = -1);
    static const char* nObjectSuperClass(const QByteArray&);
    static StrList override(const QByteArray&);
    static void* overrideFun(uint, int);
    static void setOverrideFun(uint, int, void*);

    static StaticMetaObject staticMetaObject_help;
    static StaticMetaObject staticMetaObject_network;
    static StaticMetaObject staticMetaObject_opengl;
    static StaticMetaObject staticMetaObject_svg;
    static DeleteNObject deleteNObject_help;
    static DeleteNObject deleteNObject_network;
    static DeleteNObject deleteNObject_opengl;
    static DeleteNObject deleteNObject_svg;
    static Override override_help;
    static Override override_network;
    static Override override_opengl;
    static Override override_svg;
    static ToMetaArg toMetaArg_network;
    static To_lisp_arg to_lisp_arg_network;
    static ToMetaArg toMetaArg_opengl;
    static To_lisp_arg to_lisp_arg_opengl;
};

#endif
