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

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 107); bool ret = false; if(fun) { ret = callOverrideFun(fun, 107, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 108); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 108, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 109, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 110); bool ret = false; if(fun) { ret = callOverrideFun(fun, 110, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 111); if(fun) { callOverrideFun(fun, 111, 0); } if(!fun || LObjects::call_default) { QAbstractSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 112); bool ret = false; if(fun) { ret = callOverrideFun(fun, 112, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 113, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 115); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 115, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 118); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 118, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 119); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 119, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 120); bool ret = false; if(fun) { ret = callOverrideFun(fun, 120, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 121, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 122); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 122, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QAbstractSocket::size(); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QAbstractSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QAbstractSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QAbstractSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QAbstractSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QAbstractSocket::timerEvent(x1); }}
};

class LFtp : public QFtp {
    Q_OBJECT
    friend class Q62;
public:
    LFtp(uint u, QObject* x1 = 0) : QFtp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QFtp::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QFtp::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QFtp::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QFtp::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QFtp::timerEvent(x1); }}
};

class LLocalServer : public QLocalServer {
    Q_OBJECT
    friend class Q111;
public:
    LLocalServer(uint u, QObject* x1 = 0) : QLocalServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { void* fun = LObjects::overrideFun(unique, 274); bool ret = false; if(fun) { ret = callOverrideFun(fun, 274, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalServer::hasPendingConnections(); } return ret; }
    QLocalSocket* nextPendingConnection() { void* fun = LObjects::overrideFun(unique, 275); QLocalSocket* ret = 0; if(fun) { ret = (QLocalSocket*)qVariantValue<void*>(callOverrideFun(fun, 275, 0)); } if(!fun || LObjects::call_default) { ret = QLocalServer::nextPendingConnection(); } return ret; }
    void incomingConnection(quintptr x1) { void* fun = LObjects::overrideFun(unique, 276); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 276, args); } if(!fun || LObjects::call_default) { QLocalServer::incomingConnection(x1); }}
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QLocalServer::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QLocalServer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QLocalServer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QLocalServer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QLocalServer::timerEvent(x1); }}
};

class LLocalSocket : public QLocalSocket {
    Q_OBJECT
    friend class Q112;
public:
    LLocalSocket(uint u, QObject* x1 = 0) : QLocalSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 108); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 108, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 109, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 110); bool ret = false; if(fun) { ret = callOverrideFun(fun, 110, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 111); if(fun) { callOverrideFun(fun, 111, 0); } if(!fun || LObjects::call_default) { QLocalSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 112); bool ret = false; if(fun) { ret = callOverrideFun(fun, 112, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 113, args).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 115); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 115, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::readData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::writeData(x1, x2); } return ret; }
    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 107); bool ret = false; if(fun) { ret = callOverrideFun(fun, 107, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::atEnd(); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 118); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 118, args).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 119); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 119, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 120); bool ret = false; if(fun) { ret = callOverrideFun(fun, 120, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 121, args).toBool(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 122); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 122, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::size(); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QLocalSocket::readLineData(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QLocalSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QLocalSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QLocalSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QLocalSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QLocalSocket::timerEvent(x1); }}
};

class LNetworkAccessManager : public QNetworkAccessManager {
    Q_OBJECT
    friend class Q123;
public:
    LNetworkAccessManager(uint u, QObject* x1 = 0) : QNetworkAccessManager(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QNetworkAccessManager::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QNetworkAccessManager::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QNetworkAccessManager::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QNetworkAccessManager::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QNetworkAccessManager::timerEvent(x1); }}
};

class LNetworkCookieJar : public QNetworkCookieJar {
    Q_OBJECT
    friend class Q124;
public:
    LNetworkCookieJar(uint u, QObject* x1 = 0) : QNetworkCookieJar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QList<QNetworkCookie> cookiesForUrl(const QUrl& x1) const { void* fun = LObjects::overrideFun(unique, 281); QList<QNetworkCookie> ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QList<QNetworkCookie> >(callOverrideFun(fun, 281, args)); } if(!fun || LObjects::call_default) { ret = QNetworkCookieJar::cookiesForUrl(x1); } return ret; }
    bool setCookiesFromUrl(const QList<QNetworkCookie>& x1, const QUrl& x2) { void* fun = LObjects::overrideFun(unique, 282); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 282, args).toBool(); } if(!fun || LObjects::call_default) { ret = QNetworkCookieJar::setCookiesFromUrl(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QNetworkCookieJar::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QNetworkCookieJar::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QNetworkCookieJar::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QNetworkCookieJar::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QNetworkCookieJar::timerEvent(x1); }}
};

