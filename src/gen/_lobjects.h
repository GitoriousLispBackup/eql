#ifndef LOBJECTS_H
#define LOBJECTS_H

#include "../eql_global.h"
#include "../ecl_fun.h"
#include <QtGui>
#include <ecl/ecl.h>

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

QT_BEGIN_NAMESPACE

typedef QList<int>        NumList;
typedef QList<QByteArray> StrList;

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
    static quint64 calling;
    static QList<quint64> callingList;
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
    static void cleanUp();
    static uint unique() { return ++i_unique; } // safe: e.g. on 32 bit, 100 new QT-OBJECTs/sec would take more than one year to overflow
    static void deleteNObject(int, void*, int = 0);
    static const QMetaObject* staticMetaObject(const QByteArray&, int n = 0);
    static const char* nObjectSuperClass(const QByteArray&);
    static StrList overrideFunctions(const QByteArray&);
    static quint64 override_id(uint, int);
    static void* overrideFun(quint64);
    static void setOverrideFun(quint64, void*);

    static QByteArray vanillaQtSuperClassName(const QMetaObject* mo) {
        QByteArray className(mo->className());
        while(!q_names.contains(className)) {
            mo = mo->superClass();
            if(!mo) {
                break; }
            className = mo->className(); }
        return className; }

    // for Qt_EQL, see "eql_fun.h"
    static bool checkType(int id, const QByteArray& name) {
        QByteArray name2(name.left(qMax(0, name.length() - 1)));
        if(name.endsWith('*')
        && ((id > 0) ? (id == q_names.value(name2)) : (-id == n_names.value(name2)))) {
            return true; }
        error_msg(QString("eql_fun(): wanted Q_PTR(%1*, x), found Q_PTR(%2, x)")
                          .arg(QString((id > 0) ? q_names.key(id) : n_names.key(-id)))
                          .arg(QString(name))
                          .toAscii().constData(),
                  Cnil);
        return false; }

    static StaticMetaObject staticMetaObject_help;
    static StaticMetaObject staticMetaObject_network;
    static StaticMetaObject staticMetaObject_opengl;
    static StaticMetaObject staticMetaObject_sql;
    static StaticMetaObject staticMetaObject_svg;
    static StaticMetaObject staticMetaObject_test;
    static StaticMetaObject staticMetaObject_webkit;
    static DeleteNObject deleteNObject_help;
    static DeleteNObject deleteNObject_network;
    static DeleteNObject deleteNObject_opengl;
    static DeleteNObject deleteNObject_sql;
    static DeleteNObject deleteNObject_svg;
    static DeleteNObject deleteNObject_test;
    static DeleteNObject deleteNObject_webkit;
    static Override override_help;
    static Override override_network;
    static Override override_opengl;
    static Override override_sql;
    static Override override_svg;
    static Override override_test;
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

QT_END_NAMESPACE

#endif
