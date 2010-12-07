#include <QApplication>
#include <QTextCodec>
#include <QSettings>
#include <QTranslator>
#include <ecl/ecl.h>
#include "eql.h"

extern "C" void ini_app(cl_object);

int main(int argc, char** argv) {

    cl_boot(1, argv);
    QApplication qapp(argc, argv);

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(utf8);
    QTextCodec::setCodecForTr(utf8);

    EQL eql;
    eql.exec(ini_app, "(START)", "EDITOR");

    return qapp.exec(); }
