// copyright (c) 2010-2012 Polos Ruetz

#include <QApplication>
#include <QWidget>
#include <QStringList>
#include <QTextCodec>
#include <ecl/ecl.h>
#include "eql.h"
#include <iostream>

int catch_all_qexec() {
    int ret = 0;
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        ret = QApplication::exec(); }
    CL_CATCH_ALL_END;
    return ret; }

int main(int argc, char** argv) {

    EQL::ini(argv);

    QApplication qapp(argc, argv);
    QStringList args(QCoreApplication::arguments());
    if(args.contains("-h") || (args.contains("--help"))) {
#ifdef Q_OS_WIN
        std::cout << "Usage: eql [-qgui] [-slime] [file]" << std::endl;
#else
        std::cout << "Usage: eql [-qgui] [-qtpl] [-slime] [file]" << std::endl;
#endif
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
    eql.exec(args);

    return catch_all_qexec(); }
