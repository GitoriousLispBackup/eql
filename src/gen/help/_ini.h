#ifndef INI_H
#define INI_H

#include <QtHelp>

#ifdef Q_WS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

typedef QList<int> NumList;

extern "C" {
    LIB_EXPORT void ini();
    LIB_EXPORT const QMetaObject* staticMetaObject(int);
    LIB_EXPORT void deleteNObject(int, void*);
    LIB_EXPORT NumList* override(const QByteArray&); }

#endif
