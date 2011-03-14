// copyright (c) 2010-2011 Polos Ruetz

#ifndef ECL_FUN_H
#define ECL_FUN_H

#include "eql_global.h"
#include <ecl/ecl.h>
#include <QList>
#include <QUiLoader>
#include <QByteArray>
#include <QPair>
#include <QVariant>

#define PRINT(x) cl_print(1, x)
#define TERPRI() cl_terpri(0)

#define STATIC_SYMBOL(var, name) \
    static cl_object var = cl_intern(1, make_constant_base_string(name));

#define STATIC_SYMBOL_PKG(var, name, pkg) \
    static cl_object var = cl_intern(2, \
                                     make_constant_base_string(name), \
                                     cl_find_package(make_constant_base_string(pkg)));

#define LEN(x) fixint(cl_length(x))

#define  LIST1(a1) \
    CONS(a1,  Cnil)
#define  LIST2(a1, a2) \
    CONS(a1, LIST1(a2))
#define  LIST3(a1, a2, a3) \
    CONS(a1, LIST2(a2, a3))
#define  LIST4(a1, a2, a3, a4) \
    CONS(a1, LIST3(a2, a3, a4))
#define  LIST5(a1, a2, a3, a4, a5) \
    CONS(a1, LIST4(a2, a3, a4, a5))
#define  LIST6(a1, a2, a3, a4, a5, a6) \
    CONS(a1, LIST5(a2, a3, a4, a5, a6))
#define  LIST7(a1, a2, a3, a4, a5, a6, a7) \
    CONS(a1, LIST6(a2, a3, a4, a5, a6, a7))
#define  LIST8(a1, a2, a3, a4, a5, a6, a7, a8) \
    CONS(a1, LIST7(a2, a3, a4, a5, a6, a7, a8))
#define  LIST9(a1, a2, a3, a4, a5, a6, a7, a8, a9) \
    CONS(a1, LIST8(a2, a3, a4, a5, a6, a7, a8, a9))
#define LIST10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) \
    CONS(a1, LIST9(a2, a3, a4, a5, a6, a7, a8, a9, a10))

#define TO_QT_TYPE(name) \
    static name to##name(cl_object x) { \
        if(LISTP(x)) { \
            return name(toInt(cl_first(x)), toInt(cl_second(x))); } \
        return name(); }

#define TO_QT_TYPEF(name) \
    TO_QT_TYPE(name) \
    static name##F to##name##F(cl_object x) { \
        if(LISTP(x)) { \
            return name##F(toReal(cl_first(x)), toReal(cl_second(x))); } \
    return name##F(); }

#define TO_QT_TYPE2(name) \
    static name to##name(cl_object x) { \
        if(LISTP(x)) { \
            return name(toInt(cl_first(x)), toInt(cl_second(x)), toInt(cl_third(x)), toInt(cl_fourth(x))); } \
        return name(); }

#define TO_QT_TYPEF2(name) \
    TO_QT_TYPE2(name) \
    static name##F to##name##F(cl_object x) { \
        if(LISTP(x)) { \
            return name##F(toReal(cl_first(x)), toReal(cl_second(x)), toReal(cl_third(x)), toReal(cl_fourth(x))); } \
    return name##F(); }

#define TO_QT_TYPE_PTR(cap_name, name) \
static cap_name* to##cap_name##Pointer(cl_object x) { \
    cap_name* p = 0; \
    QtObject o = toQtObject(x); \
    if(#cap_name == o.className()) { \
        p = (cap_name*)o.pointer; } \
    return p; } \
