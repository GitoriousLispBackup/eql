#ifndef EQL_CLIENT_H
#define EQL_CLIENT_H

#include <QtGui>
#include <QtNetwork>
#include <QtDebug>

#ifdef Q_WS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

extern "C" {
    LIB_EXPORT void        ini_q(void*);
    LIB_EXPORT const char* send_q(const char*);
    LIB_EXPORT void        ev(bool);
    LIB_EXPORT void        ev_exit();
}

// void _log(const QString&);

class Main : public QLocalSocket {
    Q_OBJECT

public:
    int size, bytes_read;
    QStringList list;
    QByteArray values;
    QEventLoop* loop;

    Main() : loop(0) { 
        connect(this, SIGNAL(readyRead()), SLOT(readBytes())); }

    void ensureConnected() {
        if(state() == QLocalSocket::UnconnectedState) {
            connectToServer("EQL:local-server");
            waitForConnected(); }}

    const char* send(const char* str) {
        ensureConnected();
        clearBytes();
        if(isWritable()) {
            QByteArray ba(str);
            ba.prepend(QString::number(ba.size()).toAscii() + ' ');
            write(ba);
            delete loop; // force reset on eventual Lisp errors
            loop = new QEventLoop;
            loop->exec();
            return values.constData(); }
        QMessageBox::critical(0, "Error", "EQL server not reachable.");
        return 0; }

    void clearBytes() {
        size = -1;
        bytes_read = 0;
        list.clear();
        values.clear(); }

public Q_SLOTS:
    void readBytes() {
        QString str(readAll());
        if(size == -1) {
            size = str.section(' ', 0, 0).toInt();
            bytes_read = str.length() - str.section(' ', 0, 1).length() - 1;
            list << str.section(' ', 2); }
        else if(bytes_read < size) {
            list << str;
            bytes_read += str.length(); }
        if(size == bytes_read) {
            values = list.join("").trimmed().toAscii();
            if(!size) {
                abort(); } // reset on Lisp errors
            list.clear();
            size = -1;
            loop->exit();
            delete loop; // force reset on eventual Lisp errors
            loop = 0; }}
};

class EvalServer : public QLocalServer {
    Q_OBJECT

public:
    int size, bytes_read;
    QStringList list;
    QByteArray expression, result;
    QLocalSocket* socket;

    EvalServer() : socket(0) {
        clearBytes();
        QString name("EQL:eval-server");
        QLocalServer::removeServer(name);
        listen(name);
        connect(this, SIGNAL(newConnection()), SLOT(newConnection())); }

    void clearBytes() {
        size = -1;
        bytes_read = 0;
        list.clear();
        expression.clear(); }

public Q_SLOTS:
    void newConnection() {
        socket = nextPendingConnection();
        connect(socket, SIGNAL(readyRead()), SLOT(readEvalWrite())); }

    void readEvalWrite();
};

class Run : public QPushButton {
    Q_OBJECT

public:
    QEventLoop* loop;

    Run() : loop(0) {
        setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::Tool);
        setAttribute(Qt::WA_MacAlwaysShowToolWindow, true);
        setText("Back to REPL");
        QFont f(font());
        f.setBold(true);
        setFont(f);
        QPalette pal(palette());
        pal.setColor(QPalette::Button, QColor("peachpuff"));
        setPalette(pal);
        adjustSize();
        connect(this, SIGNAL(clicked()), SLOT(exit())); }

public Q_SLOTS:
    void exit() {
        hide();
        if(loop) {
            loop->exit();
            delete loop; // force reset on eventual Lisp errors
            loop = 0; }}
};

QT_END_NAMESPACE

#endif
