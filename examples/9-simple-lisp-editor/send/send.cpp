#include <QtCore>
#include <QtNetwork>
#include <QtDebug>

int main(int argc, char** argv) {
    QCoreApplication qapp(argc, argv);
    QLocalSocket socket;
    socket.connectToServer("EQL:simple-lisp-editor");
    QString exp(QCoreApplication::arguments().at(1));
    if(socket.isWritable()) {
        QString data(QString::number(exp.size()) + " " + exp);
        socket.write(data.toAscii());
        socket.waitForBytesWritten();
        qDebug() << "[send]" << data; }
    else {
        qWarning() << "[send] error:" << exp; }
    return 0; }

