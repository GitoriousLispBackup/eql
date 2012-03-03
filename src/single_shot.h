// Copyright of "qtimer.h":

/****************************************************************************
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
****************************************************************************/

// modified 2012 Polos Ruetz

#ifndef SINGLE_SHOT_H
#define SINGLE_SHOT_H

#include <QObject>

QT_BEGIN_NAMESPACE

class SingleShot : public QObject {
    Q_OBJECT
public:
    SingleShot(int, void*);
    ~SingleShot();

    static void start(int, void*);

    int timerId;
    void* function;
    void timerEvent(QTimerEvent*);
};

QT_END_NAMESPACE

#endif
