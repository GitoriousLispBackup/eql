#include <QApplication>
#include <QSettings>
#include <QTranslator>
#include <ecl/ecl.h>
#include "eql.h"

extern "C" void ini_app(cl_object);

int main(int argc, char **argv) {

    cl_boot(1, argv);
    QApplication qapp(argc, argv);

    // hint: use QSettings or similar to store your language settings
    QString language("es"); // example: spanish
    QTranslator tr, trQt;
    if(tr.load("eql_" + language)) {
        qapp.installTranslator(&tr);
        if(trQt.load("qt_" + language)) {
            qapp.installTranslator(&trQt); }}

    EQL eql;
    eql.exec(ini_app,     // see make-my-lib.lisp
             "(START)",   // the initial form to be evaluated
             "EXAMPLE");  // your package name

    return qapp.exec(); } // closing the main/last window will quit the program
