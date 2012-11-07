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
        qapp.processEvents();
        socket.waitForBytesWritten();
        while(true) {
            qapp.processEvents();
            socket.waitForReadyRead();
            QString data(socket.readAll());
            QString type(data.section(' ', 1, 1));
            if(!(":EXPRESSION" == type)) {
                QString print(data.section(' ', 2).trimmed());
                if(!print.isEmpty()) {
                    qDebug("%s", qPrintable(print)); }
                if(":VALUES" == type) {
                    return 0; }}}}
    else {
        qWarning() << "[send] error:" << exp; }
    return -1; }

