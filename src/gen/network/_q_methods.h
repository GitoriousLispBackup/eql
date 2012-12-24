// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtGui>
#include <QtNetwork>

QT_BEGIN_NAMESPACE

class Q7 : public Q127 { // QAbstractNetworkCache
    Q_OBJECT
public:
};

class Q62 : public Q127 { // QFtp
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LFtp(u, x1); }
    Q_INVOKABLE qlonglong MbytesAvailable(QFtp* o) const { return o->bytesAvailable(); }
    Q_INVOKABLE int Mcd(QFtp* o, const QString& x1) { return o->cd(x1); }
    Q_INVOKABLE void MclearPendingCommands(QFtp* o) { o->clearPendingCommands(); }
    Q_INVOKABLE int Mclose(QFtp* o) { return o->close(); }
    Q_INVOKABLE int MconnectToHost(QFtp* o, const QString& x1, quint16 x2 = 21) { return o->connectToHost(x1, x2); }
    Q_INVOKABLE int McurrentCommand(QFtp* o) const { return o->currentCommand(); }
    Q_INVOKABLE int McurrentId(QFtp* o) const { return o->currentId(); }
    Q_INVOKABLE int Merror(QFtp* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QFtp* o) const { return o->errorString(); }
    Q_INVOKABLE bool MhasPendingCommands(QFtp* o) const { return o->hasPendingCommands(); }
    Q_INVOKABLE int Mlist(QFtp* o, const QString& x1 = QString()) { return o->list(x1); }
    Q_INVOKABLE int Mlogin(QFtp* o, const QString& x1 = QString(), const QString& x2 = QString()) { return o->login(x1, x2); }
    Q_INVOKABLE int Mmkdir(QFtp* o, const QString& x1) { return o->mkdir(x1); }
    Q_INVOKABLE int Mput(QFtp* o, const QByteArray& x1, const QString& x2, QFtp::TransferType x3 = QFtp::Binary) { return o->put(x1, x2, x3); }
    Q_INVOKABLE int MrawCommand(QFtp* o, const QString& x1) { return o->rawCommand(x1); }
    Q_INVOKABLE qlonglong Mread(QFtp* o, char* x1, qint64 x2) { return o->read(x1, x2); }
    Q_INVOKABLE QByteArray MreadAll(QFtp* o) { return o->readAll(); }
    Q_INVOKABLE int Mremove(QFtp* o, const QString& x1) { return o->remove(x1); }
    Q_INVOKABLE int Mrename(QFtp* o, const QString& x1, const QString& x2) { return o->rename(x1, x2); }
    Q_INVOKABLE int Mrmdir(QFtp* o, const QString& x1) { return o->rmdir(x1); }
    Q_INVOKABLE int MsetProxy(QFtp* o, const QString& x1, quint16 x2) { return o->setProxy(x1, x2); }
    Q_INVOKABLE int MsetTransferMode(QFtp* o, QFtp::TransferMode x1) { return o->setTransferMode(x1); }
    Q_INVOKABLE int Mstate(QFtp* o) const { return o->state(); }
};

class Q111 : public Q127 { // QLocalServer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LLocalServer(u, x1); }
    Q_INVOKABLE void Mclose(QLocalServer* o) { o->close(); }
    Q_INVOKABLE QString MerrorString(QLocalServer* o) const { return o->errorString(); }
    Q_INVOKABLE QString MfullServerName(QLocalServer* o) const { return o->fullServerName(); }
    Q_INVOKABLE bool MhasPendingConnections(QLocalServer* o) const { return o->hasPendingConnections(); }
    Q_INVOKABLE bool MisListening(QLocalServer* o) const { return o->isListening(); }
    Q_INVOKABLE bool Mlisten(QLocalServer* o, const QString& x1) { return o->listen(x1); }
    Q_INVOKABLE int MmaxPendingConnections(QLocalServer* o) const { return o->maxPendingConnections(); }
    Q_INVOKABLE QLocalSocket* MnextPendingConnection(QLocalServer* o) { return o->nextPendingConnection(); }
    Q_INVOKABLE int MserverError(QLocalServer* o) const { return o->serverError(); }
    Q_INVOKABLE QString MserverName(QLocalServer* o) const { return o->serverName(); }
    Q_INVOKABLE void MsetMaxPendingConnections(QLocalServer* o, int x1) { o->setMaxPendingConnections(x1); }
    Q_INVOKABLE bool MwaitForNewConnection(QLocalServer* o, int x1 = 0, bool* x2 = 0) { return o->waitForNewConnection(x1, x2); }
    Q_INVOKABLE bool SremoveServer(const QString& x1) { return QLocalServer::removeServer(x1); }
};

