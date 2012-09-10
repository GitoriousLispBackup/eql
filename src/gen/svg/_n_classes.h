// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

class LSvgGenerator : public QSvgGenerator {
    friend class N150;
public:
    LSvgGenerator(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(QPaintDevice::PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 439); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 439, args).toInt(); } if(!fun || LObjects::call_default) { ret = QSvgGenerator::metric(x1); } return ret; }
};

QT_END_NAMESPACE

#endif
