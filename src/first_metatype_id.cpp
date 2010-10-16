// Try to be similar to EQL shared library, so include <QtGui>

#include <QtGui>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QFile f("first_metatype_id.h");
    if(f.open(QIODevice::WriteOnly)) {
        typedef int* dummy;
        f.write(QString("%1,").arg(qRegisterMetaType<dummy>("dummy") - 1).toAscii()); }
    return 0; }
