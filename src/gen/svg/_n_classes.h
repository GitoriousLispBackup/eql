// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

class LSvgGenerator : public QSvgGenerator {
    friend class N149;
public:
    LSvgGenerator(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(QPaintDevice::PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 438); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 438, args).toInt(); } if(!fun || LObjects::call_default) { ret = QSvgGenerator::metric(x1); } return ret; }
};

#endif