class Q112 : public Q97 { // QLocalSocket
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LLocalSocket(u, x1); }
    Q_INVOKABLE void Mabort(QLocalSocket* o) { o->abort(); }
    Q_INVOKABLE void MconnectToServer(QLocalSocket* o, const QString& x1, QLocalSocket::OpenMode x2 = QLocalSocket::ReadWrite) { o->connectToServer(x1, x2); }
    Q_INVOKABLE void MdisconnectFromServer(QLocalSocket* o) { o->disconnectFromServer(); }
    Q_INVOKABLE int Merror(QLocalSocket* o) const { return o->error(); }
    Q_INVOKABLE bool Mflush(QLocalSocket* o) { return o->flush(); }
    Q_INVOKABLE QString MfullServerName(QLocalSocket* o) const { return o->fullServerName(); }
    Q_INVOKABLE bool MisValid(QLocalSocket* o) const { return o->isValid(); }
    Q_INVOKABLE qlonglong MreadBufferSize(QLocalSocket* o) const { return o->readBufferSize(); }
    Q_INVOKABLE QString MserverName(QLocalSocket* o) const { return o->serverName(); }
    Q_INVOKABLE void MsetReadBufferSize(QLocalSocket* o, qint64 x1) { o->setReadBufferSize(x1); }
    Q_INVOKABLE bool MsetSocketDescriptor(QLocalSocket* o, quintptr x1, QLocalSocket::LocalSocketState x2 = QLocalSocket::ConnectedState, QLocalSocket::OpenMode x3 = QLocalSocket::ReadWrite) { return o->setSocketDescriptor(x1, x2, x3); }
    Q_INVOKABLE quintptr MsocketDescriptor(QLocalSocket* o) const { return o->socketDescriptor(); }
    Q_INVOKABLE int Mstate(QLocalSocket* o) const { return o->state(); }
    Q_INVOKABLE bool MwaitForConnected(QLocalSocket* o, int x1 = 30000) { return o->waitForConnected(x1); }
    Q_INVOKABLE bool MwaitForDisconnected(QLocalSocket* o, int x1 = 30000) { return o->waitForDisconnected(x1); }
    Q_INVOKABLE qlonglong MbytesAvailable(QLocalSocket* o) const { return o->bytesAvailable(); }
    Q_INVOKABLE qlonglong MbytesToWrite(QLocalSocket* o) const { return o->bytesToWrite(); }
    Q_INVOKABLE bool McanReadLine(QLocalSocket* o) const { return o->canReadLine(); }
    Q_INVOKABLE void Mclose(QLocalSocket* o) { o->close(); }
    Q_INVOKABLE bool MisSequential(QLocalSocket* o) const { return o->isSequential(); }
    Q_INVOKABLE bool MwaitForBytesWritten(QLocalSocket* o, int x1 = 30000) { return o->waitForBytesWritten(x1); }
    Q_INVOKABLE bool MwaitForReadyRead(QLocalSocket* o, int x1 = 30000) { return o->waitForReadyRead(x1); }
};

