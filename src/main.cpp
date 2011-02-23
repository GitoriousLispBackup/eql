// copyright (c) 2010-2011 Polos Ruetz

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
#ifdef Q_OS_WIN
        std::cout << "Usage: eql [-qgui] [-io] [file]" << std::endl;
#else
        std::cout << "Usage: eql [-qgui] [-qtpl] [-io] [file]" << std::endl;
#endif
        exit(0); }
    if(args.contains("-version") || args.contains("--version")) {
        std::cout << "EQL " << EQL::version << std::endl;
        exit(0); }

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(utf8);
    QTextCodec::setCodecForTr(utf8);

#ifdef Q_OS_WIN
    // necessary when using SLIME
    { QWidget ini; ini.setGeometry(0, 0, 0, 0); ini.show(); ini.close(); }
#endif

    EQL eql;
    eql.exec(args);

    return qapp.exec(); }
