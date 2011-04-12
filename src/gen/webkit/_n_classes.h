// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

typedef QList<int> NumList;

class LWebDatabase : public QWebDatabase {
    friend class N183;
public:
    LWebDatabase(uint u, const QWebDatabase& x1) : QWebDatabase(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWebElement : public QWebElement {
    friend class N184;
public:
    LWebElement(uint u) : unique(u) {}
    LWebElement(uint u, const QWebElement& x1) : QWebElement(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWebElementCollection : public QWebElementCollection {
    friend class N185;
public:
    LWebElementCollection(uint u) : unique(u) {}
    LWebElementCollection(uint u, const QWebElement& x1, const QString& x2) : QWebElementCollection(x1, x2), unique(u) {}
    LWebElementCollection(uint u, const QWebElementCollection& x1) : QWebElementCollection(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWebHistoryItem : public QWebHistoryItem {
    friend class N187;
public:
    LWebHistoryItem(uint u, const QWebHistoryItem& x1) : QWebHistoryItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWebHitTestResult : public QWebHitTestResult {
    friend class N188;
public:
    LWebHitTestResult(uint u) : unique(u) {}
    LWebHitTestResult(uint u, const QWebHitTestResult& x1) : QWebHitTestResult(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWebSecurityOrigin : public QWebSecurityOrigin {
    friend class N189;
public:
    LWebSecurityOrigin(uint u, const QWebSecurityOrigin& x1) : QWebSecurityOrigin(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

#endif
