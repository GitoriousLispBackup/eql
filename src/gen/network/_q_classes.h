// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

class LAbstractSocket : public QAbstractSocket {
    Q_OBJECT
    friend class Q12;
public:
    LAbstractSocket(uint u, SocketType x1, QObject* x2) : QAbstractSocket(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 107); if(fun) { return callOverrideFun(fun, 107, 0).toBool(); } return QAbstractSocket::atEnd(); }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 108); if(fun) { return callOverrideFun(fun, 108, 0).toLongLong(); } return QAbstractSocket::bytesAvailable(); }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 109); if(fun) { return callOverrideFun(fun, 109, 0).toLongLong(); } return QAbstractSocket::bytesToWrite(); }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 110); if(fun) { return callOverrideFun(fun, 110, 0).toBool(); } return QAbstractSocket::canReadLine(); }
    void close() { void* fun = LObjects::overrideFun(unique, 111); if(fun) { if(callOverrideFun(fun, 111, 0).toBool()) return; } QAbstractSocket::close(); }
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 112); if(fun) { return callOverrideFun(fun, 112, 0).toBool(); } return QAbstractSocket::isSequential(); }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 113); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 113, args).toBool(); } return QAbstractSocket::waitForBytesWritten(x1); }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 114, args).toBool(); } return QAbstractSocket::waitForReadyRead(x1); }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 115); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 115, args).toLongLong(); } return QAbstractSocket::readData(x1, x2); }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 116, args).toLongLong(); } return QAbstractSocket::readLineData(x1, x2); }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 117, args).toLongLong(); } return QAbstractSocket::writeData(x1, x2); }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 118); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 118, args).toBool(); } return QAbstractSocket::open(x1); }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 119); if(fun) { return callOverrideFun(fun, 119, 0).toLongLong(); } return QAbstractSocket::pos(); }
    bool reset() { void* fun = LObjects::overrideFun(unique, 120); if(fun) { return callOverrideFun(fun, 120, 0).toBool(); } return QAbstractSocket::reset(); }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 121); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 121, args).toBool(); } return QAbstractSocket::seek(x1); }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 122); if(fun) { return callOverrideFun(fun, 122, 0).toLongLong(); } return QAbstractSocket::size(); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QAbstractSocket::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QAbstractSocket::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QAbstractSocket::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QAbstractSocket::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QAbstractSocket::timerEvent(x1); }
};

class LFtp : public QFtp {
    Q_OBJECT
    friend class Q62;
public:
    LFtp(uint u, QObject* x1 = 0) : QFtp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QFtp::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QFtp::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QFtp::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QFtp::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QFtp::timerEvent(x1); }
};

class LLocalServer : public QLocalServer {
    Q_OBJECT
    friend class Q111;
public:
    LLocalServer(uint u, QObject* x1 = 0) : QLocalServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { void* fun = LObjects::overrideFun(unique, 274); if(fun) { return callOverrideFun(fun, 274, 0).toBool(); } return QLocalServer::hasPendingConnections(); }
    QLocalSocket* nextPendingConnection() { void* fun = LObjects::overrideFun(unique, 275); if(fun) { return (QLocalSocket*)qVariantValue<void*>(callOverrideFun(fun, 275, 0)); } return QLocalServer::nextPendingConnection(); }
    void incomingConnection(quintptr x1) { void* fun = LObjects::overrideFun(unique, 276); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 276, args).toBool()) return; } QLocalServer::incomingConnection(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QLocalServer::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QLocalServer::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QLocalServer::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QLocalServer::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QLocalServer::timerEvent(x1); }
};

class LLocalSocket : public QLocalSocket {
    Q_OBJECT
    friend class Q112;
public:
    LLocalSocket(uint u, QObject* x1 = 0) : QLocalSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 108); if(fun) { return callOverrideFun(fun, 108, 0).toLongLong(); } return QLocalSocket::bytesAvailable(); }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 109); if(fun) { return callOverrideFun(fun, 109, 0).toLongLong(); } return QLocalSocket::bytesToWrite(); }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 110); if(fun) { return callOverrideFun(fun, 110, 0).toBool(); } return QLocalSocket::canReadLine(); }
    void close() { void* fun = LObjects::overrideFun(unique, 111); if(fun) { if(callOverrideFun(fun, 111, 0).toBool()) return; } QLocalSocket::close(); }
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 112); if(fun) { return callOverrideFun(fun, 112, 0).toBool(); } return QLocalSocket::isSequential(); }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 113); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 113, args).toBool(); } return QLocalSocket::waitForBytesWritten(x1); }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 114, args).toBool(); } return QLocalSocket::waitForReadyRead(x1); }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 115); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 115, args).toLongLong(); } return QLocalSocket::readData(x1, x2); }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 117, args).toLongLong(); } return QLocalSocket::writeData(x1, x2); }
    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 107); if(fun) { return callOverrideFun(fun, 107, 0).toBool(); } return QLocalSocket::atEnd(); }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 118); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 118, args).toBool(); } return QLocalSocket::open(x1); }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 119); if(fun) { return callOverrideFun(fun, 119, 0).toLongLong(); } return QLocalSocket::pos(); }
    bool reset() { void* fun = LObjects::overrideFun(unique, 120); if(fun) { return callOverrideFun(fun, 120, 0).toBool(); } return QLocalSocket::reset(); }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 121); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 121, args).toBool(); } return QLocalSocket::seek(x1); }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 122); if(fun) { return callOverrideFun(fun, 122, 0).toLongLong(); } return QLocalSocket::size(); }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 116, args).toLongLong(); } return QLocalSocket::readLineData(x1, x2); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QLocalSocket::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QLocalSocket::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QLocalSocket::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QLocalSocket::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QLocalSocket::timerEvent(x1); }
};

