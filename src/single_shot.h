// copyright (c) 2012 Polos Ruetz ; idea from QTimer::singleShot()

#ifndef SINGLE_SHOT_H
#define SINGLE_SHOT_H

#include <QObject>
#include <ecl/ecl.h>

QT_BEGIN_NAMESPACE

struct SingleShot : public QObject { // C++ is simple and concise ;)
    int id;
    void* function;

    SingleShot(int msec, void* fun) : id(startTimer(msec)), function(fun) {}

    void timerEvent(QTimerEvent*) {
        killTimer(id);
        CL_CATCH_ALL_BEGIN(ecl_process_env()) {
	    cl_funcall(1, (cl_object)function); } CL_CATCH_ALL_END;
        delete this; }
};

QT_END_NAMESPACE

#endif
