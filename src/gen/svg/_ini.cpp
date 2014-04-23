// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsSvgItem::overrideIds = NumList() << 240 << 211 << 213;
NumList LSvgRenderer::overrideIds = NumList();
NumList LSvgWidget::overrideIds = NumList() << 26 << 22;
NumList LSvgGenerator::overrideIds = NumList() << 442;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[77] = new Q78;
    LObjects::Q[176] = new Q177;
    LObjects::Q[177] = new Q178;
    LObjects::N[151] = new N152; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 78: m = &QGraphicsSvgItem::staticMetaObject; break;
        case 177: m = &QSvgRenderer::staticMetaObject; break;
        case 178: m = &QSvgWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 152: if(gc) delete (QSvgGenerator*)p; else delete (LSvgGenerator*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
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
            case 152: ids = &LSvgGenerator::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
