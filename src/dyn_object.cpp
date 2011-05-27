// copyright (c) 2010-2011 Polos Ruetz

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
        int i1 = dyn->senders.indexOf(from);
        int i2 = dyn->functions.indexOf(fun);
        if((i1 == i2) && (i1 != -1)) {
            if(!qstrcmp(signal, dyn->signal_names.at(i1))) {
                // already connected
                return true; }}
        int id_slot = dyn->functions.size();
        dyn->functions << fun;
        dyn->types << from->metaObject()->method(id_sig).parameterTypes();
        dyn->signal_names << QByteArray(signal);
        dyn->senders << from;
        return QMetaObject::connect(from, id_sig, dyn, id_slot); }
    return false; }

bool DynObject::disconnect(QObject* from, const char* signal, DynObject* dyn, void* fun) {
    int id_sig = signal ? from->metaObject()->indexOfSignal(signal + 1) : -1;
    int id = -1;
    Q_FOREACH(void* curr, dyn->functions) {
        ++id;
        if(id_sig != -1) {
            int id_slot = dyn->functions.indexOf(fun);
            if(id_slot != -1) {
                dyn->functions[id_slot] = 0;
                dyn->types[id_slot].clear();
                dyn->signal_names[id_slot].clear();
                dyn->senders[id_slot] = 0;
                return QMetaObject::disconnect(from, id_sig, dyn, id_slot); }
            return false; }
        if(fun) {
            if(curr == fun) {
                dyn->functions[id] = 0;
                dyn->types[id].clear();
                dyn->signal_names[id].clear();
                dyn->senders[id] = 0;
                if(!QMetaObject::disconnect(from, -1, dyn, id)) {
                    return false; }}}
        else {
            return false; }}
    return true; }

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
