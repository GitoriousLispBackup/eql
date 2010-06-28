// copyright (c) 2010 power4projects software

#ifndef EQL_H
#define EQL_H

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <ecl/ecl.h>
#include "eql_global.h"

#define QSLOT(x) "1"#x

typedef void (*lisp_ini)(cl_object);

class EQL_EXPORT EQL : public QObject {
    Q_OBJECT
public:
    EQL();
    ~EQL();

    static bool ini;
    static QString home();

    void* fun;
    void exec(const QStringList&);
    void exec(lisp_ini, const QByteArray&, const QByteArray& = "CL-USER");

public Q_SLOTS:
    void singleShot();
};

#endif
