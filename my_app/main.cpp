#include <QApplication>
#include <QTextCodec>
#include <QSettings>
#include <QTranslator>
#include <ecl/ecl.h>
#include "eql.h"

extern "C" void ini_app(cl_object);

int catch_all_qexec() {
    int ret = 0;
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        ret = QApplication::exec(); }
    CL_CATCH_ALL_END;
    return ret; }

int main(int argc, char** argv) {

    cl_boot(1, argv);
    QApplication qapp(argc, argv);

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(utf8);
    QTextCodec::setCodecForTr(utf8);

    // hint: use QSettings or similar to store your language settings
    QString language("es"); // example: spanish
    QTranslator tr, trQt;
    if(tr.load("eql_" + language)) {
        qapp.installTranslator(&tr);
        if(trQt.load("qt_" + language)) {
            qapp.installTranslator(&trQt); }}

    EQL eql;
    eql.exec(ini_app,    // see make-my-lib.lisp
             "(start)",  // the initial form to be evaluated
             "example"); // your package name

    return catch_all_qexec(); } // closing the main/last window will quit the program
