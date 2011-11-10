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
Q_DECLARE_METATYPE(QTextDocumentFragment)
Q_DECLARE_METATYPE(QTextOption)

class EQL;
class DynObject;

// functions from EQL modules
typedef const QMetaObject* (*StaticMetaObject)(int);
typedef void (*DeleteNObject)(int, void*, int);
typedef NumList* (*Override)(const QByteArray&);
typedef void* (*ToMetaArg)(int, cl_object);
typedef cl_object (*To_lisp_arg)(int, void*);

class EQL_EXPORT LObjects {
public:
    static int T_GLenum;
    static int T_GLint;
    static int T_GLfloat;
    static int T_GLuint;
    static int T_QGLFormat;
    static int T_QGLFramebufferObjectFormat;
    static int T_QHostAddress;
    static int T_QHostInfo;
    static int T_QNetworkCacheMetaData;
    static int T_QNetworkInterface;
    static int T_QNetworkProxy;
    static int T_QNetworkRequest;
    static int T_QSslCertificate;
    static int T_QSslCipher;
    static int T_QSslConfiguration;
    static int T_QSslKey;
    static int T_QSqlDatabase;
    static int T_QSqlError;
    static int T_QSqlField;
    static int T_QSqlIndex;
    static int T_QSqlQuery;
    static int T_QSqlRecord;
    static int T_QSqlRelation;
    static int T_QWebElement;
    static int T_QWebElementCollection;
    static int T_QWebHitTestResult;

    static QObject** Q;
    static QObject** N;
    static bool call_default;
    static uint i_unique;
    static const char*** override_arg_types;
    static DynObject* dynObject;
    static EQL* eql;
    static QList<QByteArray> qNames;
    static QList<QByteArray> nNames;
    static QMap<QByteArray, int> q_names;
    static QMap<QByteArray, int> n_names;
    static QHash<QByteArray, uint> override_function_ids;
    static QHash<quint64, void*> override_lisp_functions;

    static void ini(EQL*);
    static uint unique() { return ++i_unique; }
    static void deleteNObject(int, void*, int = 0);
    static const QMetaObject* staticMetaObject(const QByteArray&, int n = -1);
    static const char* nObjectSuperClass(const QByteArray&);
    static StrList override(const QByteArray&);
    static void* overrideFun(uint, int);
    static void setOverrideFun(uint, int, void*);

    static QByteArray vanillaQtSuperClassName(const QMetaObject* mo) {
        QByteArray className(mo->className());
        while(!q_names.contains(className)) {
            mo = mo->superClass();
            if(!mo) {
                break; }
            className = mo->className(); }
        return className; }

    static StaticMetaObject staticMetaObject_help;
    static StaticMetaObject staticMetaObject_network;
    static StaticMetaObject staticMetaObject_opengl;
    static StaticMetaObject staticMetaObject_sql;
    static StaticMetaObject staticMetaObject_svg;
    static StaticMetaObject staticMetaObject_webkit;
    static DeleteNObject deleteNObject_help;
    static DeleteNObject deleteNObject_network;
    static DeleteNObject deleteNObject_opengl;
    static DeleteNObject deleteNObject_sql;
    static DeleteNObject deleteNObject_svg;
    static DeleteNObject deleteNObject_webkit;
    static Override override_help;
    static Override override_network;
    static Override override_opengl;
    static Override override_sql;
    static Override override_svg;
    static Override override_webkit;
    static ToMetaArg toMetaArg_network;
    static To_lisp_arg to_lisp_arg_network;
    static ToMetaArg toMetaArg_opengl;
    static To_lisp_arg to_lisp_arg_opengl;
    static ToMetaArg toMetaArg_sql;
    static To_lisp_arg to_lisp_arg_sql;
    static ToMetaArg toMetaArg_webkit;
    static To_lisp_arg to_lisp_arg_webkit;
};

#endif
