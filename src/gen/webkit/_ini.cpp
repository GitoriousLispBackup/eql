// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

NumList LGraphicsWebView::overrideIds = NumList() << 23 << 222 << 210 << 211 << 228 << 242 << 213 << 214 << 215 << 216 << 217 << 14 << 34 << 15 << 220 << 221 << 36 << 16 << 17 << 223 << 224 << 225 << 226 << 241 << 230;
NumList LWebHistoryInterface::overrideIds = NumList() << 352 << 353;
NumList LWebInspector::overrideIds = NumList() << 25 << 35 << 40 << 41;
NumList LWebPage::overrideIds = NumList() << 354 << 355 << 356 << 357 << 358 << 359 << 360 << 361 << 362 << 363 << 364 << 365;
NumList LWebView::overrideIds = NumList() << 366 << 23 << 25 << 13 << 28 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 16 << 17 << 38 << 18 << 19 << 20 << 21 << 40 << 43;
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
    LObjects::Q[213] = new Q214;
    LObjects::Q[214] = new Q215;
    LObjects::Q[215] = new Q216;
    LObjects::Q[216] = new Q217;
    LObjects::Q[217] = new Q218;
    LObjects::N[190] = new N191;
    LObjects::N[191] = new N192;
    LObjects::N[192] = new N193;
    LObjects::N[193] = new N194;
    LObjects::N[194] = new N195;
    LObjects::N[195] = new N196;
    LObjects::N[196] = new N197;
    LObjects::N[197] = new N198; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 82: m = &QGraphicsWebView::staticMetaObject; break;
        case 214: m = &QWebFrame::staticMetaObject; break;
        case 215: m = &QWebHistoryInterface::staticMetaObject; break;
        case 216: m = &QWebInspector::staticMetaObject; break;
        case 217: m = &QWebPage::staticMetaObject; break;
        case 218: m = &QWebView::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 191: if(gc) delete (QWebDatabase*)p; else delete (LWebDatabase*)p; break;
        case 192: if(gc) delete (QWebElement*)p; else delete (LWebElement*)p; break;
        case 193: if(gc) delete (QWebElementCollection*)p; else delete (LWebElementCollection*)p; break;
        case 195: if(gc) delete (QWebHistoryItem*)p; else delete (LWebHistoryItem*)p; break;
        case 196: if(gc) delete (QWebHitTestResult*)p; else delete (LWebHitTestResult*)p; break;
        case 197: if(gc) delete (QWebSecurityOrigin*)p; else delete (LWebSecurityOrigin*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 82: ids = &LGraphicsWebView::overrideIds; break;
            case 215: ids = &LWebHistoryInterface::overrideIds; break;
            case 216: ids = &LWebInspector::overrideIds; break;
            case 217: ids = &LWebPage::overrideIds; break;
            case 218: ids = &LWebView::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 191: ids = &LWebDatabase::overrideIds; break;
            case 192: ids = &LWebElement::overrideIds; break;
            case 193: ids = &LWebElementCollection::overrideIds; break;
            case 195: ids = &LWebHistoryItem::overrideIds; break;
            case 196: ids = &LWebHitTestResult::overrideIds; break;
            case 197: ids = &LWebSecurityOrigin::overrideIds; break; }}
    return ids; }
