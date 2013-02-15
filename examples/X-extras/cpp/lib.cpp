#include "lib.h"
#include "../../../src/eql_fun.h"

QT_BEGIN_NAMESPACE

static qreal easingFunction(qreal progress)
{
    // see "../move-blocks.lisp"
    return eql_fun("eql-user::custom-easing-function", QVariant::Double,
                   Q_ARG(qreal, progress)).toDouble();
}

QObject* ini()
{
    static CPP* cpp = 0; if(!cpp) cpp = new CPP;

    cpp->curve = new QEasingCurve(QEasingCurve::Custom);
    cpp->curve->setCustomType(easingFunction);

    return cpp;
}

QT_END_NAMESPACE
