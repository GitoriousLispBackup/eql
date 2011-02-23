#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

TO_QT_TYPE_PTR(QNetworkRequest, qnetworkrequest)

void ini2() {
    LObjects::T_QNetworkRequest = qRegisterMetaType<QNetworkRequest>("QNetworkRequest"); }

void* toMetaArg(int n, cl_object l_arg) {
    void* p = 0;
    if(LObjects::T_QNetworkRequest == n) { p = new QNetworkRequest(*toQNetworkRequestPointer(l_arg)); }
    return p; }

cl_object to_lisp_arg(int n, void* p) {
    cl_object l_ret = Cnil;
    if(LObjects::T_QNetworkRequest == n) { l_ret = from_qnetworkrequest(*(QNetworkRequest*)p); }
    return l_ret; }

#endif
