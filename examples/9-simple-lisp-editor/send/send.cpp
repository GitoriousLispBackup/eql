#include <QtCore>
#include <QtNetwork>
#include <QtDebug>

int main(int argc, char** argv) {
    QCoreApplication qapp(argc, argv);
    QLocalSocket socket;
    socket.connectToServer("EQL:simple-lisp-editor");
    socket.waitForConnected();
    QString exp(QCoreApplication::arguments().at(1));
    if(socket.isWritable()) {
        QString data(QString::number(exp.size()) + " " + exp);
        socket.write(data.toAscii());
        socket.waitForBytesWritten();
        while(true) {
            socket.waitForReadyRead();
            QString data(socket.readAll());
            qDebug() << data.section(' ', 2);
            if(":VALUES" == data.section(' ', 1, 1)) {
                break; }}}
    else {
        qWarning() << "[send] error:" << exp; }
    return 0; }

