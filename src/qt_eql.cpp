// copyright (c) 2011 Polos Ruetz
// see Qt_EQL example

#include <QtGui>
#include <ecl/ecl.h>
#include "qt_eql.h"
#include "ecl_fun.h"

#define LISP_ARG(x) to_lisp_arg(qMakePair(QByteArray(x.name()), x.data()))

static QHash<QByteArray, void*> lisp_symbols;

bool eql_fun(const QByteArray& function,
             QGenericArgument a1, QGenericArgument a2, QGenericArgument a3, QGenericArgument a4, QGenericArgument a5,
             QGenericArgument a6, QGenericArgument a7, QGenericArgument a8, QGenericArgument a9, QGenericArgument a10) {
    void* symbol = lisp_symbols.value(function);
    if(!symbol) {
        int p1 = function.indexOf(':');
        int p2 = function.lastIndexOf(':');
        QByteArray pkg = (p1 == -1) ? "cl-user" : function.left(p1);
        QByteArray fun = function.mid((p2 == -1) ? function.length() : (p2 + 1));
        cl_object l_sym = cl_find_symbol(2,
                                         make_constant_base_string(fun.toUpper().constData()),
                                         cl_find_package(make_constant_base_string(pkg.toUpper().constData())));
        if(l_sym != Cnil) {
            symbol = (void*)l_sym;
            lisp_symbols[function] = symbol; }}
    cl_object l_args = Cnil;
    if(a1.name()) {
        l_args = CONS(LISP_ARG(a1), l_args);
        if(a2.name()) {
            l_args = CONS(LISP_ARG(a2), l_args);
            if(a3.name()) {
                l_args = CONS(LISP_ARG(a3), l_args);
                if(a4.name()) {
                    l_args = CONS(LISP_ARG(a4), l_args);
                    if(a5.name()) {
                        l_args = CONS(LISP_ARG(a5), l_args);
                        if(a6.name()) {
                            l_args = CONS(LISP_ARG(a6), l_args);
                            if(a7.name()) {
                                l_args = CONS(LISP_ARG(a7), l_args);
                                if(a8.name()) {
                                    l_args = CONS(LISP_ARG(a8), l_args);
                                    if(a9.name()) {
                                        l_args = CONS(LISP_ARG(a9), l_args);
                                        if(a10.name()) {
                                            l_args = CONS(LISP_ARG(a10), l_args); }}}}}}}}}}
    l_args = cl_nreverse(l_args);
    if(symbol) {
        cl_object l_fun = cl_symbol_function((cl_object)symbol);
        if(l_fun != Cnil) {
            cl_apply(2, l_fun, l_args);
            return true; }}
    error_msg(QString("eql_fun(): %1").arg(QString(function)).toAscii().constData(), l_args);
    return false; }

bool eql_fun(const QByteArray& fun,
             QGenericReturnArgument ret,
             QGenericArgument a1, QGenericArgument a2, QGenericArgument a3, QGenericArgument a4, QGenericArgument a5,
             QGenericArgument a6, QGenericArgument a7, QGenericArgument a8, QGenericArgument a9, QGenericArgument a10) {
    // TODO
    return false; }
