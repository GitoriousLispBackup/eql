// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

NumList LGraphicsSvgItem::overrideIds = NumList() << 239 << 210 << 212;
NumList LSvgRenderer::overrideIds = NumList();
NumList LSvgWidget::overrideIds = NumList() << 25 << 21;
NumList LSvgGenerator::overrideIds = NumList() << 416;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[77] = new Q78;
    LObjects::Q[176] = new Q177;
    LObjects::Q[177] = new Q178;
    LObjects::N[149] = new N150; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 78: m = &QGraphicsSvgItem::staticMetaObject; break;
        case 177: m = &QSvgRenderer::staticMetaObject; break;
        case 178: m = &QSvgWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p) {
    switch(n) {
        case 150: delete (LSvgGenerator*)p; break; }}

NumList* override(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 78: ids = &LGraphicsSvgItem::overrideIds; break;
            case 177: ids = &LSvgRenderer::overrideIds; break;
            case 178: ids = &LSvgWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 150: ids = &LSvgGenerator::overrideIds; break; }}
    return ids; }
