#include <QApplication>
#include <QTextCodec>
#include <ecl/ecl.h>
#include "eql.h"

#include "Qt/trafficlight.h"

int main(int argc, char** argv) {

    cl_boot(1, argv);
    QApplication qapp(argc, argv);

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(utf8);
    QTextCodec::setCodecForTr(utf8);

    EQL eql;
    TrafficLight trafficlight;

    eql.exec(&trafficlight,       // main Qt class
             "EQL/trafficlight"); // Lisp file to load

    trafficlight.resize(110, 300);
    trafficlight.show();

    return qapp.exec(); }
