// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

typedef QList<int> NumList;

class LSvgGenerator : public QSvgGenerator {
    friend class N143;
public:
    LSvgGenerator(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(QPaintDevice::PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 373); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 373, args).toInt(); } return QSvgGenerator::metric(x1); }
};

#endif
