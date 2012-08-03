// copyright (c) 2010-2012 Polos Ruetz

#include <QApplication>
#include <QWidget>
#include <QStringList>
#include <QTextCodec>
#include <ecl/ecl.h>
#include "eql.h"
#include <iostream>

int main(int argc, char** argv) {

    EQL::ini(argv); // best initialized here

    QApplication qapp(argc, argv);
    QStringList args(QCoreApplication::arguments());
    if(args.contains("-h") || (args.contains("--help"))) {
        std::cout << "Usage: eql [file] [-qtpl] [-qgui] [-quic file.ui] [-slime]" << std::endl;
        exit(0); }
    if(args.contains("-v") || args.contains("--version")) {
        std::cout << "EQL " << EQL::version << std::endl;
        exit(0); }

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(utf8);
    QTextCodec::setCodecForTr(utf8);

#ifdef Q_OS_WIN
    // necessary when using Slime
    { QWidget ini; ini.setGeometry(0, 0, 0, 0); ini.show(); ini.close(); }
#endif

    EQL eql;
    std::cout << "*** EQL " << EQL::version << ", Qt " << qVersion() << " ***" << std::endl;
    eql.exec(args);

    EQL::eval("(with-simple-restart (restart-qexec \"Go back to QEXEC (only select this if it's the only option left).\")"
              "  (qexec))");

    return 0; }
