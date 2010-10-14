// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

class LAuthenticator : public QAuthenticator {
    friend class N8;
public:
    LAuthenticator(uint u) : unique(u) {}
    LAuthenticator(uint u, const QAuthenticator& x1) : QAuthenticator(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHostAddress : public QHostAddress {
    friend class N74;
public:
    LHostAddress(uint u) : unique(u) {}
    LHostAddress(uint u, quint8* x1) : QHostAddress(x1), unique(u) {}
    LHostAddress(uint u, const Q_IPV6ADDR& x1) : QHostAddress(x1), unique(u) {}
    LHostAddress(uint u, const sockaddr* x1) : QHostAddress(x1), unique(u) {}
    LHostAddress(uint u, const QString& x1) : QHostAddress(x1), unique(u) {}
    LHostAddress(uint u, const QHostAddress& x1) : QHostAddress(x1), unique(u) {}
    LHostAddress(uint u, SpecialAddress x1) : QHostAddress(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHostInfo : public QHostInfo {
    friend class N75;
public:
    LHostInfo(uint u, int x1 = -1) : QHostInfo(x1), unique(u) {}
    LHostInfo(uint u, const QHostInfo& x1) : QHostInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkAddressEntry : public QNetworkAddressEntry {
    friend class N100;
public:
    LNetworkAddressEntry(uint u) : unique(u) {}
    LNetworkAddressEntry(uint u, const QNetworkAddressEntry& x1) : QNetworkAddressEntry(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkCacheMetaData : public QNetworkCacheMetaData {
    friend class N101;
public:
    LNetworkCacheMetaData(uint u) : unique(u) {}
    LNetworkCacheMetaData(uint u, const QNetworkCacheMetaData& x1) : QNetworkCacheMetaData(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkCookie : public QNetworkCookie {
    friend class N102;
public:
    LNetworkCookie(uint u, const QByteArray& x1 = QByteArray(), const QByteArray& x2 = QByteArray()) : QNetworkCookie(x1, x2), unique(u) {}
    LNetworkCookie(uint u, const QNetworkCookie& x1) : QNetworkCookie(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkInterface : public QNetworkInterface {
    friend class N103;
public:
    LNetworkInterface(uint u) : unique(u) {}
    LNetworkInterface(uint u, const QNetworkInterface& x1) : QNetworkInterface(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkProxy : public QNetworkProxy {
    friend class N104;
public:
    LNetworkProxy(uint u) : unique(u) {}
    LNetworkProxy(uint u, ProxyType x1, const QString& x2 = QString(), quint16 x3 = 0, const QString& x4 = QString(), const QString& x5 = QString()) : QNetworkProxy(x1, x2, x3, x4, x5), unique(u) {}
    LNetworkProxy(uint u, const QNetworkProxy& x1) : QNetworkProxy(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkProxyFactory : public QNetworkProxyFactory {
    friend class N105;
public:
    LNetworkProxyFactory(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery& x1 = QNetworkProxyQuery()) { void* fun = LObjects::overrideFun(unique, 360); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QList<QNetworkProxy> >(callOverrideFun(fun, 360, args)); } return QList<QNetworkProxy>(); }
};

class LNetworkProxyQuery : public QNetworkProxyQuery {
    friend class N106;
public:
    LNetworkProxyQuery(uint u) : unique(u) {}
    LNetworkProxyQuery(uint u, const QUrl& x1, QueryType x2 = UrlRequest) : QNetworkProxyQuery(x1, x2), unique(u) {}
    LNetworkProxyQuery(uint u, const QString& x1, int x2, const QString& x3 = QString(), QueryType x4 = TcpSocket) : QNetworkProxyQuery(x1, x2, x3, x4), unique(u) {}
    LNetworkProxyQuery(uint u, quint16 x1, const QString& x2 = QString(), QueryType x3 = TcpServer) : QNetworkProxyQuery(x1, x2, x3), unique(u) {}
    LNetworkProxyQuery(uint u, const QNetworkProxyQuery& x1) : QNetworkProxyQuery(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkRequest : public QNetworkRequest {
    friend class N107;
public:
    LNetworkRequest(uint u, const QUrl& x1 = QUrl()) : QNetworkRequest(x1), unique(u) {}
    LNetworkRequest(uint u, const QNetworkRequest& x1) : QNetworkRequest(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslCertificate : public QSslCertificate {
    friend class N135;
public:
    LSslCertificate(uint u, const QByteArray& x1 = QByteArray(), QSsl::EncodingFormat x2 = QSsl::Pem) : QSslCertificate(x1, x2), unique(u) {}
    LSslCertificate(uint u, const QSslCertificate& x1) : QSslCertificate(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslCipher : public QSslCipher {
    friend class N136;
public:
    LSslCipher(uint u) : unique(u) {}
    LSslCipher(uint u, const QString& x1, QSsl::SslProtocol x2) : QSslCipher(x1, x2), unique(u) {}
    LSslCipher(uint u, const QSslCipher& x1) : QSslCipher(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslConfiguration : public QSslConfiguration {
    friend class N137;
public:
    LSslConfiguration(uint u) : unique(u) {}
    LSslConfiguration(uint u, const QSslConfiguration& x1) : QSslConfiguration(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslError : public QSslError {
    friend class N138;
public:
    LSslError(uint u) : unique(u) {}
    LSslError(uint u, SslError x1) : QSslError(x1), unique(u) {}
    LSslError(uint u, SslError x1, const QSslCertificate& x2) : QSslError(x1, x2), unique(u) {}
    LSslError(uint u, const QSslError& x1) : QSslError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslKey : public QSslKey {
    friend class N139;
public:
    LSslKey(uint u) : unique(u) {}
    LSslKey(uint u, const QByteArray& x1, QSsl::KeyAlgorithm x2, QSsl::EncodingFormat x3 = QSsl::Pem, QSsl::KeyType x4 = QSsl::PrivateKey, const QByteArray& x5 = QByteArray()) : QSslKey(x1, x2, x3, x4, x5), unique(u) {}
    LSslKey(uint u, const QSslKey& x1) : QSslKey(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LUrlInfo : public QUrlInfo {
    friend class N178;
public:
    LUrlInfo(uint u) : unique(u) {}
    LUrlInfo(uint u, const QUrlInfo& x1) : QUrlInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setDir(bool x1) { void* fun = LObjects::overrideFun(unique, 375); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 375, args).toBool()) return; } QUrlInfo::setDir(x1); }
    void setFile(bool x1) { void* fun = LObjects::overrideFun(unique, 376); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 376, args).toBool()) return; } QUrlInfo::setFile(x1); }
    void setGroup(const QString& x1) { void* fun = LObjects::overrideFun(unique, 377); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 377, args).toBool()) return; } QUrlInfo::setGroup(x1); }
    void setLastModified(const QDateTime& x1) { void* fun = LObjects::overrideFun(unique, 378); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 378, args).toBool()) return; } QUrlInfo::setLastModified(x1); }
    void setName(const QString& x1) { void* fun = LObjects::overrideFun(unique, 379); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 379, args).toBool()) return; } QUrlInfo::setName(x1); }
    void setOwner(const QString& x1) { void* fun = LObjects::overrideFun(unique, 380); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 380, args).toBool()) return; } QUrlInfo::setOwner(x1); }
    void setPermissions(int x1) { void* fun = LObjects::overrideFun(unique, 381); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 381, args).toBool()) return; } QUrlInfo::setPermissions(x1); }
    void setReadable(bool x1) { void* fun = LObjects::overrideFun(unique, 382); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 382, args).toBool()) return; } QUrlInfo::setReadable(x1); }
    void setSymLink(bool x1) { void* fun = LObjects::overrideFun(unique, 383); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 383, args).toBool()) return; } QUrlInfo::setSymLink(x1); }
    void setWritable(bool x1) { void* fun = LObjects::overrideFun(unique, 384); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 384, args).toBool()) return; } QUrlInfo::setWritable(x1); }
};

#endif
