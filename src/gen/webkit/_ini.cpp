// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

NumList LGraphicsWebView::overrideIds = NumList() << 23 << 222 << 210 << 211 << 228 << 242 << 213 << 214 << 215 << 216 << 217 << 14 << 34 << 15 << 220 << 221 << 36 << 16 << 17 << 223 << 224 << 225 << 226 << 241 << 230;
NumList LWebHistoryInterface::overrideIds = NumList() << 321 << 322;
NumList LWebInspector::overrideIds = NumList() << 25 << 35 << 40 << 41;
NumList LWebPage::overrideIds = NumList() << 323 << 324 << 325 << 326 << 327 << 328 << 329 << 330 << 331 << 332 << 333 << 334;
NumList LWebView::overrideIds = NumList() << 335 << 23 << 25 << 13 << 28 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 16 << 17 << 38 << 18 << 19 << 20 << 21 << 40 << 43;
NumList LWebDatabase::overrideIds = NumList();
NumList LWebElement::overrideIds = NumList();
NumList LWebElementCollection::overrideIds = NumList();
NumList LWebHistoryItem::overrideIds = NumList();
NumList LWebHitTestResult::overrideIds = NumList();
NumList LWebSecurityOrigin::overrideIds = NumList();

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[81] = new Q82;
    LObjects::Q[208] = new Q209;
    LObjects::Q[209] = new Q210;
    LObjects::Q[210] = new Q211;
    LObjects::Q[211] = new Q212;
    LObjects::Q[212] = new Q213;
    LObjects::N[181] = new N182;
    LObjects::N[182] = new N183;
    LObjects::N[183] = new N184;
    LObjects::N[184] = new N185;
    LObjects::N[185] = new N186;
    LObjects::N[186] = new N187;
    LObjects::N[187] = new N188;
    LObjects::N[188] = new N189; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 82: m = &QGraphicsWebView::staticMetaObject; break;
        case 209: m = &QWebFrame::staticMetaObject; break;
        case 210: m = &QWebHistoryInterface::staticMetaObject; break;
        case 211: m = &QWebInspector::staticMetaObject; break;
        case 212: m = &QWebPage::staticMetaObject; break;
        case 213: m = &QWebView::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p) {
    switch(n) {
        case 182: delete (LWebDatabase*)p; break;
        case 183: delete (LWebElement*)p; break;
        case 184: delete (LWebElementCollection*)p; break;
        case 186: delete (LWebHistoryItem*)p; break;
        case 187: delete (LWebHitTestResult*)p; break;
        case 188: delete (LWebSecurityOrigin*)p; break; }}

NumList* override(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 82: ids = &LGraphicsWebView::overrideIds; break;
            case 210: ids = &LWebHistoryInterface::overrideIds; break;
            case 211: ids = &LWebInspector::overrideIds; break;
            case 212: ids = &LWebPage::overrideIds; break;
            case 213: ids = &LWebView::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 182: ids = &LWebDatabase::overrideIds; break;
            case 183: ids = &LWebElement::overrideIds; break;
            case 184: ids = &LWebElementCollection::overrideIds; break;
            case 186: ids = &LWebHistoryItem::overrideIds; break;
            case 187: ids = &LWebHitTestResult::overrideIds; break;
            case 188: ids = &LWebSecurityOrigin::overrideIds; break; }}
    return ids; }
