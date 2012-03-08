// copyright (c) 2010-2012 Polos Ruetz

#ifndef UI_LOADER_H
#define UI_LOADER_H

#include <QUiLoader>
#include "gen/_lobjects.h"

QT_BEGIN_NAMESPACE

struct UiLoader : public QUiLoader {
    QWidget* createWidget(const QString& name, QWidget* par, const QString& objName) {
        QWidget* w = 0;
        int id = LObjects::q_names.value(name.toAscii(), -1);
        if(id != -1) {
            // qt_metacall to base constructor "C(uint)"
            QObject* caller = LObjects::Q[id - 1];
            const QMetaObject* mo = caller->metaObject();
            int n = mo->indexOfMethod("C(uint)");
            if(n != -1) {
                QMetaMethod mm(mo->method(n));
                void* args[] = { 0, 0 };
                void* pointer = 0;
                args[0] = &pointer; // return value
                uint unique = LObjects::unique();
                args[1] = &unique;
                caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                if(pointer) {
                    w = (QWidget*)pointer;
                    if(par) {
                        w->setParent(par); }
                    w->setProperty("EQL.unique", unique);
                    w->setObjectName(objName); }}
            else {
                // fallback
                w = QUiLoader::createWidget(name, par, objName); }}
        return w; }
};

QT_END_NAMESPACE

#endif
