// copyright (c) 2011 Polos Ruetz
// see Qt_EQL example

#include <QtGui>
#include <ecl/ecl.h>
#include "qt_eql.h"
#include "ecl_fun.h"
#include "eql.h"

#define PUSH_ARG(x, list) list = CONS(to_lisp_arg(qMakePair(QByteArray(x.name()), x.data())), list)

static QHash<QByteArray, void*> lisp_functions;

static QVariant eql_fun2(const QByteArray& pkgFun,
                         QVariant::Type retType,
                         const QGenericArgument& a1, const QGenericArgument& a2, const QGenericArgument& a3, const QGenericArgument& a4, const QGenericArgument& a5,
                         const QGenericArgument& a6, const QGenericArgument& a7, const QGenericArgument& a8, const QGenericArgument& a9, const QGenericArgument& a10) {
    static void* symbol = 0; // avoid GCC warning about clobbering (longjmp)
    symbol = lisp_functions.value(pkgFun);
    if(!symbol) {
        int p1 = pkgFun.indexOf(':');
        int p2 = pkgFun.lastIndexOf(':');
        QByteArray pkg = (p1 == -1) ? "cl-user" : pkgFun.left(p1);
        QByteArray fun = pkgFun.mid((p2 == -1) ? pkgFun.length() : (p2 + 1));
        cl_object l_sym = cl_find_symbol(2,
                                         make_constant_base_string(fun.toUpper().constData()),
                                         cl_find_package(make_constant_base_string(pkg.toUpper().constData())));
        if(l_sym != Cnil) {
            symbol = (void*)l_sym;
            lisp_functions[pkgFun] = symbol; }}
    cl_object l_args = Cnil;
    if(a1.name()) { PUSH_ARG(a1, l_args);
        if(a2.name()) { PUSH_ARG(a2, l_args);
            if(a3.name()) { PUSH_ARG(a3, l_args);
                if(a4.name()) { PUSH_ARG(a4, l_args);
                    if(a5.name()) { PUSH_ARG(a5, l_args);
                        if(a6.name()) { PUSH_ARG(a6, l_args);
                            if(a7.name()) { PUSH_ARG(a7, l_args);
                                if(a8.name()) { PUSH_ARG(a8, l_args);
                                    if(a9.name()) { PUSH_ARG(a9, l_args);
                                        if(a10.name()) { PUSH_ARG(a10, l_args); }}}}}}}}}}
    l_args = cl_nreverse(l_args);
    QVariant ret;
    if(symbol) {
        cl_object l_ret = Cnil;
// MSVC users:
// currently I'm stuck here, because MSVC complains about something I don't currently understand...
#ifndef Q_CC_MSVC
        CL_CATCH_ALL_BEGIN(ecl_process_env()) {
#endif
            l_ret = cl_apply(2, (cl_object)symbol, l_args);
#ifndef Q_CC_MSVC
        } CL_CATCH_ALL_END;
#endif
        if(retType != QVariant::UserType) {
            ret = toQVariant(l_ret, 0, retType); }
        return ret; }
    error_msg(QString("eql_fun(): %1").arg(QString(pkgFun)).toAscii().constData(), l_args);
    return ret; }

QVariant eql_fun(const QByteArray& fun,
                 QGenericArgument a1, QGenericArgument a2, QGenericArgument a3, QGenericArgument a4, QGenericArgument a5,
                 QGenericArgument a6, QGenericArgument a7, QGenericArgument a8, QGenericArgument a9, QGenericArgument a10) {
    return eql_fun2(fun, QVariant::UserType, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }


QVariant eql_fun(const QByteArray& fun,
                 QVariant::Type retType,
                 QGenericArgument a1, QGenericArgument a2, QGenericArgument a3, QGenericArgument a4, QGenericArgument a5,
                 QGenericArgument a6, QGenericArgument a7, QGenericArgument a8, QGenericArgument a9, QGenericArgument a10) {
    return eql_fun2(fun, retType, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }
