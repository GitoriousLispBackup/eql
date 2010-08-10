// copyright (c) 2010 power4projects software

#include <QApplication>
#include <QWidget>
#include <QStringList>
#include <QTextCodec>
#include <ecl/ecl.h>
#include "eql.h"
#include <iostream>

int main(int argc, char** argv) {

    cl_boot(1, argv);

    QApplication qapp(argc, argv);
    QStringList args(QCoreApplication::arguments());
    if(args.contains("-h") || (args.contains("--help"))) {
#ifdef Q_OS_WIN32
        std::cout << "Usage: eql [-qgui] [file]" << std::endl;
#else
        std::cout << "Usage: eql [-qgui | -qtpl] [file]" << std::endl;
#endif
        exit(0); }

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(utf8);
    QTextCodec::setCodecForTr(utf8);

#ifdef Q_OS_WIN32
    // necessary when using SLIME
    { QWidget ini; ini.setGeometry(0, 0, 0, 0); ini.show(); ini.close(); }
#endif

    EQL eql;
    eql.exec(args);

    return qapp.exec(); }
