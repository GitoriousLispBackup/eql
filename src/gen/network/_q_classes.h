// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

class LAbstractSocket : public QAbstractSocket {
    Q_OBJECT
    friend class Q12;
public:
    LAbstractSocket(uint u, SocketType x1, QObject* x2) : QAbstractSocket(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { quint64 id = LObjects::override_id(unique, 108); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 108, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { quint64 id = LObjects::override_id(unique, 109); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 109, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { quint64 id = LObjects::override_id(unique, 110); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 110, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { quint64 id = LObjects::override_id(unique, 111); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 111, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::canReadLine(); } return ret; }
    void close() { quint64 id = LObjects::override_id(unique, 112); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 112, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractSocket::close(); }}
    bool isSequential() const { quint64 id = LObjects::override_id(unique, 113); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 113, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { quint64 id = LObjects::override_id(unique, 114); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { quint64 id = LObjects::override_id(unique, 115); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 116); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 117); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 118); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { quint64 id = LObjects::override_id(unique, 119); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::open(x1); } return ret; }
    qlonglong pos() const { quint64 id = LObjects::override_id(unique, 120); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 120, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::pos(); } return ret; }
    bool reset() { quint64 id = LObjects::override_id(unique, 121); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 121, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::reset(); } return ret; }
    bool seek(qint64 x1) { quint64 id = LObjects::override_id(unique, 122); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::seek(x1); } return ret; }
    qlonglong size() const { quint64 id = LObjects::override_id(unique, 123); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 123, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractSocket::timerEvent(x1); }}
};

class LFtp : public QFtp {
    Q_OBJECT
    friend class Q62;
public:
    LFtp(uint u, QObject* x1 = 0) : QFtp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QFtp::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QFtp::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QFtp::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QFtp::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QFtp::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QFtp::timerEvent(x1); }}
};

class LLocalServer : public QLocalServer {
    Q_OBJECT
    friend class Q111;
public:
    LLocalServer(uint u, QObject* x1 = 0) : QLocalServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { quint64 id = LObjects::override_id(unique, 275); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 275, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalServer::hasPendingConnections(); } return ret; }
    QLocalSocket* nextPendingConnection() { quint64 id = LObjects::override_id(unique, 276); void* fun = LObjects::overrideFun(id); QLocalSocket* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QLocalSocket*)qVariantValue<void*>(callOverrideFun(fun, 276, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalServer::nextPendingConnection(); } return ret; }
    void incomingConnection(quintptr x1) { quint64 id = LObjects::override_id(unique, 277); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 277, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalServer::incomingConnection(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalServer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalServer::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalServer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalServer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalServer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalServer::timerEvent(x1); }}
};

class LLocalSocket : public QLocalSocket {
    Q_OBJECT
    friend class Q112;
public:
    LLocalSocket(uint u, QObject* x1 = 0) : QLocalSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong bytesAvailable() const { quint64 id = LObjects::override_id(unique, 109); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 109, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { quint64 id = LObjects::override_id(unique, 110); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 110, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { quint64 id = LObjects::override_id(unique, 111); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 111, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::canReadLine(); } return ret; }
    void close() { quint64 id = LObjects::override_id(unique, 112); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 112, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalSocket::close(); }}
    bool isSequential() const { quint64 id = LObjects::override_id(unique, 113); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 113, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { quint64 id = LObjects::override_id(unique, 114); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { quint64 id = LObjects::override_id(unique, 115); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 116); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::readData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 118); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::writeData(x1, x2); } return ret; }
    bool atEnd() const { quint64 id = LObjects::override_id(unique, 108); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 108, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::atEnd(); } return ret; }
    bool open(OpenMode x1) { quint64 id = LObjects::override_id(unique, 119); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::open(x1); } return ret; }
    qlonglong pos() const { quint64 id = LObjects::override_id(unique, 120); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 120, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::pos(); } return ret; }
    bool reset() { quint64 id = LObjects::override_id(unique, 121); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 121, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::reset(); } return ret; }
    bool seek(qint64 x1) { quint64 id = LObjects::override_id(unique, 122); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::seek(x1); } return ret; }
    qlonglong size() const { quint64 id = LObjects::override_id(unique, 123); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 123, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::size(); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 117); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::readLineData(x1, x2); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLocalSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLocalSocket::timerEvent(x1); }}
};

class LNetworkAccessManager : public QNetworkAccessManager {
    Q_OBJECT
    friend class Q123;
public:
    LNetworkAccessManager(uint u, QObject* x1 = 0) : QNetworkAccessManager(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkAccessManager::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkAccessManager::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkAccessManager::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkAccessManager::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkAccessManager::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkAccessManager::timerEvent(x1); }}
};

class LNetworkCookieJar : public QNetworkCookieJar {
    Q_OBJECT
    friend class Q124;
public:
    LNetworkCookieJar(uint u, QObject* x1 = 0) : QNetworkCookieJar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QList<QNetworkCookie> cookiesForUrl(const QUrl& x1) const { quint64 id = LObjects::override_id(unique, 282); void* fun = LObjects::overrideFun(id); QList<QNetworkCookie> ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = qVariantValue<QList<QNetworkCookie> >(callOverrideFun(fun, 282, args, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkCookieJar::cookiesForUrl(x1); } return ret; }
    bool setCookiesFromUrl(const QList<QNetworkCookie>& x1, const QUrl& x2) { quint64 id = LObjects::override_id(unique, 283); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 283, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkCookieJar::setCookiesFromUrl(x1, x2); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkCookieJar::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkCookieJar::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkCookieJar::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkCookieJar::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkCookieJar::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkCookieJar::timerEvent(x1); }}
};

