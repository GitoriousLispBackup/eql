// copyright (c) 2010 power4projects software

#ifndef EQL_H
#define EQL_H

#include <QObject>
#include <QStringList>
#include <QtDebug>

#define QSLOT(x) "1"#x

class EQL : public QObject {
    Q_OBJECT
public:
    EQL();
    ~EQL();

    static bool ini;
    static QString home();

    void *fun;
    void exec(const QStringList&);

public Q_SLOTS:
    void singleShot();
};

#endif
