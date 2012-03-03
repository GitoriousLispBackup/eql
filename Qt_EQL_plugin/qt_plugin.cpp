#include "qt_plugin.h"
#include "eql.h"
#include <QTimer>

#define QSLOT(x) "1"#x

QT_BEGIN_NAMESPACE

void onShowPlugin(QWidget* widget)
{
    (new EQL)->exec(widget, "ini.lisp");
}

void onHidePlugin()
{
}

QT_END_NAMESPACE
