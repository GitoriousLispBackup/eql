#include "plugin_widget.h"

QT_BEGIN_NAMESPACE

QObject* ini() {
    static QObject* cpp = 0;
    if(!cpp) {
        cpp = new CPP;
        cpp->setObjectName("webkit_bridge"); }
    return cpp; }

QT_END_NAMESPACE