class Q123 : public Q127 { // QNetworkAccessManager
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LNetworkAccessManager(u, x1); }
    Q_INVOKABLE QAbstractNetworkCache* Mcache(QNetworkAccessManager* o) const { return o->cache(); }
    Q_INVOKABLE QNetworkCookieJar* McookieJar(QNetworkAccessManager* o) const { return o->cookieJar(); }
    Q_INVOKABLE QNetworkReply* MdeleteResource(QNetworkAccessManager* o, const QNetworkRequest& x1) { return o->deleteResource(x1); }
    Q_INVOKABLE QNetworkReply* Mget(QNetworkAccessManager* o, const QNetworkRequest& x1) { return o->get(x1); }
    Q_INVOKABLE QNetworkReply* Mhead(QNetworkAccessManager* o, const QNetworkRequest& x1) { return o->head(x1); }
    Q_INVOKABLE QNetworkReply* Mpost(QNetworkAccessManager* o, const QNetworkRequest& x1, const QByteArray& x2) { return o->post(x1, x2); }
    Q_INVOKABLE QNetworkProxy Mproxy(QNetworkAccessManager* o) const { return o->proxy(); }
    Q_INVOKABLE QNetworkProxyFactory* MproxyFactory(QNetworkAccessManager* o) const { return o->proxyFactory(); }
    Q_INVOKABLE QNetworkReply* Mput(QNetworkAccessManager* o, const QNetworkRequest& x1, const QByteArray& x2) { return o->put(x1, x2); }
    Q_INVOKABLE void MsetCache(QNetworkAccessManager* o, QAbstractNetworkCache* x1) { o->setCache(x1); }
    Q_INVOKABLE void MsetCookieJar(QNetworkAccessManager* o, QNetworkCookieJar* x1) { o->setCookieJar(x1); }
    Q_INVOKABLE void MsetProxy(QNetworkAccessManager* o, const QNetworkProxy& x1) { o->setProxy(x1); }
    Q_INVOKABLE void MsetProxyFactory(QNetworkAccessManager* o, QNetworkProxyFactory* x1) { o->setProxyFactory(x1); }
};

class Q124 : public Q127 { // QNetworkCookieJar
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LNetworkCookieJar(u, x1); }
    Q_INVOKABLE QList<QNetworkCookie> McookiesForUrl(QNetworkCookieJar* o, const QUrl& x1) const { return o->cookiesForUrl(x1); }
    Q_INVOKABLE bool MsetCookiesFromUrl(QNetworkCookieJar* o, const QList<QNetworkCookie>& x1, const QUrl& x2) { return o->setCookiesFromUrl(x1, x2); }
    Q_INVOKABLE QList<QNetworkCookie> MallCookies(QNetworkCookieJar* o) const { return ((LNetworkCookieJar*)o)->allCookies(); }
    Q_INVOKABLE void MsetAllCookies(QNetworkCookieJar* o, const QList<QNetworkCookie>& x1) { ((LNetworkCookieJar*)o)->setAllCookies(x1); }
};

class Q125 : public Q7 { // QNetworkDiskCache
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LNetworkDiskCache(u, x1); }
    Q_INVOKABLE QString McacheDirectory(QNetworkDiskCache* o) const { return o->cacheDirectory(); }
    Q_INVOKABLE QNetworkCacheMetaData MfileMetaData(QNetworkDiskCache* o, const QString& x1) const { return o->fileMetaData(x1); }
    Q_INVOKABLE qlonglong MmaximumCacheSize(QNetworkDiskCache* o) const { return o->maximumCacheSize(); }
    Q_INVOKABLE void MsetCacheDirectory(QNetworkDiskCache* o, const QString& x1) { o->setCacheDirectory(x1); }
    Q_INVOKABLE void MsetMaximumCacheSize(QNetworkDiskCache* o, qint64 x1) { o->setMaximumCacheSize(x1); }
    Q_INVOKABLE qlonglong McacheSize(QNetworkDiskCache* o) const { return o->cacheSize(); }
    Q_INVOKABLE QNetworkCacheMetaData MmetaData(QNetworkDiskCache* o, const QUrl& x1) { return o->metaData(x1); }
    Q_INVOKABLE bool Mremove(QNetworkDiskCache* o, const QUrl& x1) { return o->remove(x1); }
    Q_INVOKABLE void MupdateMetaData(QNetworkDiskCache* o, const QNetworkCacheMetaData& x1) { o->updateMetaData(x1); }
};