class LNetworkAccessManager : public QNetworkAccessManager {
    Q_OBJECT
    friend class Q123;
public:
    LNetworkAccessManager(uint u, QObject* x1 = 0) : QNetworkAccessManager(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QNetworkAccessManager::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QNetworkAccessManager::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QNetworkAccessManager::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QNetworkAccessManager::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QNetworkAccessManager::timerEvent(x1); }
};

class LNetworkCookieJar : public QNetworkCookieJar {
    Q_OBJECT
    friend class Q124;
public:
    LNetworkCookieJar(uint u, QObject* x1 = 0) : QNetworkCookieJar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QList<QNetworkCookie> cookiesForUrl(const QUrl& x1) const { void* fun = LObjects::overrideFun(unique, 281); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QList<QNetworkCookie> >(callOverrideFun(fun, 281, args)); } return QNetworkCookieJar::cookiesForUrl(x1); }
    bool setCookiesFromUrl(const QList<QNetworkCookie>& x1, const QUrl& x2) { void* fun = LObjects::overrideFun(unique, 282); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 282, args).toBool(); } return QNetworkCookieJar::setCookiesFromUrl(x1, x2); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QNetworkCookieJar::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QNetworkCookieJar::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QNetworkCookieJar::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QNetworkCookieJar::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QNetworkCookieJar::timerEvent(x1); }
};

class LNetworkDiskCache : public QNetworkDiskCache {
    Q_OBJECT
    friend class Q125;
public:
    LNetworkDiskCache(uint u, QObject* x1 = 0) : QNetworkDiskCache(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    qlonglong expire() { void* fun = LObjects::overrideFun(unique, 283); if(fun) { return callOverrideFun(fun, 283, 0).toLongLong(); } return QNetworkDiskCache::expire(); }
    qlonglong cacheSize() const { void* fun = LObjects::overrideFun(unique, 284); if(fun) { return callOverrideFun(fun, 284, 0).toLongLong(); } return QNetworkDiskCache::cacheSize(); }
    QNetworkCacheMetaData metaData(const QUrl& x1) { void* fun = LObjects::overrideFun(unique, 285); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QNetworkCacheMetaData>(callOverrideFun(fun, 285, args)); } return QNetworkDiskCache::metaData(x1); }
    bool remove(const QUrl& x1) { void* fun = LObjects::overrideFun(unique, 286); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 286, args).toBool(); } return QNetworkDiskCache::remove(x1); }
    void updateMetaData(const QNetworkCacheMetaData& x1) { void* fun = LObjects::overrideFun(unique, 287); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 287, args).toBool()) return; } QNetworkDiskCache::updateMetaData(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QNetworkDiskCache::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QNetworkDiskCache::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QNetworkDiskCache::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QNetworkDiskCache::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QNetworkDiskCache::timerEvent(x1); }
};

class LTcpServer : public QTcpServer {
    Q_OBJECT
    friend class Q183;
public:
    LTcpServer(uint u, QObject* x1 = 0) : QTcpServer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool hasPendingConnections() const { void* fun = LObjects::overrideFun(unique, 274); if(fun) { return callOverrideFun(fun, 274, 0).toBool(); } return QTcpServer::hasPendingConnections(); }
    QTcpSocket* nextPendingConnection() { void* fun = LObjects::overrideFun(unique, 275); if(fun) { return (QTcpSocket*)qVariantValue<void*>(callOverrideFun(fun, 275, 0)); } return QTcpServer::nextPendingConnection(); }
    void incomingConnection(int x1) { void* fun = LObjects::overrideFun(unique, 310); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 310, args).toBool()) return; } QTcpServer::incomingConnection(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QTcpServer::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QTcpServer::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QTcpServer::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QTcpServer::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QTcpServer::timerEvent(x1); }
};

