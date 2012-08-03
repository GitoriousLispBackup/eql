#include <QApplication>
#include <QTextCodec>
#include <ecl/ecl.h>
#include "eql.h"

#include "Qt/trafficlight.h"

int main(int argc, char** argv) {

    EQL::ini(argv); // best initialized here

    QApplication qapp(argc, argv);

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(utf8);
    QTextCodec::setCodecForTr(utf8);

    EQL eql;
    TrafficLight trafficlight;

#ifdef SLIME
  #ifdef Q_OS_WIN
    // necessary when using Slime
    { QWidget ini; ini.setGeometry(0, 0, 0, 0); ini.show(); ini.close(); }
  #endif
    eql.exec(&trafficlight,                          // main Qt class
             EQL::home() + "EQL/trafficlight",       // Lisp file to load
             EQL::home() + "~/eql/slime/repl-hook"); // whole path to hook file
    return 0;
#else
    eql.exec(&trafficlight,       // main Qt class
             "EQL/trafficlight"); // Lisp file to load
    return qapp.exec();
#endif

}