class Q126 : public Q97 { // QNetworkReply
    Q_OBJECT
public:
    Q_INVOKABLE void Mabort(QNetworkReply* o) { o->abort(); }
    Q_INVOKABLE QVariant Mattribute(QNetworkReply* o, QNetworkRequest::Attribute x1) const { return o->attribute(x1); }
    Q_INVOKABLE int Merror(QNetworkReply* o) const { return o->error(); }
    Q_INVOKABLE bool MhasRawHeader(QNetworkReply* o, const QByteArray& x1) const { return o->hasRawHeader(x1); }
    Q_INVOKABLE QVariant Mheader(QNetworkReply* o, QNetworkRequest::KnownHeaders x1) const { return o->header(x1); }
    Q_INVOKABLE void MignoreSslErrors(QNetworkReply* o, const QList<QSslError>& x1) { o->ignoreSslErrors(x1); }
    Q_INVOKABLE bool MisFinished(QNetworkReply* o) const { return o->isFinished(); }
    Q_INVOKABLE bool MisRunning(QNetworkReply* o) const { return o->isRunning(); }
    Q_INVOKABLE QNetworkAccessManager* Mmanager(QNetworkReply* o) const { return o->manager(); }
    Q_INVOKABLE int Moperation(QNetworkReply* o) const { return o->operation(); }
    Q_INVOKABLE QByteArray MrawHeader(QNetworkReply* o, const QByteArray& x1) const { return o->rawHeader(x1); }
    Q_INVOKABLE QList<QByteArray> MrawHeaderList(QNetworkReply* o) const { return o->rawHeaderList(); }
    Q_INVOKABLE qlonglong MreadBufferSize(QNetworkReply* o) const { return o->readBufferSize(); }
    Q_INVOKABLE QNetworkRequest Mrequest(QNetworkReply* o) const { return o->request(); }
    Q_INVOKABLE void MsetReadBufferSize(QNetworkReply* o, qint64 x1) { o->setReadBufferSize(x1); }
    Q_INVOKABLE void MsetSslConfiguration(QNetworkReply* o, const QSslConfiguration& x1) { o->setSslConfiguration(x1); }
    Q_INVOKABLE QSslConfiguration MsslConfiguration(QNetworkReply* o) const { return o->sslConfiguration(); }
    Q_INVOKABLE QUrl Murl(QNetworkReply* o) const { return o->url(); }
    Q_INVOKABLE void Mclose(QNetworkReply* o) { o->close(); }
};

class Q188 : public Q127 { // QTcpServer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LTcpServer(u, x1); }
    Q_INVOKABLE void Mclose(QTcpServer* o) { o->close(); }
    Q_INVOKABLE QString MerrorString(QTcpServer* o) const { return o->errorString(); }
    Q_INVOKABLE bool MhasPendingConnections(QTcpServer* o) const { return o->hasPendingConnections(); }
    Q_INVOKABLE bool MisListening(QTcpServer* o) const { return o->isListening(); }
    Q_INVOKABLE bool Mlisten(QTcpServer* o, const QHostAddress& x1 = QHostAddress::Any, quint16 x2 = 0) { return o->listen(x1, x2); }
    Q_INVOKABLE int MmaxPendingConnections(QTcpServer* o) const { return o->maxPendingConnections(); }
    Q_INVOKABLE QTcpSocket* MnextPendingConnection(QTcpServer* o) { return o->nextPendingConnection(); }
    Q_INVOKABLE QNetworkProxy Mproxy(QTcpServer* o) const { return o->proxy(); }
    Q_INVOKABLE QHostAddress MserverAddress(QTcpServer* o) const { return o->serverAddress(); }
    Q_INVOKABLE int MserverError(QTcpServer* o) const { return o->serverError(); }
    Q_INVOKABLE quint16 MserverPort(QTcpServer* o) const { return o->serverPort(); }
    Q_INVOKABLE void MsetMaxPendingConnections(QTcpServer* o, int x1) { o->setMaxPendingConnections(x1); }
    Q_INVOKABLE void MsetProxy(QTcpServer* o, const QNetworkProxy& x1) { o->setProxy(x1); }
    Q_INVOKABLE bool MsetSocketDescriptor(QTcpServer* o, int x1) { return o->setSocketDescriptor(x1); }
    Q_INVOKABLE int MsocketDescriptor(QTcpServer* o) const { return o->socketDescriptor(); }
    Q_INVOKABLE bool MwaitForNewConnection(QTcpServer* o, int x1 = 0, bool* x2 = 0) { return o->waitForNewConnection(x1, x2); }
};