class LNetworkDiskCache : public QNetworkDiskCache {
    Q_OBJECT
    friend class Q125;
public:
    LNetworkDiskCache(uint u, QObject* x1 = 0) : QNetworkDiskCache(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong expire() { void* fun = LObjects::overrideFun(unique, 283); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 283, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QNetworkDiskCache::expire(); } return ret; }
    qlonglong cacheSize() const { void* fun = LObjects::overrideFun(unique, 284); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 284, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QNetworkDiskCache::cacheSize(); } return ret; }
    QNetworkCacheMetaData metaData(const QUrl& x1) { void* fun = LObjects::overrideFun(unique, 285); QNetworkCacheMetaData ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QNetworkCacheMetaData>(callOverrideFun(fun, 285, args)); } if(!fun || LObjects::call_default) { ret = QNetworkDiskCache::metaData(x1); } return ret; }
    bool remove(const QUrl& x1) { void* fun = LObjects::overrideFun(unique, 286); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 286, args).toBool(); } if(!fun || LObjects::call_default) { ret = QNetworkDiskCache::remove(x1); } return ret; }
    void updateMetaData(const QNetworkCacheMetaData& x1) { void* fun = LObjects::overrideFun(unique, 287); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 287, args); } if(!fun || LObjects::call_default) { QNetworkDiskCache::updateMetaData(x1); }}
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QNetworkDiskCache::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QNetworkDiskCache::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QNetworkDiskCache::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QNetworkDiskCache::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QNetworkDiskCache::timerEvent(x1); }}
};

class LTcpServer : public QTcpServer {
    Q_OBJECT
    friend class Q188;
public:
    LTcpServer(uint u, QObject* x1 = 0) : QTcpServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { void* fun = LObjects::overrideFun(unique, 274); bool ret = false; if(fun) { ret = callOverrideFun(fun, 274, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpServer::hasPendingConnections(); } return ret; }
    QTcpSocket* nextPendingConnection() { void* fun = LObjects::overrideFun(unique, 275); QTcpSocket* ret = 0; if(fun) { ret = (QTcpSocket*)qVariantValue<void*>(callOverrideFun(fun, 275, 0)); } if(!fun || LObjects::call_default) { ret = QTcpServer::nextPendingConnection(); } return ret; }
    void incomingConnection(int x1) { void* fun = LObjects::overrideFun(unique, 341); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 341, args); } if(!fun || LObjects::call_default) { QTcpServer::incomingConnection(x1); }}
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QTcpServer::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QTcpServer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QTcpServer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QTcpServer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QTcpServer::timerEvent(x1); }}
};

class LTcpSocket : public QTcpSocket {
    Q_OBJECT
    friend class Q189;
public:
    LTcpSocket(uint u, QObject* x1 = 0) : QTcpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 107); bool ret = false; if(fun) { ret = callOverrideFun(fun, 107, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 108); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 108, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 109, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 110); bool ret = false; if(fun) { ret = callOverrideFun(fun, 110, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 111); if(fun) { callOverrideFun(fun, 111, 0); } if(!fun || LObjects::call_default) { QTcpSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 112); bool ret = false; if(fun) { ret = callOverrideFun(fun, 112, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 113, args).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 115); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 115, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 118); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 118, args).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 119); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 119, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 120); bool ret = false; if(fun) { ret = callOverrideFun(fun, 120, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 121, args).toBool(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 122); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 122, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QTcpSocket::size(); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QTcpSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QTcpSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QTcpSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QTcpSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QTcpSocket::timerEvent(x1); }}
};

class LUdpSocket : public QUdpSocket {
    Q_OBJECT
    friend class Q207;
public:
    LUdpSocket(uint u, QObject* x1 = 0) : QUdpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 107); bool ret = false; if(fun) { ret = callOverrideFun(fun, 107, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::atEnd(); } return ret; }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 108); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 108, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::bytesAvailable(); } return ret; }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 109); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 109, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::bytesToWrite(); } return ret; }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 110); bool ret = false; if(fun) { ret = callOverrideFun(fun, 110, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::canReadLine(); } return ret; }
    void close() { void* fun = LObjects::overrideFun(unique, 111); if(fun) { callOverrideFun(fun, 111, 0); } if(!fun || LObjects::call_default) { QUdpSocket::close(); }}
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 112); bool ret = false; if(fun) { ret = callOverrideFun(fun, 112, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::isSequential(); } return ret; }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 113); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 113, args).toBool(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::waitForBytesWritten(x1); } return ret; }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 114, args).toBool(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::waitForReadyRead(x1); } return ret; }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 115); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 115, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::readData(x1, x2); } return ret; }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 116, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::readLineData(x1, x2); } return ret; }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); qlonglong ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 117, args).toLongLong(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::writeData(x1, x2); } return ret; }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 118); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 118, args).toBool(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::open(x1); } return ret; }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 119); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 119, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::pos(); } return ret; }
    bool reset() { void* fun = LObjects::overrideFun(unique, 120); bool ret = false; if(fun) { ret = callOverrideFun(fun, 120, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::reset(); } return ret; }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 121); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 121, args).toBool(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::seek(x1); } return ret; }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 122); qlonglong ret = 0; if(fun) { ret = callOverrideFun(fun, 122, 0).toLongLong(); } if(!fun || LObjects::call_default) { ret = QUdpSocket::size(); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QUdpSocket::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QUdpSocket::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QUdpSocket::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QUdpSocket::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QUdpSocket::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
