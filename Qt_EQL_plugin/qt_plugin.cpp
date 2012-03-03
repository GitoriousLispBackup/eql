#include "qt_plugin.h"
#include "eql.h"
#include <QTimer>

#define QSLOT(x) "1"#x

QT_BEGIN_NAMESPACE

void onShowPlugin(QWidget* widget)
{
    static EQL* eql = 0;
    if(!eql) {
        eql = new EQL;
        eql->exec(widget, "ini.lisp");
    }
}

void onHidePlugin()
{
}

QT_END_NAMESPACE