class Q12 : public Q97 { // QAbstractSocket
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QAbstractSocket::SocketType x1, QObject* x2) { return new LAbstractSocket(u, x1, x2); }
    Q_INVOKABLE void Mabort(QAbstractSocket* o) { o->abort(); }
    Q_INVOKABLE void MconnectToHost(QAbstractSocket* o, const QString& x1, quint16 x2, QAbstractSocket::OpenMode x3 = QAbstractSocket::ReadWrite) { o->connectToHost(x1, x2, x3); }
    Q_INVOKABLE void MconnectToHost(QAbstractSocket* o, const QHostAddress& x1, quint16 x2, QAbstractSocket::OpenMode x3 = QAbstractSocket::ReadWrite) { o->connectToHost(x1, x2, x3); }
    Q_INVOKABLE void MdisconnectFromHost(QAbstractSocket* o) { o->disconnectFromHost(); }
    Q_INVOKABLE int Merror(QAbstractSocket* o) const { return o->error(); }
    Q_INVOKABLE bool Mflush(QAbstractSocket* o) { return o->flush(); }
    Q_INVOKABLE bool MisValid(QAbstractSocket* o) const { return o->isValid(); }
    Q_INVOKABLE QHostAddress MlocalAddress(QAbstractSocket* o) const { return o->localAddress(); }
    Q_INVOKABLE quint16 MlocalPort(QAbstractSocket* o) const { return o->localPort(); }
    Q_INVOKABLE QHostAddress MpeerAddress(QAbstractSocket* o) const { return o->peerAddress(); }
    Q_INVOKABLE QString MpeerName(QAbstractSocket* o) const { return o->peerName(); }
    Q_INVOKABLE quint16 MpeerPort(QAbstractSocket* o) const { return o->peerPort(); }
    Q_INVOKABLE QNetworkProxy Mproxy(QAbstractSocket* o) const { return o->proxy(); }
    Q_INVOKABLE qlonglong MreadBufferSize(QAbstractSocket* o) const { return o->readBufferSize(); }
    Q_INVOKABLE void MsetProxy(QAbstractSocket* o, const QNetworkProxy& x1) { o->setProxy(x1); }
    Q_INVOKABLE void MsetReadBufferSize(QAbstractSocket* o, qint64 x1) { o->setReadBufferSize(x1); }
    Q_INVOKABLE bool MsetSocketDescriptor(QAbstractSocket* o, int x1, QAbstractSocket::SocketState x2 = QAbstractSocket::ConnectedState, QAbstractSocket::OpenMode x3 = QAbstractSocket::ReadWrite) { return o->setSocketDescriptor(x1, x2, x3); }
    Q_INVOKABLE void MsetSocketOption(QAbstractSocket* o, QAbstractSocket::SocketOption x1, const QVariant& x2) { o->setSocketOption(x1, x2); }
    Q_INVOKABLE int MsocketDescriptor(QAbstractSocket* o) const { return o->socketDescriptor(); }
    Q_INVOKABLE QVariant MsocketOption(QAbstractSocket* o, QAbstractSocket::SocketOption x1) { return o->socketOption(x1); }
    Q_INVOKABLE int MsocketType(QAbstractSocket* o) const { return o->socketType(); }
    Q_INVOKABLE int Mstate(QAbstractSocket* o) const { return o->state(); }
    Q_INVOKABLE bool MwaitForConnected(QAbstractSocket* o, int x1 = 30000) { return o->waitForConnected(x1); }
    Q_INVOKABLE bool MwaitForDisconnected(QAbstractSocket* o, int x1 = 30000) { return o->waitForDisconnected(x1); }
    Q_INVOKABLE void MsetLocalAddress(QAbstractSocket* o, const QHostAddress& x1) { ((LAbstractSocket*)o)->setLocalAddress(x1); }
    Q_INVOKABLE void MsetLocalPort(QAbstractSocket* o, quint16 x1) { ((LAbstractSocket*)o)->setLocalPort(x1); }
    Q_INVOKABLE void MsetPeerAddress(QAbstractSocket* o, const QHostAddress& x1) { ((LAbstractSocket*)o)->setPeerAddress(x1); }
    Q_INVOKABLE void MsetPeerName(QAbstractSocket* o, const QString& x1) { ((LAbstractSocket*)o)->setPeerName(x1); }
    Q_INVOKABLE void MsetPeerPort(QAbstractSocket* o, quint16 x1) { ((LAbstractSocket*)o)->setPeerPort(x1); }
    Q_INVOKABLE void MsetSocketError(QAbstractSocket* o, QAbstractSocket::SocketError x1) { ((LAbstractSocket*)o)->setSocketError(x1); }
    Q_INVOKABLE void MsetSocketState(QAbstractSocket* o, QAbstractSocket::SocketState x1) { ((LAbstractSocket*)o)->setSocketState(x1); }
    Q_INVOKABLE bool MatEnd(QAbstractSocket* o) const { return o->atEnd(); }
    Q_INVOKABLE qlonglong MbytesAvailable(QAbstractSocket* o) const { return o->bytesAvailable(); }
    Q_INVOKABLE qlonglong MbytesToWrite(QAbstractSocket* o) const { return o->bytesToWrite(); }
    Q_INVOKABLE bool McanReadLine(QAbstractSocket* o) const { return o->canReadLine(); }
    Q_INVOKABLE void Mclose(QAbstractSocket* o) { o->close(); }
    Q_INVOKABLE bool MisSequential(QAbstractSocket* o) const { return o->isSequential(); }
    Q_INVOKABLE bool MwaitForBytesWritten(QAbstractSocket* o, int x1 = 30000) { return o->waitForBytesWritten(x1); }
    Q_INVOKABLE bool MwaitForReadyRead(QAbstractSocket* o, int x1 = 30000) { return o->waitForReadyRead(x1); }
};

