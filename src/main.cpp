// copyright (c) 2010 power4projects software

#include <QApplication>
#include <QWidget>
#include <QTranslator>
#include <QStringList>
#include <ecl/ecl.h>
#include "eql.h"
#include <iostream>

int main(int argc, char **argv) {

//  (1)
    cl_boot(1, argv);

//  (2)
    QApplication qapp(argc, argv);
    QStringList args(QCoreApplication::arguments());
    if(args.contains("-h") || (args.contains("--help"))) {
        std::cout << "Usage: eql [-qgui | -qtpl | file] [-lang xx]" << std::endl;
        exit(0); }
#ifdef Q_OS_WIN32
    // necessary when using SLIME
    { QWidget ini; ini.setGeometry(0, 0, 0, 0); ini.show(); ini.close(); }
#endif

//  (3)
    QTranslator tr, trQt;
    int i = args.indexOf("-lang");
    if(i != -1) {
        args.removeAt(i);
        if(args.size() > i) {
            QString lang(args.at(i));
            args.removeAt(i);
            if(tr.load("eql_" + lang)) {
                qapp.installTranslator(&tr);
                if(trQt.load("qt_" + lang)) {
                    qapp.installTranslator(&trQt); }}}}

//  (4)
    EQL eql(args);

    return qapp.exec(); }
