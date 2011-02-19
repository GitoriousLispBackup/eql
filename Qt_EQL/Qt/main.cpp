// original copyright:
//
// ** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
// ** You may use this file under the terms of the BSD license

#include <QtGui>
#include "trafficlight.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    TrafficLight widget;
    widget.resize(110, 300);
    widget.show();

    return app.exec();
}
