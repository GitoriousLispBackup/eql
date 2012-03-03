// Copyright of "qtimer.cpp":

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

#include "single_shot.h"
#include <QAbstractEventDispatcher>
#include <ecl/ecl.h>

QT_BEGIN_NAMESPACE

void SingleShot::start(int msec, void* function) {
    (void)new SingleShot(msec, function); }

SingleShot::SingleShot(int msec, void* fun)
    : QObject(QAbstractEventDispatcher::instance()), function(fun) {
    timerId = startTimer(msec); }

SingleShot::~SingleShot() {
    if(timerId > 0) {
        killTimer(timerId); }}

extern void qDeleteInEventHandler(QObject*);

void SingleShot::timerEvent(QTimerEvent*) {
    if(timerId > 0) {
        killTimer(timerId); }
    timerId = -1;
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        cl_funcall(1, (cl_object)function); }
    CL_CATCH_ALL_END;
    qDeleteInEventHandler(this); }

QT_END_NAMESPACE
