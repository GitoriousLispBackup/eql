#ifndef INI_H
#define INI_H

#include "../../ecl_fun.h"
#include <QtOpenGL>

#ifdef Q_WS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

typedef QList<int> NumList;

extern "C" {
    LIB_EXPORT void ini();
    LIB_EXPORT const QMetaObject* staticMetaObject(int);
    LIB_EXPORT void deleteNObject(int, void*, int);
    LIB_EXPORT NumList* override(const QByteArray&);
    LIB_EXPORT void* toMetaArg(int, cl_object);
    LIB_EXPORT cl_object to_lisp_arg(int, void*); }

#endif
