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

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 108); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 108, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 109, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 110); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 110, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 111); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 111, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 112); if(fun && !LObjects::calling) { callOverrideFun(fun, 112, 0); } if(!fun || LObjects::call_default || LObjects::calling) { QAbstractSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 113, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 115); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 118); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 119); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 120); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 120, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 121, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 122); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 123); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 123, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QAbstractSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QAbstractSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QAbstractSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QAbstractSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QAbstractSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QAbstractSocket::timerEvent(x1); }}
};

class LFtp : public QFtp {
    Q_OBJECT
    friend class Q62;
public:
    LFtp(uint u, QObject* x1 = 0) : QFtp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QFtp::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QFtp::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QFtp::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QFtp::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QFtp::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QFtp::timerEvent(x1); }}
};

class LLocalServer : public QLocalServer {
    Q_OBJECT
    friend class Q111;
public:
    LLocalServer(uint u, QObject* x1 = 0) : QLocalServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { void* fun = LObjects::overrideFun(unique, 275); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 275, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalServer::hasPendingConnections(); } return ret; }
    QLocalSocket* nextPendingConnection() { void* fun = LObjects::overrideFun(unique, 276); QLocalSocket* ret = 0; if(fun && !LObjects::calling) { ret = (QLocalSocket*)qVariantValue<void*>(callOverrideFun(fun, 276, 0)); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalServer::nextPendingConnection(); } return ret; }
    void incomingConnection(quintptr x1) { void* fun = LObjects::overrideFun(unique, 277); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 277, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalServer::incomingConnection(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalServer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalServer::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalServer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalServer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalServer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalServer::timerEvent(x1); }}
};

class LLocalSocket : public QLocalSocket {
    Q_OBJECT
    friend class Q112;
public:
    LLocalSocket(uint u, QObject* x1 = 0) : QLocalSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 109, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 110); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 110, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 111); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 111, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 112); if(fun && !LObjects::calling) { callOverrideFun(fun, 112, 0); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 113, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 115); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::readData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 118); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::writeData(x1, x2); } return ret; }
    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 108); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 108, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::atEnd(); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 119); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 120); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 120, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 121, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 122); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 123); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 123, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::size(); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::readLineData(x1, x2); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QLocalSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QLocalSocket::timerEvent(x1); }}
};

class LNetworkAccessManager : public QNetworkAccessManager {
    Q_OBJECT
    friend class Q123;
public:
    LNetworkAccessManager(uint u, QObject* x1 = 0) : QNetworkAccessManager(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkAccessManager::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkAccessManager::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkAccessManager::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkAccessManager::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkAccessManager::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkAccessManager::timerEvent(x1); }}
};

class LNetworkCookieJar : public QNetworkCookieJar {
    Q_OBJECT
    friend class Q124;
public:
    LNetworkCookieJar(uint u, QObject* x1 = 0) : QNetworkCookieJar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QList<QNetworkCookie> cookiesForUrl(const QUrl& x1) const { void* fun = LObjects::overrideFun(unique, 282); QList<QNetworkCookie> ret; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = qVariantValue<QList<QNetworkCookie> >(callOverrideFun(fun, 282, args)); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkCookieJar::cookiesForUrl(x1); } return ret; }
    bool setCookiesFromUrl(const QList<QNetworkCookie>& x1, const QUrl& x2) { void* fun = LObjects::overrideFun(unique, 283); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 283, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkCookieJar::setCookiesFromUrl(x1, x2); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkCookieJar::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkCookieJar::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkCookieJar::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkCookieJar::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkCookieJar::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkCookieJar::timerEvent(x1); }}
};

class LNetworkDiskCache : public QNetworkDiskCache {
    Q_OBJECT
    friend class Q125;
public:
    LNetworkDiskCache(uint u, QObject* x1 = 0) : QNetworkDiskCache(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong expire() { void* fun = LObjects::overrideFun(unique, 284); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 284, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkDiskCache::expire(); } return ret; }
    qlonglong cacheSize() const { void* fun = LObjects::overrideFun(unique, 285); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 285, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkDiskCache::cacheSize(); } return ret; }
    QNetworkCacheMetaData metaData(const QUrl& x1) { void* fun = LObjects::overrideFun(unique, 286); QNetworkCacheMetaData ret; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = qVariantValue<QNetworkCacheMetaData>(callOverrideFun(fun, 286, args)); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkDiskCache::metaData(x1); } return ret; }
    bool remove(const QUrl& x1) { void* fun = LObjects::overrideFun(unique, 287); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 287, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkDiskCache::remove(x1); } return ret; }
    void updateMetaData(const QNetworkCacheMetaData& x1) { void* fun = LObjects::overrideFun(unique, 288); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 288, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkDiskCache::updateMetaData(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QNetworkDiskCache::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkDiskCache::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkDiskCache::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkDiskCache::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkDiskCache::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QNetworkDiskCache::timerEvent(x1); }}
};

class LTcpServer : public QTcpServer {
    Q_OBJECT
    friend class Q188;
public:
    LTcpServer(uint u, QObject* x1 = 0) : QTcpServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { void* fun = LObjects::overrideFun(unique, 275); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 275, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpServer::hasPendingConnections(); } return ret; }
    QTcpSocket* nextPendingConnection() { void* fun = LObjects::overrideFun(unique, 276); QTcpSocket* ret = 0; if(fun && !LObjects::calling) { ret = (QTcpSocket*)qVariantValue<void*>(callOverrideFun(fun, 276, 0)); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpServer::nextPendingConnection(); } return ret; }
    void incomingConnection(int x1) { void* fun = LObjects::overrideFun(unique, 342); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 342, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpServer::incomingConnection(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpServer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpServer::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpServer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpServer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpServer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpServer::timerEvent(x1); }}
};

class LTcpSocket : public QTcpSocket {
    Q_OBJECT
    friend class Q189;
public:
    LTcpSocket(uint u, QObject* x1 = 0) : QTcpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 108); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 108, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 109, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 110); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 110, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 111); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 111, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 112); if(fun && !LObjects::calling) { callOverrideFun(fun, 112, 0); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 113, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 115); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 118); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 119); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 120); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 120, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 121, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 122); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 123); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 123, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QTcpSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QTcpSocket::timerEvent(x1); }}
};

class LUdpSocket : public QUdpSocket {
    Q_OBJECT
    friend class Q207;
public:
    LUdpSocket(uint u, QObject* x1 = 0) : QUdpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 108); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 108, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 109, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 110); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 110, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 111); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 111, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 112); if(fun && !LObjects::calling) { callOverrideFun(fun, 112, 0); } if(!fun || LObjects::call_default || LObjects::calling) { QUdpSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 113, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 115); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 115, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 118); qlonglong ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 118, args).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 119); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 119, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 120); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 120, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 121, 0).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 122); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 122, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 123); qlonglong ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 123, 0).toLongLong(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::size(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QUdpSocket::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QUdpSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QUdpSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QUdpSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QUdpSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QUdpSocket::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