static cl_object from_##name(const cap_name& x) { \
    if(EQL::is_arg_return_value) { \
        return qt_object_from_name(#cap_name, new cap_name(x), 0, true); } \
    return qt_object_from_name(#cap_name, (void*)&x); }

#define TO_QT_TYPE_PTR2(cap_name, name) \
    TO_QT_TYPE_PTR(cap_name, name) \
static cap_name to##cap_name(cl_object l_x) { \
    cap_name* x = to##cap_name##Pointer(l_x); \
    if(x) { \
        return *x; } \
    return cap_name(); }

#define TO_CL_TYPE(cap_name, name, x1, x2) \
    static cl_object from_##name(const cap_name& q) { \
        return LIST2(MAKE_FIXNUM(q.x1()), MAKE_FIXNUM(q.x2())); }

#define TO_CL_TYPEF(cap_name, name, x1, x2) \
    TO_CL_TYPE(cap_name, name, x1, x2) \
    static cl_object from_##name##f(const cap_name##F& q) { \
        return LIST2(ecl_make_doublefloat(q.x1()), ecl_make_doublefloat(q.x2())); }

#define TO_CL_TYPE2(cap_name, name, x1, x2, x3, x4) \
    static cl_object from_##name(const cap_name& q) { \
        return LIST4(MAKE_FIXNUM(q.x1()), MAKE_FIXNUM(q.x2()), MAKE_FIXNUM(q.x3()), MAKE_FIXNUM(q.x4())); }

#define TO_CL_TYPEF2(cap_name, name, x1, x2, x3, x4) \
    TO_CL_TYPE2(cap_name, name, x1, x2, x3, x4) \
    static cl_object from_##name##f(const cap_name##F& q) { \
        return LIST4(ecl_make_doublefloat(q.x1()), ecl_make_doublefloat(q.x2()), ecl_make_doublefloat(q.x3()), ecl_make_doublefloat(q.x4())); }

#define TO_CL_LIST_PTR(cap_type, type) \
    static cl_object from_##type##list(const QList<cap_type*>& l) { \
        cl_object l_lst = Cnil; \
        Q_FOREACH(cap_type* x, l) { \
            l_lst = CONS(qt_object_from_name(#cap_type, x), l_lst); } \
        return cl_nreverse(l_lst); }

#define TO_CL_LIST_VAL(cap_type, type) \
    static cl_object from_##type##list(const QList<cap_type>& l) { \
        cl_object l_lst = Cnil; \
        Q_FOREACH(cap_type x, l) { \
            l_lst = CONS(from_##type(x), l_lst); } \
        return cl_nreverse(l_lst); }

#define TO_CL_LIST_VAL2(cap_type, fun) \
    static cl_object from_##type##list(const QList<cap_type*>& l) { \
        cl_object l_lst = Cnil; \
        Q_FOREACH(cap_type* x, l) { \
            l_lst = CONS(fun(*x), l_lst); } \
        return cl_nreverse(l_lst); }

#define TO_QT_LIST_PTR(type) \
    static QList<type*> to##type##List(cl_object l_lst) { \
        QList<type*> l; \
        if(LISTP(l_lst)) { \
            cl_object l_el = l_lst; \
            while(l_el != Cnil) { \
                l << (type*)toQtObject(cl_car(l_el)).pointer; \
                l_el = cl_cdr(l_el); }} \
        return l; }

#define TO_QT_LIST_VAL(type) \
    static QList<type> to##type##List(cl_object l_lst) { \
        QList<type> l; \
        if(LISTP(l_lst)) { \
            cl_object l_el = l_lst; \
            while(l_el != Cnil) { \
                l << to##type(cl_car(l_el)); \
                l_el = cl_cdr(l_el); }} \
        return l; }

#define TO_QT_LIST_VAL2(type, fun) \
    static QList<type> to##fun##List(cl_object l_lst) { \
        QList<type> l; \
        if(LISTP(l_lst)) { \
            cl_object l_el = l_lst; \
            while(l_el != Cnil) { \
                l << to##fun(cl_car(l_el)); \
                l_el = cl_cdr(l_el); }} \
        return l; }

