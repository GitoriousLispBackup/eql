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
    LObjects::N[184] = new N185;
    LObjects::N[185] = new N186;
    LObjects::N[186] = new N187;
    LObjects::N[187] = new N188;
    LObjects::N[188] = new N189;
    LObjects::N[189] = new N190;
    LObjects::N[190] = new N191;
    LObjects::N[191] = new N192; }

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
        case 185: delete (LWebDatabase*)p; break;
        case 186: delete (LWebElement*)p; break;
        case 187: delete (LWebElementCollection*)p; break;
        case 189: delete (LWebHistoryItem*)p; break;
        case 190: delete (LWebHitTestResult*)p; break;
        case 191: delete (LWebSecurityOrigin*)p; break; }}

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
            case 185: ids = &LWebDatabase::overrideIds; break;
            case 186: ids = &LWebElement::overrideIds; break;
            case 187: ids = &LWebElementCollection::overrideIds; break;
            case 189: ids = &LWebHistoryItem::overrideIds; break;
            case 190: ids = &LWebHitTestResult::overrideIds; break;
            case 191: ids = &LWebSecurityOrigin::overrideIds; break; }}
    return ids; }
