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

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 108); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 108, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 109, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 110); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 110, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 111); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 111, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 112); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 112, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QAbstractSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 113, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 115); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 118); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 119); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 120); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 120, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 121, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 122); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 123); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 123, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QAbstractSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QAbstractSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QAbstractSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QAbstractSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QAbstractSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QAbstractSocket::timerEvent(x1); }}
};

class LFtp : public QFtp {
    Q_OBJECT
    friend class Q62;
public:
    LFtp(uint u, QObject* x1 = 0) : QFtp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QFtp::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QFtp::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QFtp::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QFtp::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QFtp::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QFtp::timerEvent(x1); }}
};

class LLocalServer : public QLocalServer {
    Q_OBJECT
    friend class Q111;
public:
    LLocalServer(uint u, QObject* x1 = 0) : QLocalServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { void* fun = LObjects::overrideFun(unique, 275); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 275, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalServer::hasPendingConnections(); } return ret; }
    QLocalSocket* nextPendingConnection() { void* fun = LObjects::overrideFun(unique, 276); QLocalSocket* ret = 0; if(fun && (LObjects::calling != unique)) { ret = (QLocalSocket*)qVariantValue<void*>(callOverrideFun(fun, 276, 0, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalServer::nextPendingConnection(); } return ret; }
    void incomingConnection(quintptr x1) { void* fun = LObjects::overrideFun(unique, 277); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 277, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalServer::incomingConnection(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalServer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalServer::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalServer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalServer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalServer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalServer::timerEvent(x1); }}
};

class LLocalSocket : public QLocalSocket {
    Q_OBJECT
    friend class Q112;
public:
    LLocalSocket(uint u, QObject* x1 = 0) : QLocalSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 109, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 110); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 110, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 111); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 111, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 112); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 112, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 113, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 115); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::readData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 118); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::writeData(x1, x2); } return ret; }
    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 108); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 108, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::atEnd(); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 119); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 120); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 120, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 121, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 122); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 123); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 123, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::size(); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::readLineData(x1, x2); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QLocalSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QLocalSocket::timerEvent(x1); }}
};

class LNetworkAccessManager : public QNetworkAccessManager {
    Q_OBJECT
    friend class Q123;
public:
    LNetworkAccessManager(uint u, QObject* x1 = 0) : QNetworkAccessManager(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkAccessManager::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkAccessManager::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkAccessManager::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkAccessManager::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkAccessManager::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkAccessManager::timerEvent(x1); }}
};

class LNetworkCookieJar : public QNetworkCookieJar {
    Q_OBJECT
    friend class Q124;
public:
    LNetworkCookieJar(uint u, QObject* x1 = 0) : QNetworkCookieJar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QList<QNetworkCookie> cookiesForUrl(const QUrl& x1) const { void* fun = LObjects::overrideFun(unique, 282); QList<QNetworkCookie> ret; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = qVariantValue<QList<QNetworkCookie> >(callOverrideFun(fun, 282, args, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkCookieJar::cookiesForUrl(x1); } return ret; }
    bool setCookiesFromUrl(const QList<QNetworkCookie>& x1, const QUrl& x2) { void* fun = LObjects::overrideFun(unique, 283); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 283, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkCookieJar::setCookiesFromUrl(x1, x2); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkCookieJar::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkCookieJar::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkCookieJar::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkCookieJar::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkCookieJar::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkCookieJar::timerEvent(x1); }}
};

class LNetworkDiskCache : public QNetworkDiskCache {
    Q_OBJECT
    friend class Q125;
public:
    LNetworkDiskCache(uint u, QObject* x1 = 0) : QNetworkDiskCache(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong expire() { void* fun = LObjects::overrideFun(unique, 284); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 284, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkDiskCache::expire(); } return ret; }
    qlonglong cacheSize() const { void* fun = LObjects::overrideFun(unique, 285); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 285, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkDiskCache::cacheSize(); } return ret; }
    QNetworkCacheMetaData metaData(const QUrl& x1) { void* fun = LObjects::overrideFun(unique, 286); QNetworkCacheMetaData ret; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = qVariantValue<QNetworkCacheMetaData>(callOverrideFun(fun, 286, args, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkDiskCache::metaData(x1); } return ret; }
    bool remove(const QUrl& x1) { void* fun = LObjects::overrideFun(unique, 287); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 287, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkDiskCache::remove(x1); } return ret; }
    void updateMetaData(const QNetworkCacheMetaData& x1) { void* fun = LObjects::overrideFun(unique, 288); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 288, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkDiskCache::updateMetaData(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QNetworkDiskCache::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkDiskCache::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkDiskCache::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkDiskCache::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkDiskCache::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QNetworkDiskCache::timerEvent(x1); }}
};

class LTcpServer : public QTcpServer {
    Q_OBJECT
    friend class Q188;
public:
    LTcpServer(uint u, QObject* x1 = 0) : QTcpServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { void* fun = LObjects::overrideFun(unique, 275); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 275, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpServer::hasPendingConnections(); } return ret; }
    QTcpSocket* nextPendingConnection() { void* fun = LObjects::overrideFun(unique, 276); QTcpSocket* ret = 0; if(fun && (LObjects::calling != unique)) { ret = (QTcpSocket*)qVariantValue<void*>(callOverrideFun(fun, 276, 0, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpServer::nextPendingConnection(); } return ret; }
    void incomingConnection(int x1) { void* fun = LObjects::overrideFun(unique, 342); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 342, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpServer::incomingConnection(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpServer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpServer::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpServer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpServer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpServer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpServer::timerEvent(x1); }}
};

class LTcpSocket : public QTcpSocket {
    Q_OBJECT
    friend class Q189;
public:
    LTcpSocket(uint u, QObject* x1 = 0) : QTcpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 108); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 108, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 109, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 110); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 110, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 111); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 111, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 112); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 112, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 113, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 115); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 118); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 119); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 120); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 120, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 121, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 122); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 123); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 123, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QTcpSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QTcpSocket::timerEvent(x1); }}
};

class LUdpSocket : public QUdpSocket {
    Q_OBJECT
    friend class Q207;
public:
    LUdpSocket(uint u, QObject* x1 = 0) : QUdpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 108); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 108, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 109, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 110); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 110, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 111); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 111, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 112); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 112, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QUdpSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 113, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 115); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 118); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 119); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 120); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 120, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 121, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 122); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 123); qlonglong ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 123, 0, unique).toLongLong(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QUdpSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QUdpSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QUdpSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QUdpSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QUdpSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QUdpSocket::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
