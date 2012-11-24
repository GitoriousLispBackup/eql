#ifndef EQL_CLIENT_H
#define EQL_CLIENT_H

#include <QtCore>
#include <QtNetwork>
#include <QtDebug>

#ifdef Q_WS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

extern "C" {
    LIB_EXPORT const char* send(const char*);
}

class Main : public QObject {
    Q_OBJECT

public:
    int size, bytes_read;
    QStringList data;
    QByteArray values;
    QLocalSocket socket;

    Main() {
        clearValues();
        connect(&socket, SIGNAL(readyRead()), SLOT(readValues())); }

    const char* send(const char* str) {
        clearValues();
        socket.abort();
        socket.connectToServer("EQL:simple-lisp-editor");
        if(socket.isWritable()) {
            QByteArray data(str);
            data.prepend(QString::number(data.size()).toAscii() + ' ');
            socket.write(data);
            QCoreApplication::exec(); // see QCoreApplication::exit() in readValues()
            return values.constData(); }
        return 0; }

    void clearValues() {
        size = -1;
        bytes_read = 0;
        data.clear();
        values.clear(); }

public Q_SLOTS:
    void readValues() {
        QString str(socket.readAll());
        if(size == -1) {
            size = str.section(' ', 0, 0).toInt();
            bytes_read = str.length() - str.section(' ', 0, 1).length() - 1;
            data << str.section(' ', 2); }
        else if(bytes_read < size) {
            data << str;
            bytes_read += str.length(); }
        if(size == bytes_read) {
            values = data.join("").trimmed().toAscii();
            data.clear();
            size = -1;
            QCoreApplication::exit(); }}
};

QT_END_NAMESPACE

#endif