class LNetworkDiskCache : public QNetworkDiskCache {
    Q_OBJECT
    friend class Q125;
public:
    LNetworkDiskCache(uint u, QObject* x1 = 0) : QNetworkDiskCache(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong expire() { quint64 id = LObjects::override_id(unique, 284); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 284, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkDiskCache::expire(); } return ret; }
    qlonglong cacheSize() const { quint64 id = LObjects::override_id(unique, 285); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 285, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkDiskCache::cacheSize(); } return ret; }
    QNetworkCacheMetaData metaData(const QUrl& x1) { quint64 id = LObjects::override_id(unique, 286); void* fun = LObjects::overrideFun(id); QNetworkCacheMetaData ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = qVariantValue<QNetworkCacheMetaData>(callOverrideFun(fun, 286, args, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkDiskCache::metaData(x1); } return ret; }
    bool remove(const QUrl& x1) { quint64 id = LObjects::override_id(unique, 287); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 287, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkDiskCache::remove(x1); } return ret; }
    void updateMetaData(const QNetworkCacheMetaData& x1) { quint64 id = LObjects::override_id(unique, 288); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 288, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkDiskCache::updateMetaData(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QNetworkDiskCache::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkDiskCache::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkDiskCache::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkDiskCache::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkDiskCache::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QNetworkDiskCache::timerEvent(x1); }}
};

class LTcpServer : public QTcpServer {
    Q_OBJECT
    friend class Q188;
public:
    LTcpServer(uint u, QObject* x1 = 0) : QTcpServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { quint64 id = LObjects::override_id(unique, 275); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 275, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpServer::hasPendingConnections(); } return ret; }
    QTcpSocket* nextPendingConnection() { quint64 id = LObjects::override_id(unique, 276); void* fun = LObjects::overrideFun(id); QTcpSocket* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QTcpSocket*)qVariantValue<void*>(callOverrideFun(fun, 276, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpServer::nextPendingConnection(); } return ret; }
    void incomingConnection(int x1) { quint64 id = LObjects::override_id(unique, 342); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 342, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpServer::incomingConnection(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpServer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpServer::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpServer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpServer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpServer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpServer::timerEvent(x1); }}
};

class LTcpSocket : public QTcpSocket {
    Q_OBJECT
    friend class Q189;
public:
    LTcpSocket(uint u, QObject* x1 = 0) : QTcpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { quint64 id = LObjects::override_id(unique, 108); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 108, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { quint64 id = LObjects::override_id(unique, 109); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 109, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { quint64 id = LObjects::override_id(unique, 110); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 110, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { quint64 id = LObjects::override_id(unique, 111); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 111, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::canReadLine(); } return ret; }
    void close() { quint64 id = LObjects::override_id(unique, 112); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 112, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpSocket::close(); }}
    bool isSequential() const { quint64 id = LObjects::override_id(unique, 113); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 113, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { quint64 id = LObjects::override_id(unique, 114); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { quint64 id = LObjects::override_id(unique, 115); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 116); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 117); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 118); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { quint64 id = LObjects::override_id(unique, 119); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::open(x1); } return ret; }
    qlonglong pos() const { quint64 id = LObjects::override_id(unique, 120); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 120, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::pos(); } return ret; }
    bool reset() { quint64 id = LObjects::override_id(unique, 121); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 121, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::reset(); } return ret; }
    bool seek(qint64 x1) { quint64 id = LObjects::override_id(unique, 122); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::seek(x1); } return ret; }
    qlonglong size() const { quint64 id = LObjects::override_id(unique, 123); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 123, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTcpSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTcpSocket::timerEvent(x1); }}
};

class LUdpSocket : public QUdpSocket {
    Q_OBJECT
    friend class Q207;
public:
    LUdpSocket(uint u, QObject* x1 = 0) : QUdpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { quint64 id = LObjects::override_id(unique, 108); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 108, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { quint64 id = LObjects::override_id(unique, 109); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 109, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { quint64 id = LObjects::override_id(unique, 110); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 110, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { quint64 id = LObjects::override_id(unique, 111); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 111, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::canReadLine(); } return ret; }
    void close() { quint64 id = LObjects::override_id(unique, 112); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 112, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QUdpSocket::close(); }}
    bool isSequential() const { quint64 id = LObjects::override_id(unique, 113); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 113, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { quint64 id = LObjects::override_id(unique, 114); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { quint64 id = LObjects::override_id(unique, 115); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 116); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 117); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { quint64 id = LObjects::override_id(unique, 118); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { quint64 id = LObjects::override_id(unique, 119); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::open(x1); } return ret; }
    qlonglong pos() const { quint64 id = LObjects::override_id(unique, 120); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 120, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::pos(); } return ret; }
    bool reset() { quint64 id = LObjects::override_id(unique, 121); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 121, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::reset(); } return ret; }
    bool seek(qint64 x1) { quint64 id = LObjects::override_id(unique, 122); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::seek(x1); } return ret; }
    qlonglong size() const { quint64 id = LObjects::override_id(unique, 123); void* fun = LObjects::overrideFun(id); qlonglong ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 123, 0, id).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUdpSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QUdpSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QUdpSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QUdpSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QUdpSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QUdpSocket::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
