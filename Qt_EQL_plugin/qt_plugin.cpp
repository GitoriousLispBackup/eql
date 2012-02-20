#include "qt_plugin.h"
#include "eql.h"

QT_BEGIN_NAMESPACE

static EQL* eql = 0;

// Both function names are self-exlpaining

void onLoadPlugin(QWidget* widget)
{
    eql = new EQL;
    eql->exec(widget, "ini.lisp");
}

void onUnloadPlugin()
{
    delete eql;
}

QT_END_NAMESPACE

