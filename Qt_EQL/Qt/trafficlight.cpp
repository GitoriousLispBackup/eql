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
    eql_fun("trafficlight:paint-event", // package:function
            QVariant::String,           // return type
            Q_ARG(QWidget*, this),      // arguments (max. 10)
            Q_ARG(QColor, m_color),
            Q_ARG(int, width()),
            Q_ARG(int, height()));
    */

    // original implementation
    /*
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(m_color);
    painter.drawEllipse(0, 0, width(), height());
    */
}
