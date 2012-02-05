// copyright (c) 2010-2012 Polos Ruetz

#include "dyn_object.h"
#include "ecl_fun.h"
#include <QMetaMethod>
#include <QEvent>
#include <QApplication>

QObject* DynObject::currentSender = 0;

DynObject::DynObject(QObject* par) : QObject(par), filters(false) {
    qApp->installEventFilter(this); }

int DynObject::qt_metacall(QMetaObject::Call c, int id, void** args) {
    if((QMetaObject::InvokeMetaMethod == c) && (id < functions.size())) {
        currentSender = senders.at(id);
        callConnectFun(functions.at(id), types.at(id), args); }
    return -1; }

bool DynObject::connect(QObject* from, const char* signal, DynObject* dyn, void* fun) {
    int id_sig = from->metaObject()->indexOfSignal(signal + 1);
    if(id_sig != -1) {
        int id_slot = dyn->functions.size();
        dyn->functions << fun;
        dyn->types << from->metaObject()->method(id_sig).parameterTypes();
        dyn->senders << from;
        return QMetaObject::connect(from, id_sig, dyn, id_slot); }
    return false; }

bool DynObject::disconnect(QObject* from, const char* signal, DynObject* dyn, void* fun) {
    int id_sig = signal ? from->metaObject()->indexOfSignal(signal + 1) : -1;
    int id_slot = -1;
    bool ok = false;
    Q_FOREACH(void* curr, dyn->functions) {
        ++id_slot;
        if(curr == fun) {
            dyn->functions[id_slot] = 0;
            dyn->types[id_slot].clear();
            dyn->senders[id_slot] = 0;
            if(QMetaObject::disconnect(from, id_sig, dyn, id_slot)) {
                ok = true; }}}
    return ok; }

void DynObject::addEventFilter(QObject* obj, int type, void* fun) {
    filters = true;
    ev_types << type;
    ev_funs << fun;
    ev_objects << obj; }

void DynObject::clearEventFilters() {
    filters = false;
    ev_types.clear();
    ev_funs.clear();
    ev_objects.clear(); }

bool DynObject::eventFilter(QObject* obj, QEvent* ev) {
    if(filters) {
        for(int i = 0; i < ev_objects.size(); ++i) {
            if(!ev_objects.at(i) || (obj == ev_objects.at(i))) {
                if(ev->type() == ev_types.at(i)) {
                    if(callEventFun(ev_funs.at(i), obj, ev)) {
                        return true; }}}}}
    return QObject::eventFilter(obj, ev); }