class Q189 : public Q12 { // QTcpSocket
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LTcpSocket(u, x1); }
};

class Q207 : public Q12 { // QUdpSocket
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LUdpSocket(u, x1); }
    Q_INVOKABLE bool Mbind(QUdpSocket* o, const QHostAddress& x1, quint16 x2) { return o->bind(x1, x2); }
    Q_INVOKABLE bool Mbind(QUdpSocket* o, const QHostAddress& x1, quint16 x2, QUdpSocket::BindMode x3) { return o->bind(x1, x2, x3); }
    Q_INVOKABLE bool Mbind(QUdpSocket* o, quint16 x1 = 0) { return o->bind(x1); }
    Q_INVOKABLE bool Mbind(QUdpSocket* o, quint16 x1, QUdpSocket::BindMode x2) { return o->bind(x1, x2); }
    Q_INVOKABLE bool MhasPendingDatagrams(QUdpSocket* o) const { return o->hasPendingDatagrams(); }
    Q_INVOKABLE qlonglong MpendingDatagramSize(QUdpSocket* o) const { return o->pendingDatagramSize(); }
    Q_INVOKABLE qlonglong MreadDatagram(QUdpSocket* o, char* x1, qint64 x2, QHostAddress* x3 = 0, quint16* x4 = 0) { return o->readDatagram(x1, x2, x3, x4); }
    Q_INVOKABLE qlonglong MwriteDatagram(QUdpSocket* o, const char* x1, qint64 x2, const QHostAddress& x3, quint16 x4) { return o->writeDatagram(x1, x2, x3, x4); }
    Q_INVOKABLE qlonglong MwriteDatagram(QUdpSocket* o, const QByteArray& x1, const QHostAddress& x2, quint16 x3) { return o->writeDatagram(x1, x2, x3); }
};

QT_END_NAMESPACE

#endif