class LTcpSocket : public QTcpSocket {
    Q_OBJECT
    friend class Q184;
public:
    LTcpSocket(uint u, QObject* x1 = 0) : QTcpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 107); if(fun) { return callOverrideFun(fun, 107, 0).toBool(); } return QTcpSocket::atEnd(); }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 108); if(fun) { return callOverrideFun(fun, 108, 0).toLongLong(); } return QTcpSocket::bytesAvailable(); }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 109); if(fun) { return callOverrideFun(fun, 109, 0).toLongLong(); } return QTcpSocket::bytesToWrite(); }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 110); if(fun) { return callOverrideFun(fun, 110, 0).toBool(); } return QTcpSocket::canReadLine(); }
    void close() { void* fun = LObjects::overrideFun(unique, 111); if(fun) { if(callOverrideFun(fun, 111, 0).toBool()) return; } QTcpSocket::close(); }
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 112); if(fun) { return callOverrideFun(fun, 112, 0).toBool(); } return QTcpSocket::isSequential(); }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 113); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 113, args).toBool(); } return QTcpSocket::waitForBytesWritten(x1); }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 114, args).toBool(); } return QTcpSocket::waitForReadyRead(x1); }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 115); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 115, args).toLongLong(); } return QTcpSocket::readData(x1, x2); }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 116, args).toLongLong(); } return QTcpSocket::readLineData(x1, x2); }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 117, args).toLongLong(); } return QTcpSocket::writeData(x1, x2); }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 118); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 118, args).toBool(); } return QTcpSocket::open(x1); }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 119); if(fun) { return callOverrideFun(fun, 119, 0).toLongLong(); } return QTcpSocket::pos(); }
    bool reset() { void* fun = LObjects::overrideFun(unique, 120); if(fun) { return callOverrideFun(fun, 120, 0).toBool(); } return QTcpSocket::reset(); }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 121); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 121, args).toBool(); } return QTcpSocket::seek(x1); }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 122); if(fun) { return callOverrideFun(fun, 122, 0).toLongLong(); } return QTcpSocket::size(); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QTcpSocket::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QTcpSocket::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QTcpSocket::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QTcpSocket::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QTcpSocket::timerEvent(x1); }
};

class LUdpSocket : public QUdpSocket {
    Q_OBJECT
    friend class Q204;
public:
    LUdpSocket(uint u, QObject* x1 = 0) : QUdpSocket(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool atEnd() const { void* fun = LObjects::overrideFun(unique, 107); if(fun) { return callOverrideFun(fun, 107, 0).toBool(); } return QUdpSocket::atEnd(); }
    qlonglong bytesAvailable() const { void* fun = LObjects::overrideFun(unique, 108); if(fun) { return callOverrideFun(fun, 108, 0).toLongLong(); } return QUdpSocket::bytesAvailable(); }
    qlonglong bytesToWrite() const { void* fun = LObjects::overrideFun(unique, 109); if(fun) { return callOverrideFun(fun, 109, 0).toLongLong(); } return QUdpSocket::bytesToWrite(); }
    bool canReadLine() const { void* fun = LObjects::overrideFun(unique, 110); if(fun) { return callOverrideFun(fun, 110, 0).toBool(); } return QUdpSocket::canReadLine(); }
    void close() { void* fun = LObjects::overrideFun(unique, 111); if(fun) { if(callOverrideFun(fun, 111, 0).toBool()) return; } QUdpSocket::close(); }
    bool isSequential() const { void* fun = LObjects::overrideFun(unique, 112); if(fun) { return callOverrideFun(fun, 112, 0).toBool(); } return QUdpSocket::isSequential(); }
    bool waitForBytesWritten(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 113); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 113, args).toBool(); } return QUdpSocket::waitForBytesWritten(x1); }
    bool waitForReadyRead(int x1 = 30000) { void* fun = LObjects::overrideFun(unique, 114); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 114, args).toBool(); } return QUdpSocket::waitForReadyRead(x1); }
    qlonglong readData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 115); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 115, args).toLongLong(); } return QUdpSocket::readData(x1, x2); }
    qlonglong readLineData(char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 116); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 116, args).toLongLong(); } return QUdpSocket::readLineData(x1, x2); }
    qlonglong writeData(const char* x1, qint64 x2) { void* fun = LObjects::overrideFun(unique, 117); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 117, args).toLongLong(); } return QUdpSocket::writeData(x1, x2); }
    bool open(OpenMode x1) { void* fun = LObjects::overrideFun(unique, 118); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 118, args).toBool(); } return QUdpSocket::open(x1); }
    qlonglong pos() const { void* fun = LObjects::overrideFun(unique, 119); if(fun) { return callOverrideFun(fun, 119, 0).toLongLong(); } return QUdpSocket::pos(); }
    bool reset() { void* fun = LObjects::overrideFun(unique, 120); if(fun) { return callOverrideFun(fun, 120, 0).toBool(); } return QUdpSocket::reset(); }
    bool seek(qint64 x1) { void* fun = LObjects::overrideFun(unique, 121); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 121, args).toBool(); } return QUdpSocket::seek(x1); }
    qlonglong size() const { void* fun = LObjects::overrideFun(unique, 122); if(fun) { return callOverrideFun(fun, 122, 0).toLongLong(); } return QUdpSocket::size(); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QUdpSocket::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QUdpSocket::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QUdpSocket::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QUdpSocket::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QUdpSocket::timerEvent(x1); }
};

#endif
