// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

NumList LSqlDriver::overrideIds = NumList() << 301 << 111 << 302 << 303 << 304 << 305 << 306 << 307 << 308 << 309 << 310 << 311 << 312 << 313 << 314 << 315 << 316 << 317;
NumList LSqlQueryModel::overrideIds = NumList() << 193 << 318 << 53 << 55 << 57 << 60 << 62 << 68 << 70 << 72;
NumList LSqlRelationalDelegate::overrideIds = NumList() << 45 << 48 << 49;
NumList LSqlRelationalTableModel::overrideIds = NumList() << 319 << 320 << 193 << 55 << 68 << 321 << 71 << 322 << 323 << 324 << 325 << 326;
NumList LSqlTableModel::overrideIds = NumList() << 327 << 321 << 328 << 329 << 330 << 322 << 331 << 323 << 324 << 325 << 326 << 193 << 55 << 58 << 60 << 63 << 68 << 69 << 70 << 71 << 73;
NumList LSqlDatabase::overrideIds = NumList();
NumList LSqlError::overrideIds = NumList();
NumList LSqlField::overrideIds = NumList();
NumList LSqlIndex::overrideIds = NumList();
NumList LSqlQuery::overrideIds = NumList();
NumList LSqlRecord::overrideIds = NumList();
NumList LSqlRelation::overrideIds = NumList();
NumList LSqlResult::overrideIds = NumList() << 306 << 418 << 419 << 413 << 97 << 420 << 421 << 422 << 423 << 424 << 425 << 426 << 427 << 428 << 429 << 430 << 431 << 432 << 433 << 434 << 315 << 435 << 436 << 122;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[162] = new Q163;
    LObjects::Q[163] = new Q164;
    LObjects::Q[164] = new Q165;
    LObjects::Q[165] = new Q166;
    LObjects::Q[166] = new Q167;
    LObjects::N[134] = new N135;
    LObjects::N[135] = new N136;
    LObjects::N[136] = new N137;
    LObjects::N[137] = new N138;
    LObjects::N[138] = new N139;
    LObjects::N[139] = new N140;
    LObjects::N[140] = new N141;
    LObjects::N[141] = new N142; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 163: m = &QSqlDriver::staticMetaObject; break;
        case 164: m = &QSqlQueryModel::staticMetaObject; break;
        case 165: m = &QSqlRelationalDelegate::staticMetaObject; break;
        case 166: m = &QSqlRelationalTableModel::staticMetaObject; break;
        case 167: m = &QSqlTableModel::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 135: if(gc) delete (QSqlDatabase*)p; else delete (LSqlDatabase*)p; break;
        case 136: if(gc) delete (QSqlError*)p; else delete (LSqlError*)p; break;
        case 137: if(gc) delete (QSqlField*)p; else delete (LSqlField*)p; break;
        case 138: if(gc) delete (QSqlIndex*)p; else delete (LSqlIndex*)p; break;
        case 139: if(gc) delete (QSqlQuery*)p; else delete (LSqlQuery*)p; break;
        case 140: if(gc) delete (QSqlRecord*)p; else delete (LSqlRecord*)p; break;
        case 141: if(gc) delete (QSqlRelation*)p; else delete (LSqlRelation*)p; break;
        case 142: if(gc) delete (QSqlResult*)p; else delete (LSqlResult*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 163: ids = &LSqlDriver::overrideIds; break;
            case 164: ids = &LSqlQueryModel::overrideIds; break;
            case 165: ids = &LSqlRelationalDelegate::overrideIds; break;
            case 166: ids = &LSqlRelationalTableModel::overrideIds; break;
            case 167: ids = &LSqlTableModel::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 135: ids = &LSqlDatabase::overrideIds; break;
            case 136: ids = &LSqlError::overrideIds; break;
            case 137: ids = &LSqlField::overrideIds; break;
            case 138: ids = &LSqlIndex::overrideIds; break;
            case 139: ids = &LSqlQuery::overrideIds; break;
            case 140: ids = &LSqlRecord::overrideIds; break;
            case 141: ids = &LSqlRelation::overrideIds; break;
            case 142: ids = &LSqlResult::overrideIds; break; }}
    return ids; }
