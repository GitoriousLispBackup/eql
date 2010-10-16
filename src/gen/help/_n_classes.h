// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

class LHelpContentItem : public QHelpContentItem {
    friend class N70;
public:

    static NumList overrideIds;
    uint unique;
};

class LHelpSearchQuery : public QHelpSearchQuery {
    friend class N72;
public:
    LHelpSearchQuery(uint u) : unique(u) {}
    LHelpSearchQuery(uint u, FieldName x1, const QStringList& x2) : QHelpSearchQuery(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

#endif