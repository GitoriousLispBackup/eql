#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include <QtGui>

TO_QT_TYPE_PTR(QWebElement, qwebelement)
TO_QT_TYPE_PTR(QWebElementCollection, qwebelementcollection)
TO_QT_TYPE_PTR(QWebHitTestResult, qwebhittestresult)

void ini2() {
    LObjects::T_QWebElement =           qRegisterMetaType<QWebElement>("QWebElement");
    LObjects::T_QWebElementCollection = qRegisterMetaType<QWebElementCollection>("QWebElementCollection");
    LObjects::T_QWebHitTestResult =     qRegisterMetaType<QWebHitTestResult>("QWebHitTestResult"); }

void* toMetaArg(int n, cl_object l_arg) {
    void* p = 0;
    if(LObjects::T_QWebElement == n)                { p = new QWebElement(*toQWebElementPointer(l_arg)); }
    else if(LObjects::T_QWebElementCollection == n) { p = new QWebElementCollection(*toQWebElementCollectionPointer(l_arg)); }
    else if(LObjects::T_QWebHitTestResult == n)     { p = new QWebHitTestResult(*toQWebHitTestResultPointer(l_arg)); }
    return p; }

cl_object to_lisp_arg(int n, void* p) {
    cl_object l_ret = Cnil;
    if(LObjects::T_QWebElement == n)                { l_ret = from_qwebelement(*(QWebElement*)p); }
    else if(LObjects::T_QWebElementCollection == n) { l_ret = from_qwebelementcollection(*(QWebElementCollection*)p); }
    else if(LObjects::T_QWebHitTestResult == n)     { l_ret = from_qwebhittestresult(*(QWebHitTestResult*)p); }
    return l_ret; }

#endif
