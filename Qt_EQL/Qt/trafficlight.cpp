// original copyright:
//
// ** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
// ** You may use this file under the terms of the BSD license

#include "trafficlight.h"

void LightWidget::paintEvent(QPaintEvent *)
{
    if (!m_on)
        return;

    // [EQL] example with no return value
    //
    eql_fun("trafficlight:paint-event", // package:function
            Q_ARG(QWidget*, this),      // arguments (max. 10)
            Q_ARG(QColor, m_color),
            Q_ARG(int, width()),
            Q_ARG(int, height()));

    // [EQL] example with return value
    /*
    QVariant ret =
    eql_fun("my-package:my-function",
            QVariant::String,          // see ecl_fun.cpp:toQVariant() for all return types
            Q_ARG(QStringList, list)); // see ecl_fun.cpp:to_lisp_arg() for all arg types
    */

    // original implementation
    /*
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(m_color);
    painter.drawEllipse(0, 0, width(), height());
    */
}

