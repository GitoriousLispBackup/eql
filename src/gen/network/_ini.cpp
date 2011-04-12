// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

NumList LAbstractSocket::overrideIds = NumList() << 107 << 108 << 109 << 110 << 111 << 112 << 113 << 114 << 115 << 116 << 117;
NumList LFtp::overrideIds = NumList();
NumList LLocalServer::overrideIds = NumList() << 274 << 275 << 276;
NumList LLocalSocket::overrideIds = NumList() << 108 << 109 << 110 << 111 << 112 << 113 << 114 << 115 << 117;
NumList LNetworkAccessManager::overrideIds = NumList();
NumList LNetworkCookieJar::overrideIds = NumList() << 281 << 282;
NumList LNetworkDiskCache::overrideIds = NumList() << 283 << 284 << 285 << 286 << 287;
NumList LTcpServer::overrideIds = NumList() << 274 << 275 << 310;
NumList LTcpSocket::overrideIds = NumList();
NumList LUdpSocket::overrideIds = NumList();
NumList LAuthenticator::overrideIds = NumList();
NumList LHostAddress::overrideIds = NumList();
NumList LHostInfo::overrideIds = NumList();
NumList LNetworkAddressEntry::overrideIds = NumList();
NumList LNetworkCacheMetaData::overrideIds = NumList();
NumList LNetworkCookie::overrideIds = NumList();
NumList LNetworkInterface::overrideIds = NumList();
NumList LNetworkProxy::overrideIds = NumList();
NumList LNetworkProxyFactory::overrideIds = NumList() << 384;
NumList LNetworkProxyQuery::overrideIds = NumList();
NumList LNetworkRequest::overrideIds = NumList();
NumList LSslCertificate::overrideIds = NumList();
NumList LSslCipher::overrideIds = NumList();
NumList LSslConfiguration::overrideIds = NumList();
NumList LSslError::overrideIds = NumList();
NumList LSslKey::overrideIds = NumList();
NumList LUrlInfo::overrideIds = NumList() << 400 << 401 << 402 << 403 << 404 << 405 << 406 << 407 << 408 << 409 << 410;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[6] = new Q7;
    LObjects::Q[11] = new Q12;
    LObjects::Q[61] = new Q62;
    LObjects::Q[110] = new Q111;
    LObjects::Q[111] = new Q112;
    LObjects::Q[122] = new Q123;
    LObjects::Q[123] = new Q124;
    LObjects::Q[124] = new Q125;
    LObjects::Q[125] = new Q126;
    LObjects::Q[182] = new Q183;
    LObjects::Q[183] = new Q184;
    LObjects::Q[201] = new Q202;
    LObjects::N[7] = new N8;
    LObjects::N[73] = new N74;
    LObjects::N[74] = new N75;
    LObjects::N[98] = new N99;
    LObjects::N[99] = new N100;
    LObjects::N[100] = new N101;
    LObjects::N[101] = new N102;
    LObjects::N[102] = new N103;
    LObjects::N[103] = new N104;
    LObjects::N[104] = new N105;
    LObjects::N[105] = new N106;
    LObjects::N[133] = new N134;
    LObjects::N[134] = new N135;
    LObjects::N[135] = new N136;
    LObjects::N[136] = new N137;
    LObjects::N[137] = new N138;
    LObjects::N[176] = new N177; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 7: m = &QAbstractNetworkCache::staticMetaObject; break;
        case 12: m = &QAbstractSocket::staticMetaObject; break;
        case 62: m = &QFtp::staticMetaObject; break;
        case 111: m = &QLocalServer::staticMetaObject; break;
        case 112: m = &QLocalSocket::staticMetaObject; break;
        case 123: m = &QNetworkAccessManager::staticMetaObject; break;
        case 124: m = &QNetworkCookieJar::staticMetaObject; break;
        case 125: m = &QNetworkDiskCache::staticMetaObject; break;
        case 126: m = &QNetworkReply::staticMetaObject; break;
        case 183: m = &QTcpServer::staticMetaObject; break;
        case 184: m = &QTcpSocket::staticMetaObject; break;
        case 202: m = &QUdpSocket::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p) {
    switch(n) {
        case 8: delete (LAuthenticator*)p; break;
        case 74: delete (LHostAddress*)p; break;
        case 75: delete (LHostInfo*)p; break;
        case 99: delete (LNetworkAddressEntry*)p; break;
        case 100: delete (LNetworkCacheMetaData*)p; break;
        case 101: delete (LNetworkCookie*)p; break;
        case 102: delete (LNetworkInterface*)p; break;
        case 103: delete (LNetworkProxy*)p; break;
        case 104: delete (LNetworkProxyFactory*)p; break;
        case 105: delete (LNetworkProxyQuery*)p; break;
        case 106: delete (LNetworkRequest*)p; break;
        case 134: delete (LSslCertificate*)p; break;
        case 135: delete (LSslCipher*)p; break;
        case 136: delete (LSslConfiguration*)p; break;
        case 137: delete (LSslError*)p; break;
        case 138: delete (LSslKey*)p; break;
        case 177: delete (LUrlInfo*)p; break; }}

NumList* override(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 12: ids = &LAbstractSocket::overrideIds; break;
            case 62: ids = &LFtp::overrideIds; break;
            case 111: ids = &LLocalServer::overrideIds; break;
            case 112: ids = &LLocalSocket::overrideIds; break;
            case 123: ids = &LNetworkAccessManager::overrideIds; break;
            case 124: ids = &LNetworkCookieJar::overrideIds; break;
            case 125: ids = &LNetworkDiskCache::overrideIds; break;
            case 183: ids = &LTcpServer::overrideIds; break;
            case 184: ids = &LTcpSocket::overrideIds; break;
            case 202: ids = &LUdpSocket::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 8: ids = &LAuthenticator::overrideIds; break;
            case 74: ids = &LHostAddress::overrideIds; break;
            case 75: ids = &LHostInfo::overrideIds; break;
            case 99: ids = &LNetworkAddressEntry::overrideIds; break;
            case 100: ids = &LNetworkCacheMetaData::overrideIds; break;
            case 101: ids = &LNetworkCookie::overrideIds; break;
            case 102: ids = &LNetworkInterface::overrideIds; break;
            case 103: ids = &LNetworkProxy::overrideIds; break;
            case 104: ids = &LNetworkProxyFactory::overrideIds; break;
            case 105: ids = &LNetworkProxyQuery::overrideIds; break;
            case 106: ids = &LNetworkRequest::overrideIds; break;
            case 134: ids = &LSslCertificate::overrideIds; break;
            case 135: ids = &LSslCipher::overrideIds; break;
            case 136: ids = &LSslConfiguration::overrideIds; break;
            case 137: ids = &LSslError::overrideIds; break;
            case 138: ids = &LSslKey::overrideIds; break;
            case 177: ids = &LUrlInfo::overrideIds; break; }}
    return ids; }