#define TO_QT_VECTOR_VAL(type) \
    static QVector<type> to##type##Vector(cl_object l_v) { \
        QVector<type> v; \
        if(cl_simple_vector_p(l_v) == Ct) { \
            for(int i = 0; i < LEN(l_v); ++i) { \
                v.append(to##type(cl_svref(l_v, MAKE_FIXNUM(i)))); }} \
        return v; }

#define TO_QT_VECTOR_VAL2(type, fun) \
    static QVector<type> to##type##Vector(cl_object l_v) { \
        QVector<type> v; \
        if(cl_simple_vector_p(l_v) == Ct) { \
            for(int i = 0; i < LEN(l_v); ++i) { \
                v.append(to##fun(cl_svref(l_v, MAKE_FIXNUM(i)))); }} \
        return v; }

#define TO_CL_VECTOR_VAL(cap_type, type) \
    static cl_object from_##type##vector(const QVector<cap_type>& v) { \
        cl_object l_vec = make_vector(); \
        for(int i = 0; i < v.size(); ++i) { \
            cl_vector_push_extend(2, from_##type(v.at(i)), l_vec); } \
        return l_vec; }

#define TO_CL_VECTOR_VAL2(cap_type, type, fun) \
    static cl_object from_##type##vector(const QVector<cap_type>& v) { \
        cl_object l_vec = make_vector(); \
        for(int i = 0; i < v.size(); ++i) { \
            cl_vector_push_extend(2, fun(v.at(i)), l_vec); } \
        return l_vec; }

class QByteArray;
class QObject;
class QEvent;

cl_object qadd_event_filter    (cl_object, cl_object, cl_object);
cl_object qapropos2            (cl_object, cl_object, cl_object);
cl_object qapp                 ();
cl_object qcall_default        ();
cl_object qclear_event_filters ();
cl_object qconnect2            (cl_object, cl_object, cl_object, cl_object, cl_object);
cl_object qcopy                (cl_object);
cl_object qdelete2             (cl_object, cl_object);
cl_object qenum                (cl_object, cl_object);
cl_object qescape              (cl_object);
cl_object qexec                ();
cl_object qfind_child          (cl_object, cl_object);
cl_object qfrom_utf8           (cl_object);
cl_object qid                  (cl_object);
cl_object qinvoke_method2      (cl_object, cl_object, cl_object, cl_object);
cl_object qload_ui             (cl_object);
cl_object qlocal8bit           (cl_object);
cl_object qmeta_enums          ();
cl_object qnew_instance2       (cl_object, cl_object);
cl_object qobject_names2       (cl_object);
cl_object qok                  ();
cl_object qoverride            (cl_object, cl_object, cl_object);
cl_object qprocess_events      ();
cl_object qproperty            (cl_object, cl_object);
cl_object qquit                ();
cl_object qrequire             (cl_object);
cl_object qsender              ();
cl_object qset_property        (cl_object, cl_object, cl_object);
cl_object qsingle_shot         (cl_object, cl_object);
cl_object qstatic_meta_object  (cl_object);
cl_object qsuper_class_name    (cl_object);
cl_object qtranslate           (cl_object, cl_object, cl_object);
cl_object qt_object_name       (cl_object);
cl_object qui_class2           (cl_object, cl_object);
cl_object qui_names            (cl_object);
cl_object qutf8                (cl_object);
cl_object qversion             ();

struct EQL_EXPORT QtObject {
    QtObject() : pointer(0), unique(0), id(0) {}

    void* pointer;
    uint unique;
    int id;

    bool isQObject() const { return (id > 0); }
    bool isStatic() const { return !pointer; }
    QByteArray className() const;

    static QByteArray idToClassName(int);
};

struct QtMetaObject : private QObject {
    // commonly used trick to access staticQtMetaObject
    static const QMetaObject* get() { return &static_cast<QtMetaObject*>(0)->staticQtMetaObject; }
};

typedef QPair<QByteArray, void*> MetaArg;

void iniCLFunctions();
void callConnectFun(void*, const QList<QByteArray>&, void**);
bool callEventFun(void*, QObject*, QEvent*);
cl_object to_lisp_arg(const MetaArg&);
QVariant toQVariant(cl_object, const char*, QVariant::Type = QVariant::UserType);
void error_msg(const char*, cl_object);

EQL_EXPORT QVariant callOverrideFun(void*, int, const void**);
EQL_EXPORT QtObject toQtObject(cl_object, cl_object = Cnil, bool* = 0);
EQL_EXPORT cl_object qt_object_from_name(const QByteArray&, void*, uint = 0, bool = false);

#endif
