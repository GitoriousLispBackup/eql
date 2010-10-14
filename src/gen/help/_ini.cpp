// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

NumList LHelpContentModel::overrideIds = NumList() << 54 << 55 << 61 << 67 << 70;
NumList LHelpContentWidget::overrideIds = NumList();
NumList LHelpEngineCore::overrideIds = NumList();
NumList LHelpIndexWidget::overrideIds = NumList();
NumList LHelpSearchEngine::overrideIds = NumList();
NumList LHelpSearchQueryWidget::overrideIds = NumList();
NumList LHelpSearchResultWidget::overrideIds = NumList();
NumList LHelpContentItem::overrideIds = NumList();
NumList LHelpSearchQuery::overrideIds = NumList();

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[86] = new Q87;
    LObjects::Q[87] = new Q88;
    LObjects::Q[88] = new Q89;
    LObjects::Q[89] = new Q90;
    LObjects::Q[90] = new Q91;
    LObjects::Q[91] = new Q92;
    LObjects::Q[92] = new Q93;
    LObjects::Q[93] = new Q94;
    LObjects::N[69] = new N70;
    LObjects::N[71] = new N72; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 87: m = &QHelpContentModel::staticMetaObject; break;
        case 88: m = &QHelpContentWidget::staticMetaObject; break;
        case 89: m = &QHelpEngineCore::staticMetaObject; break;
        case 90: m = &QHelpIndexModel::staticMetaObject; break;
        case 91: m = &QHelpIndexWidget::staticMetaObject; break;
        case 92: m = &QHelpSearchEngine::staticMetaObject; break;
        case 93: m = &QHelpSearchQueryWidget::staticMetaObject; break;
        case 94: m = &QHelpSearchResultWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p) {
    switch(n) {
        case 70: delete (LHelpContentItem*)p; break;
        case 72: delete (LHelpSearchQuery*)p; break; }}

NumList* override(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 87: ids = &LHelpContentModel::overrideIds; break;
            case 88: ids = &LHelpContentWidget::overrideIds; break;
            case 89: ids = &LHelpEngineCore::overrideIds; break;
            case 91: ids = &LHelpIndexWidget::overrideIds; break;
            case 92: ids = &LHelpSearchEngine::overrideIds; break;
            case 93: ids = &LHelpSearchQueryWidget::overrideIds; break;
            case 94: ids = &LHelpSearchResultWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 70: ids = &LHelpContentItem::overrideIds; break;
            case 72: ids = &LHelpSearchQuery::overrideIds; break; }}
    return ids; }
