// copyright (c) 2010-2012 Polos Ruetz

#include "ecl_fun.h"
#include "eql.h"
#include "dyn_object.h"
#include "gen/_lobjects.h"
#include "ui_loader.h"
#include "single_shot.h"
#include <QLibrary>

QT_BEGIN_NAMESPACE

// switches
static bool _check_argument_types_ = true;
static bool _garbage_collection_ =   true;

static const char SIG = '2';
static const char SLO = '1';
static bool _ok_ = false;
static const QMetaObject* staticQtMetaObject = QtMetaObject::get();

// meta types
static const int T_bool_ok_pointer =                  qRegisterMetaType<bool*>("bool*");
static const int T_QFileInfo =                        qRegisterMetaType<QFileInfo>("QFileInfo");
static const int T_QFileInfoList =                    qRegisterMetaType<QFileInfoList>("QFileInfoList");
static const int T_QGradientStop =                    qRegisterMetaType<QGradientStop>("QGradientStop");
static const int T_QList_QAbstractAnimation =         qRegisterMetaType<QList<QAbstractAnimation*> >("QList<QAbstractAnimation*>");
static const int T_QList_QAbstractButton =            qRegisterMetaType<QList<QAbstractButton*> >("QList<QAbstractButton*>");
static const int T_QList_QAbstractState =             qRegisterMetaType<QList<QAbstractState*> >("QList<QAbstractState*>");
static const int T_QList_QAction =                    qRegisterMetaType<QList<QAction*> >("QList<QAction*>");
static const int T_QList_QByteArray =                 qRegisterMetaType<QList<QByteArray> >("QList<QByteArray>");
static const int T_QList_QDockWidget =                qRegisterMetaType<QList<QDockWidget*> >("QList<QDockWidget*>");
static const int T_QList_QGesture =                   qRegisterMetaType<QList<QGesture*> >("QList<QGesture*>");
static const int T_QList_QGraphicsItem =              qRegisterMetaType<QList<QGraphicsItem*> >("QList<QGraphicsItem*>");
static const int T_QList_QGraphicsTransform =         qRegisterMetaType<QList<QGraphicsTransform*> >("QList<QGraphicsTransform*>");
static const int T_QList_QGraphicsView =              qRegisterMetaType<QList<QGraphicsView*> >("QList<QGraphicsView*>");
static const int T_QList_QGraphicsWidget =            qRegisterMetaType<QList<QGraphicsWidget*> >("QList<QGraphicsWidget*>");
static const int T_QList_QKeySequence =               qRegisterMetaType<QList<QKeySequence> >("QList<QKeySequence>");
static const int T_QList_QListWidgetItem =            qRegisterMetaType<QList<QListWidgetItem*> >("QList<QListWidgetItem*>");
static const int T_QList_QMdiSubWindow =              qRegisterMetaType<QList<QMdiSubWindow*> >("QList<QMdiSubWindow*>");
static const int T_QList_QObject =                    qRegisterMetaType<QList<QObject*> >("QList<QObject*>");
static const int T_QObjectList =                      qRegisterMetaType<QList<QObject*> >("QObjectList");
static const int T_QList_QPolygonF =                  qRegisterMetaType<QList<QPolygonF> >("QList<QPolygonF>");
static const int T_QList_QSize =                      qRegisterMetaType<QList<QSize> >("QList<QSize>");
static const int T_QList_QStandardItem =              qRegisterMetaType<QList<QStandardItem*> >("QList<QStandardItem*>");
static const int T_QList_QTableWidgetItem =           qRegisterMetaType<QList<QTableWidgetItem*> >("QList<QTableWidgetItem*>");
static const int T_QList_QTableWidgetSelectionRange = qRegisterMetaType<QList<QTableWidgetSelectionRange> >("QList<QTableWidgetSelectionRange>");
static const int T_QList_QTextBlock =                 qRegisterMetaType<QList<QTextBlock> >("QList<QTextBlock>");
static const int T_QList_QTextEdit_ExtraSelection =   qRegisterMetaType<QList<QTextEdit::ExtraSelection> >("QList<QTextEdit::ExtraSelection>");
static const int T_QList_QTextFrame =                 qRegisterMetaType<QList<QTextFrame*> >("QList<QTextFrame*>");
static const int T_QList_QTreeWidgetItem =            qRegisterMetaType<QList<QTreeWidgetItem*> >("QList<QTreeWidgetItem*>");
static const int T_QList_QUndoStack =                 qRegisterMetaType<QList<QUndoStack*> >("QList<QUndoStack*>");
static const int T_QList_QUrl =                       qRegisterMetaType<QList<QUrl> >("QList<QUrl>");
static const int T_QList_QWidget =                    qRegisterMetaType<QList<QWidget*> >("QList<QWidget*>");
static const int T_QWidgetList =                      qRegisterMetaType<QList<QWidget*> >("QWidgetList");
static const int T_QList_int =                        qRegisterMetaType<QList<int> >("QList<int>");
static const int T_QList_qreal =                      qRegisterMetaType<QList<qreal> >("QList<qreal>");
static const int T_QModelIndex =                      qRegisterMetaType<QModelIndex>("QModelIndex");
static const int T_QPainterPath =                     qRegisterMetaType<QPainterPath>("QPainterPath");
static const int T_QPolygonF =                        qRegisterMetaType<QPolygonF>("QPolygonF");
static const int T_QRgb =                             qRegisterMetaType<QRgb>("QRgb");
static const int T_QTableWidgetSelectionRange =       qRegisterMetaType<QTableWidgetSelectionRange>("QTableWidgetSelectionRange");
static const int T_QTextBlock =                       qRegisterMetaType<QTextBlock>("QTextBlock");
static const int T_QTextCharFormat =                  qRegisterMetaType<QTextCharFormat>("QTextCharFormat");
static const int T_QTextCursor =                      qRegisterMetaType<QTextCursor>("QTextCursor");
static const int T_QTextDocumentFragment =            qRegisterMetaType<QTextDocumentFragment>("QTextDocumentFragment");
static const int T_QTextLine =                        qRegisterMetaType<QTextLine>("QTextLine");
static const int T_QTextOption =                      qRegisterMetaType<QTextOption>("QTextOption");
#if QT_VERSION < 0x40700
static const int T_QVariant =                         qRegisterMetaType<QVariant>("QVariant");
static const int T_QList_QVariant =                   qRegisterMetaType<QVariantList>("QVariantList");
#endif
static const int T_QVector_QGradientstop =            qRegisterMetaType<QVector<QGradientStop> >("QGradientStops");
static const int T_QVector_QLine =                    qRegisterMetaType<QVector<QLine> >("QVector<QLine>");
static const int T_QVector_QLineF =                   qRegisterMetaType<QVector<QLineF> >("QVector<QLineF>");
static const int T_QVector_QPoint =                   qRegisterMetaType<QVector<QPoint> >("QVector<QPoint>");
static const int T_QVector_QPointF =                  qRegisterMetaType<QVector<QPointF> >("QVector<QPointF>");
static const int T_QVector_QRect =                    qRegisterMetaType<QVector<QRect> >("QVector<QRect>");
static const int T_QVector_QRectF =                   qRegisterMetaType<QVector<QRectF> >("QVector<QRectF>");
static const int T_QVector_QRgb =                     qRegisterMetaType<QVector<QRgb> >("QVector<QRgb>");
static const int T_QVector_QTextFormat =              qRegisterMetaType<QVector<QTextFormat> >("QVector<QTextFormat>");
static const int T_QVector_QTextLength =              qRegisterMetaType<QVector<QTextLength> >("QVector<QTextLength>");
static const int T_QVector_qreal =                    qRegisterMetaType<QVector<qreal> >("QVector<qreal>");

void iniCLFunctions() {
    cl_object eql(make_simple_base_string((char*)"EQL"));
    if(cl_find_package(eql) == Cnil) {
        cl_make_package(1, eql); }
    si_select_package(eql);
    cl_def_c_function(c_string_to_object((char*)"%make-qimage/dangerous"), (cl_objectfn_fixed)make_qimage_dangerous, 5);
    cl_def_c_function(c_string_to_object((char*)"qadd-event-filter"),      (cl_objectfn_fixed)qadd_event_filter,     3);
    cl_def_c_function(c_string_to_object((char*)"%qapropos"),              (cl_objectfn_fixed)qapropos2,             3);
    cl_def_c_function(c_string_to_object((char*)"qapp"),                   (cl_objectfn_fixed)qapp,                  0);
    cl_def_c_function(c_string_to_object((char*)"qcall-default"),          (cl_objectfn_fixed)qcall_default,         0);
    cl_def_c_function(c_string_to_object((char*)"qclear-event-filters"),   (cl_objectfn_fixed)qclear_event_filters,  0);
    cl_def_c_function(c_string_to_object((char*)"%qconnect"),              (cl_objectfn_fixed)qconnect2,             4);
    cl_def_c_function(c_string_to_object((char*)"qcopy"),                  (cl_objectfn_fixed)qcopy,                 1);
    cl_def_c_function(c_string_to_object((char*)"%qdelete"),               (cl_objectfn_fixed)qdelete2,              2);
    cl_def_c_function(c_string_to_object((char*)"%qdisconnect"),           (cl_objectfn_fixed)qdisconnect2,          4);
    cl_def_c_function(c_string_to_object((char*)"qenum"),                  (cl_objectfn_fixed)qenum,                 2);
    cl_def_c_function(c_string_to_object((char*)"qescape"),                (cl_objectfn_fixed)qescape,               1);
    cl_def_c_function(c_string_to_object((char*)"%qexec"),                 (cl_objectfn_fixed)qexec2,                1);
    cl_def_c_function(c_string_to_object((char*)"qexit"),                  (cl_objectfn_fixed)qexit,                 0);
    cl_def_c_function(c_string_to_object((char*)"qfind-child"),            (cl_objectfn_fixed)qfind_child,           2);
    cl_def_c_function(c_string_to_object((char*)"qfrom-utf8"),             (cl_objectfn_fixed)qfrom_utf8,            1);
    cl_def_c_function(c_string_to_object((char*)"qid"),                    (cl_objectfn_fixed)qid,                   1);
    cl_def_c_function(c_string_to_object((char*)"%qinvoke-method"),        (cl_objectfn_fixed)qinvoke_method2,       4);
    cl_def_c_function(c_string_to_object((char*)"qload-ui"),               (cl_objectfn_fixed)qload_ui,              1);
    cl_def_c_function(c_string_to_object((char*)"qlocal8bit"),             (cl_objectfn_fixed)qlocal8bit,            1);
    cl_def_c_function(c_string_to_object((char*)"qmeta-enums"),            (cl_objectfn_fixed)qmeta_enums,           0);
    cl_def_c_function(c_string_to_object((char*)"%qnew-instance"),         (cl_objectfn_fixed)qnew_instance2,        2);
    cl_def_c_function(c_string_to_object((char*)"%qobject-names"),         (cl_objectfn_fixed)qobject_names2,        1);
    cl_def_c_function(c_string_to_object((char*)"qok"),                    (cl_objectfn_fixed)qok,                   0);
    cl_def_c_function(c_string_to_object((char*)"qoverride"),              (cl_objectfn_fixed)qoverride,             3);
    cl_def_c_function(c_string_to_object((char*)"qprocess-events"),        (cl_objectfn_fixed)qprocess_events,       0);
    cl_def_c_function(c_string_to_object((char*)"qproperty"),              (cl_objectfn_fixed)qproperty,             2);
    cl_def_c_function(c_string_to_object((char*)"%qquit"),                 (cl_objectfn_fixed)qquit2,                2);
    cl_def_c_function(c_string_to_object((char*)"%qrequire"),              (cl_objectfn_fixed)qrequire2,             2);
    cl_def_c_function(c_string_to_object((char*)"qsender"),                (cl_objectfn_fixed)qsender,               0);
    cl_def_c_function(c_string_to_object((char*)"%qset-gc"),               (cl_objectfn_fixed)qset_gc,               1);
    cl_def_c_function(c_string_to_object((char*)"qset-property"),          (cl_objectfn_fixed)qset_property,         3);
    cl_def_c_function(c_string_to_object((char*)"qsingle-shot"),           (cl_objectfn_fixed)qsingle_shot,          2);
    cl_def_c_function(c_string_to_object((char*)"qstatic-meta-object"),    (cl_objectfn_fixed)qstatic_meta_object,   1);
    cl_def_c_function(c_string_to_object((char*)"qsuper-class-name"),      (cl_objectfn_fixed)qsuper_class_name,     1);
    cl_def_c_function(c_string_to_object((char*)"qtranslate"),             (cl_objectfn_fixed)qtranslate,            3);
    cl_def_c_function(c_string_to_object((char*)"qt-object-name"),         (cl_objectfn_fixed)qt_object_name,        1);
    cl_def_c_function(c_string_to_object((char*)"%qui-class"),             (cl_objectfn_fixed)qui_class2,            2);
    cl_def_c_function(c_string_to_object((char*)"qui-names"),              (cl_objectfn_fixed)qui_names,             1);
    cl_def_c_function(c_string_to_object((char*)"qutf8"),                  (cl_objectfn_fixed)qutf8,                 1);
    cl_def_c_function(c_string_to_object((char*)"qversion"),               (cl_objectfn_fixed)qversion,              0); }

// QtObject methods

QByteArray QtObject::idToClassName(int id) {
    return (id > 0) ? LObjects::qNames.at(id - 1) : LObjects::nNames.at(-id - 1); }

QByteArray QtObject::className() const {
    return id ? idToClassName(id) : QByteArray("?"); }



// *** utilities ***

static cl_object from_cstring(const QByteArray& s) {
    cl_object l_s = ecl_alloc_simple_base_string(s.length());
    memcpy(l_s->base_string.self, s.constData(), s.length());
    return l_s; }

static void arguments_msg(cl_object l_lst) {
    STATIC_SYMBOL(s_error_output, (char*)"*ERROR-OUTPUT*")
    cl_format(3,
              cl_symbol_value(s_error_output),
              make_constant_base_string((char*)"~{~%~A~}"),
              l_lst); }

static void type_msg(const QByteArray& wanted, const QByteArray& got) {
    STATIC_SYMBOL(s_error_output, (char*)"*ERROR-OUTPUT*")
    cl_format(4,
              cl_symbol_value(s_error_output),
              make_constant_base_string((char*)"~%[EQL:typ] wanted <~A> got <~A>"),
              from_cstring(wanted),
              from_cstring(got.isEmpty() ? "no Qt object" : got)); }

void error_msg(const char* fun, cl_object l_args) {
    STATIC_SYMBOL_PKG(s_break_on_errors, (char*)"*BREAK-ON-ERRORS*", (char*)"EQL")
    if(cl_symbol_value(s_break_on_errors) != Cnil) {
        STATIC_SYMBOL_PKG(s_break, (char*)"%BREAK", (char*)"EQL") // see lisp/ini.lisp
        cl_funcall(4,
                   s_break,
                   make_constant_base_string((char*)"~%[EQL:err] ~A ~{~S~^ ~}~%"),
                   make_constant_base_string((char*)fun),
                   l_args); }
    else {
        STATIC_SYMBOL(s_error_output, (char*)"*ERROR-OUTPUT*")
        cl_format(4,
                  cl_symbol_value(s_error_output),
                  make_constant_base_string((char*)"~%[EQL:err] ~A ~{~S~^ ~}~%"),
                  make_constant_base_string((char*)fun),
                  l_args); }}

static char** to_cstring_ptr(cl_object l_str) {
    if(ECL_BASE_STRING_P(l_str)) {
        return (char**)&l_str->base_string.self; }
    return 0; }

static const QMetaObject* staticMetaObject(QtObject o) {
    return LObjects::staticMetaObject(QByteArray(), o.id); }

static const QMetaObject* methodMetaObject(QtObject o) {
    return (o.isQObject() ? LObjects::Q[o.id - 1] : LObjects::N[-o.id - 1])->metaObject(); }

static const QMetaObject* methodMetaObjectFromName(const QByteArray& name, bool qobject) {
    const QMetaObject* mo = 0;
    int n = qobject ? LObjects::q_names.value(name, 0) : LObjects::n_names.value(name, 0);
    if(n) {
        QObject* o = qobject ? LObjects::Q[n - 1] : LObjects::N[n - 1];
        if(o) {
            mo = o->metaObject(); }}
    return mo; }

static QByteArray superClassName(const QByteArray& name, bool* found = 0) {
    QByteArray super;
    if(LObjects::q_names.value(name, 0)) {
        if(found) {
            *found = true; }
        const QMetaObject* moStatic = LObjects::staticMetaObject(name);
        if(moStatic) {
            const QMetaObject* mo = moStatic->superClass();
            if(mo) {
                super = mo->className(); }}}
    else if(LObjects::n_names.value(name, 0)) {
        if(found) {
            *found = true; }
        super = LObjects::nObjectSuperClass(name); }
    return super; }

static bool inherits(const QByteArray& sub, const QByteArray& super) {
    if(sub == super) {
        return true; }
    QByteArray upper(sub);
    while(!(upper = superClassName(upper)).isEmpty()) {
        // multiple inheritance exceptions (see helper/multiple-inheritance.txt)
        if("QGraphicsObject" == upper) {
            upper = "QGraphicsItem"; }
        if(upper == super) {
            return true; }}
    return false; }

static QByteArray prettyFunName(const QByteArray& name, bool this_arg) {
    QByteArray pretty(name.mid(QChar(name.at(0)).isUpper() ? 1 : 0));
    if(this_arg) {
        pretty = pretty.left(pretty.indexOf('(') + 1) +
                 pretty.mid(pretty.indexOf(',') + 1); }
    if(pretty.endsWith('(')) {
        pretty.truncate(pretty.length() - 1); }
    return pretty; }

enum CallType { SignalOrSlot, Method, Static, Embedded };

static int findMethodIndex(CallType type, const QByteArray& name, const QMetaObject* mo, int len) {
    int n = -1;
    bool this_arg = (Method == type);
    QByteArray search(name);
    bool exact = true;
    if(search.endsWith(')')) {
        if(search.endsWith("...)")) {
            exact = false;
            search.truncate(search.length() - 4);
            if(!search.endsWith(',')) {
                search.append(','); }}}
    else {
        if(!len && !this_arg) {
            if(search.endsWith('(')) {
                search.append(')'); }
            else {
                search.append("()"); }}
        else {
            exact = false; }}
    if(exact) {
        n = mo->indexOfMethod(search); }
    else {
        if(!search.contains('(')) {
            search.append('('); }
        StrList candidates;
        int min = ((SignalOrSlot == type) || (Embedded == type)) ? 0 : mo->methodOffset();
        for(int i = mo->methodCount() - 1; i >= min; --i) {
            QByteArray sig(mo->method(i).signature());
            int len_args = sig.count(',');
            if(!this_arg) {
                if(!sig.endsWith("()")) {
                    ++len_args; }}
            if(len_args == len) {
                if(sig.startsWith(search)) {
                    n = i;
                    candidates << sig; }}}
        if(candidates.size() > 1) {
            n = -1;
            cl_object l_lst = Cnil;
            l_lst = CONS(from_cstring("[EQL:arg] QINVOKE-METHOD ambiguous, candidates are:"), l_lst);
            l_lst = CONS(from_cstring("-> " + prettyFunName(name, this_arg)), l_lst);
            Q_FOREACH(QByteArray sig, candidates) {
                l_lst = CONS(from_cstring("   " + prettyFunName(sig, this_arg)), l_lst); }
            arguments_msg(cl_nreverse(l_lst)); }}
    return n; }

static cl_object q_keyword() {
    STATIC_SYMBOL_PKG(s_q, (char*)"Q", (char*)"KEYWORD")
    return s_q; }

static cl_object qt_keyword() {
    STATIC_SYMBOL_PKG(s_qt, (char*)"QT", (char*)"KEYWORD")
    return s_qt; }

static cl_object make_vector() {
    STATIC_SYMBOL_PKG(s_make_vector, (char*)"%MAKE-VECTOR", (char*)"EQL") // see lisp/ini.lisp
    return cl_funcall(1, s_make_vector); }



// *** type conversions ***

template<typename T>
static T toInt(cl_object l_num) {
    T i = 0;
    if(cl_integerp(l_num) == Ct) {
        i = fixint(l_num); }
    return i; }

static int toInt(cl_object l_num) {
    return toInt<int>(l_num); }

template<typename T>
static T toUInt(cl_object l_num) {
    T i = 0;
    if(cl_integerp(l_num) == Ct) {
        i = fixnnint(l_num); }
    return i; }

static int toUInt(cl_object l_num) {
    return toUInt<uint>(l_num); }

template<typename T>
static T toFloat(cl_object l_num) {
    T f = 0;
    if(ECL_SINGLE_FLOAT_P(l_num)) {
        f = sf(l_num); }
    else if(ECL_DOUBLE_FLOAT_P(l_num)) {
        f = df(l_num); }
#ifdef ECL_LONG_FLOAT
    else if(ECL_LONG_FLOAT_P(l_num)) {
        f = ecl_long_float(l_num); }
#endif
    else if(cl_integerp(l_num) == Ct) {
        f = fixint(l_num); }
    else {
        cl_object l_f = cl_float(1, l_num);
        if(ECL_DOUBLE_FLOAT_P(l_f)) {
            f = df(l_f); }
        else if(ECL_SINGLE_FLOAT_P(l_f)) {
            f = sf(l_f); }}
    return f; }

static qreal toReal(cl_object l_num) {
    return toFloat<qreal>(l_num); }

static char toChar(cl_object l_ch) {
    char ch = 0;
    if(CHARACTERP(l_ch)) {
        ch = toInt(cl_char_code(l_ch)); }
    return ch; }

static QChar toQChar(cl_object l_ch) {
    QChar ch;
    if(CHARACTERP(l_ch)) {
        ch = QChar(toInt(cl_char_code(l_ch))); }
    return ch; }

static QByteArray toQByteArray(cl_object l_vec) {
    QByteArray ba;
    if(ECL_VECTORP(l_vec)) {
        int len = LEN(l_vec);
        ba.reserve(len);
        for(int i = 0; i < len; ++i) {
            ba[i] = toInt(ecl_aref(l_vec, i)); }}
    return ba; }

static QByteArray toCString(cl_object l_str) {
    QByteArray ba;
    if(ECL_STRINGP(l_str)) {
        if(ECL_BASE_STRING_P(l_str)) {
            ba = QByteArray((char*)l_str->base_string.self, l_str->base_string.fillp); }
        else {
            uint l = l_str->string.fillp;
            ba.reserve(l);
            ecl_character* l_s = l_str->string.self;
            for(uint i = 0; i < l; ++i) {
                ba[i] = l_s[i]; }}}
    return ba; }

static QString toQString(cl_object l_str) {
    QString s;
    if(ECL_STRINGP(l_str)) {
        if(ECL_BASE_STRING_P(l_str)) {
            s = QString::fromLatin1((char*)l_str->base_string.self, l_str->base_string.fillp); }
        else {
            uint l = l_str->string.fillp;
            s.reserve(l);
            ecl_character* l_s = l_str->string.self;
            for(uint i = 0; i < l; ++i) {
                s[i] = QChar(l_s[i]); }}}
    return s; }

static int classId(cl_object l_class) {
    QByteArray name(toCString(l_class));
    int id = LObjects::q_names.value(name, 0);
    if(!id) {
        id = -LObjects::n_names.value(name, 0); }
    return id; }

static QByteArray qtObjectName(cl_object l_obj) {
    STATIC_SYMBOL_PKG(s_ensure_qt_object, (char*)"ENSURE-QT-OBJECT", (char*)"EQL")
    STATIC_SYMBOL_PKG(s_qt_object_id,     (char*)"QT-OBJECT-ID",     (char*)"EQL")
    l_obj = cl_funcall(2, s_ensure_qt_object, l_obj);
    if(l_obj != Cnil) {
        return QtObject::idToClassName(toInt(cl_funcall(2, s_qt_object_id, l_obj))); }
    return QByteArray(); }

QtObject toQtObject(cl_object l_obj, cl_object l_cast, bool* qobject_align) {
    STATIC_SYMBOL_PKG(s_ensure_qt_object,  (char*)"ENSURE-QT-OBJECT",  (char*)"EQL")
    STATIC_SYMBOL_PKG(s_qt_object_pointer, (char*)"QT-OBJECT-POINTER", (char*)"EQL")
    STATIC_SYMBOL_PKG(s_qt_object_unique,  (char*)"QT-OBJECT-UNIQUE",  (char*)"EQL")
    STATIC_SYMBOL_PKG(s_qt_object_id,      (char*)"QT-OBJECT-ID",      (char*)"EQL")
    QtObject o;
    if(ECL_STRINGP(l_obj)) { // string name, for static methods
        o.id = classId(l_obj); }
    else {
        l_obj = cl_funcall(2, s_ensure_qt_object, l_obj);
        if(l_obj != Cnil) {
            o.pointer = (void*)fixnnint(cl_funcall(2, s_qt_object_pointer, l_obj));
            o.unique = fixnnint(cl_funcall(2, s_qt_object_unique, l_obj));
            o.id = toInt(cl_funcall(2, s_qt_object_id, l_obj));
            if(l_cast != Cnil) {
                int id_orig = o.id;
                o.id = classId(l_cast);
                if((id_orig > 0) && (o.id < 0)) {
                    *qobject_align = true; }}}}
    return o; }

static cl_object new_qt_object(void* pointer, uint unique, int id, bool finalize = false) {
    STATIC_SYMBOL_PKG(s_new_qt_object, (char*)"NEW-QT-OBJECT", (char*)"EQL")
    return cl_funcall(5,
                      s_new_qt_object,
                      ecl_make_unsigned_integer((cl_index)pointer),
                      ecl_make_unsigned_integer((cl_index)unique),
                      MAKE_FIXNUM(id),
                      finalize ? Ct : Cnil); }

cl_object qt_object_from_name(const QByteArray& name, void* pointer, uint unique, bool finalize) {
    QByteArray name2(name);
    if(name2.endsWith('*')) {
        name2.truncate(name2.length() - 1); }
    if(name2.startsWith("const ")) {
        name2 = name2.mid(6); }
    if('L' == name2.at(0)) {
        name2[0] = 'Q'; }
    int id = LObjects::q_names.value(name2, 0);
    if(!id) {
        id = -LObjects::n_names.value(name2, 0); }
    return new_qt_object(pointer, unique, id, finalize); }

static QString symbolName(cl_object l_symbol) {
    QString name;
    if((cl_symbolp(l_symbol) == Ct)) {
        name = toQString(cl_symbol_name(l_symbol)); }
    return name; }

static QStringList toQStringList(cl_object l_lst) {
    QStringList l;
    if(LISTP(l_lst)) {
        cl_object l_el = l_lst;
        while(l_el != Cnil) {
            l << toQString(cl_car(l_el));
            l_el = cl_cdr(l_el); }}
    return l; }

static QPolygon toQPolygon(cl_object l_lst) {
    QPolygon p;
    if(LISTP(l_lst)) {
        cl_object l_el = l_lst;
        while(l_el != Cnil) {
            p << QPoint(toInt(cl_first(l_el)), toInt(cl_second(l_el)));
            l_el = cl_cddr(l_el); }}
    return p; }

static QPolygonF toQPolygonF(cl_object l_lst) {
    QPolygonF p;
    if(LISTP(l_lst)) {
        cl_object l_el = l_lst;
        while(l_el != Cnil) {
            p << QPointF(toReal(cl_first(l_el)), toReal(cl_second(l_el)));
            l_el = cl_cddr(l_el); }}
    return p; }

static QColor toQColor(cl_object l_c) {
    if(Cnil == l_c) {
        return QColor(); }
    return QColor(toQString(l_c)); }

static QGradientStop toQGradientStop(cl_object l_gs) {
    QGradientStop gs;
    if(cl_consp(l_gs)) {
        gs = qMakePair(toReal(cl_car(l_gs)), toQColor(cl_cdr(l_gs))); }
    return gs; }

static QList<QTextEdit::ExtraSelection> toQTextEditExtraSelectionList(cl_object l_lst) {
    QList<QTextEdit::ExtraSelection> l;
    if(LISTP(l_lst)) {
        cl_object l_el = l_lst;
        while(l_el != Cnil) {
            cl_object l_curr = cl_first(l_el);
            QtObject q_cursor = toQtObject(cl_first(l_curr));
            QtObject q_format = toQtObject(cl_second(l_curr));
            if(("QTextCursor" == q_cursor.className()) &&
               ("QTextCharFormat" == q_format.className())) {
                QTextEdit::ExtraSelection sel;
                sel.cursor = *(QTextCursor*)q_cursor.pointer;
                sel.format = *(QTextCharFormat*)q_format.pointer;
                l << sel; }
            l_el = cl_rest(l_el); }}
    return l; }

// implicit pointer types
TO_QT_TYPE_PTR2(QBrush, qbrush)
TO_QT_TYPE_PTR2(QCursor, qcursor)
TO_QT_TYPE_PTR2(QDate, qdate)
TO_QT_TYPE_PTR2(QDateTime, qdatetime)
TO_QT_TYPE_PTR2(QFileInfo, qfileinfo)
TO_QT_TYPE_PTR2(QFont, qfont)
TO_QT_TYPE_PTR2(QIcon, qicon)
TO_QT_TYPE_PTR2(QImage, qimage)
TO_QT_TYPE_PTR2(QKeySequence, qkeysequence)
TO_QT_TYPE_PTR2(QLocale, qlocale)
TO_QT_TYPE_PTR2(QMatrix, qmatrix)
TO_QT_TYPE_PTR(QModelIndex, qmodelindex)
TO_QT_TYPE_PTR(QPainterPath, qpainterpath)
TO_QT_TYPE_PTR2(QPalette, qpalette)
TO_QT_TYPE_PTR2(QPen, qpen)
TO_QT_TYPE_PTR2(QPixmap, qpixmap)
TO_QT_TYPE_PTR2(QSizePolicy, qsizepolicy)
TO_QT_TYPE_PTR2(QTableWidgetSelectionRange, qtablewidgetselectionrange)
TO_QT_TYPE_PTR2(QTextBlock, qtextblock)
TO_QT_TYPE_PTR(QTextCharFormat, qtextcharformat)
TO_QT_TYPE_PTR(QTextCursor, qtextcursor)
TO_QT_TYPE_PTR(QTextDocumentFragment, qtextdocumentfragment)
TO_QT_TYPE_PTR2(QTextFormat, qtextformat)
TO_QT_TYPE_PTR2(QTextLength, qtextlength)
TO_QT_TYPE_PTR(QTextLine, qtextline)
TO_QT_TYPE_PTR(QTextOption, qtextoption)
TO_QT_TYPE_PTR2(QTime, qtime)
TO_QT_TYPE_PTR2(QTransform, qtransform)
TO_QT_TYPE_PTR2(QUrl, qurl)
TO_QT_TYPE_PTR(QVariant, qvariant)

TO_QT_TYPEF(QPoint)
TO_QT_TYPEF(QSize)

TO_QT_TYPEF2(QLine)
TO_QT_TYPEF2(QRect)

TO_QT_LIST_PTR(QAbstractAnimation)
TO_QT_LIST_PTR(QAbstractButton)
TO_QT_LIST_PTR(QAbstractState)
TO_QT_LIST_PTR(QAction)
TO_QT_LIST_PTR(QDockWidget)
TO_QT_LIST_PTR(QGesture)
TO_QT_LIST_PTR(QGraphicsItem)
TO_QT_LIST_PTR(QGraphicsTransform)
TO_QT_LIST_PTR(QGraphicsView)
TO_QT_LIST_PTR(QGraphicsWidget)
TO_QT_LIST_PTR(QListWidgetItem)
TO_QT_LIST_PTR(QMdiSubWindow)
TO_QT_LIST_PTR(QObject)
TO_QT_LIST_PTR(QStandardItem)
TO_QT_LIST_PTR(QTableWidgetItem)
TO_QT_LIST_PTR(QTextFrame)
TO_QT_LIST_PTR(QTreeWidgetItem)
TO_QT_LIST_PTR(QUndoStack)
TO_QT_LIST_PTR(QWidget)

TO_QT_LIST_VAL(QByteArray)
TO_QT_LIST_VAL(QFileInfo)
TO_QT_LIST_VAL(QKeySequence)
TO_QT_LIST_VAL(QPolygonF)
TO_QT_LIST_VAL(QSize)
TO_QT_LIST_VAL(QTableWidgetSelectionRange)
TO_QT_LIST_VAL(QTextBlock)
TO_QT_LIST_VAL(QUrl)
TO_QT_LIST_VAL2(int, Int)
TO_QT_LIST_VAL2(qreal, Real)

TO_QT_VECTOR_VAL(QGradientStop)
TO_QT_VECTOR_VAL(QLine)
TO_QT_VECTOR_VAL(QLineF)
TO_QT_VECTOR_VAL(QPoint)
TO_QT_VECTOR_VAL(QPointF)
TO_QT_VECTOR_VAL(QRect)
TO_QT_VECTOR_VAL(QRectF)
TO_QT_VECTOR_VAL(QTextFormat)
TO_QT_VECTOR_VAL(QTextLength)
TO_QT_VECTOR_VAL2(QRgb, UInt)
TO_QT_VECTOR_VAL2(qreal, Real)

QVariant toQVariant(cl_object l_obj, const char* s_type, int type) {
    QVariant var;
    if(type == -1) {
        type = QVariant::nameToType(s_type); }
    switch(type) {
        case QVariant::Bool:        var = (l_obj != Cnil); break;
        case QVariant::Brush:       var = toQBrush(l_obj); break;
        case QVariant::ByteArray:   var = toQByteArray(l_obj); break;
        case QVariant::Char:        var = toQChar(l_obj); break;
        case QVariant::Color:       var = toQColor(l_obj); break;
        case QVariant::Cursor:      var = toQCursor(l_obj); break;
        case QVariant::Date:        var = toQDate(l_obj); break;
        case QVariant::DateTime:    var = toQDateTime(l_obj); break;
        case QVariant::Double:      var = toFloat<double>(l_obj); break;
        case QVariant::Font:        var = toQFont(l_obj); break;
        case QVariant::Icon:        var = toQIcon(l_obj); break;
        case QVariant::Image:       var = toQImage(l_obj); break;
        case QVariant::Int:         var = toInt(l_obj); break;
        case QVariant::KeySequence: var = toQKeySequence(l_obj); break;
        case QVariant::Line:        var = toQLine(l_obj); break;
        case QVariant::LineF:       var = toQLineF(l_obj); break;
        case QVariant::Locale:      var = toQLocale(l_obj); break;
        case QVariant::LongLong:    var = toInt<qlonglong>(l_obj); break;
        case QVariant::Matrix:      var = toQMatrix(l_obj); break;
        case QVariant::Palette:     var = toQPalette(l_obj); break;
        case QVariant::Pen:         var = toQPen(l_obj); break;
        case QVariant::Pixmap:      var = toQPixmap(l_obj); break;
        case QVariant::Point:       var = toQPoint(l_obj); break;
        case QVariant::PointF:      var = toQPointF(l_obj); break;
        case QVariant::Polygon:     var = toQPolygon(l_obj); break;
        case QVariant::Rect:        var = toQRect(l_obj); break;
        case QVariant::RectF:       var = toQRectF(l_obj); break;
        case QVariant::Size:        var = toQSize(l_obj); break;
        case QVariant::SizeF:       var = toQSizeF(l_obj); break;
        case QVariant::SizePolicy:  var = toQSizePolicy(l_obj); break;
        case QVariant::String:      var = toQString(l_obj); break;
        case QVariant::StringList:  var = toQStringList(l_obj); break;
        case QVariant::TextFormat:  var = toQTextFormat(l_obj); break;
        case QVariant::TextLength:  var = toQTextLength(l_obj); break;
        case QVariant::Time:        var = toQTime(l_obj); break;
        case QVariant::Transform:   var = toQTransform(l_obj); break;
        case QVariant::Url:         var = toQUrl(l_obj); break;
        case QVariant::UInt:        var = toUInt(l_obj); break;
        case QVariant::ULongLong:   var = toUInt<qulonglong>(l_obj); break; }
    // for Qt_EQL (object pointer)
    if(QMetaType::VoidStar == type) {
        QtObject obj = toQtObject(l_obj);
        if(obj.pointer) {
            var = qVariantFromValue(obj.pointer); }}
    return var; }

static QVariantList toQVariantList(cl_object l_lst) {
    QVariantList l;
    if(LISTP(l_lst)) {
        cl_object l_el = l_lst;
        while(l_el != Cnil) {
            QtObject q_var = toQtObject(cl_car(l_el));
            if("QVariant" == q_var.className()) {
                l << *(QVariant*)q_var.pointer; }
            l_el = cl_cdr(l_el); }}
    return l; }

static cl_object from_char(char ch) {
    return cl_code_char(MAKE_FIXNUM((int)ch)); }

static cl_object from_qchar(const QChar& ch) {
    return cl_code_char(MAKE_FIXNUM(ch.unicode())); }

static cl_object from_qbytearray(const QByteArray& ba) {
    cl_object l_vec = make_vector();
    for(int i = 0; i < ba.size(); ++i) {
        cl_vector_push_extend(2, MAKE_FIXNUM(ba.at(i)), l_vec); }
    return l_vec; }

static cl_object from_qstring(const QString& s) {
    cl_object l_s = ecl_alloc_simple_extended_string(s.length());
    ecl_character* l_p = l_s->string.self;
    for(int i = 0; i < s.length(); ++i) {
        l_p[i] = s.at(i).unicode(); }
    return l_s; }

static cl_object from_qstringlist(const QStringList& l) {
    cl_object l_lst = Cnil;
    Q_FOREACH(QString s, l) {
        l_lst = CONS(from_qstring(s), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_intlist(const QList<int>& l) {
    cl_object l_lst = Cnil;
    Q_FOREACH(int i, l) {
        l_lst = CONS(ecl_make_integer(i), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_qreallist(const QList<qreal>& l) {
    cl_object l_lst = Cnil;
    Q_FOREACH(qreal r, l) {
        l_lst = CONS(ecl_make_doublefloat(r), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_qcolor(const QColor& col) {
    return col.isValid() ? from_qstring(col.name()) : Cnil; }

static cl_object from_qpolygon(const QPolygon& p) {
    cl_object l_lst = Cnil;
    for(int i = 0; i < p.size(); ++i) {
        int x, y;
        p.point(i, &x, &y);
        l_lst = CONS(ecl_make_integer(y), CONS(ecl_make_integer(x), l_lst)); }
    return cl_nreverse(l_lst); }

static cl_object from_qpolygonf(const QPolygonF& pol) {
    cl_object l_lst = Cnil;
    for(int i = 0; i < pol.size(); ++i) {
        QPointF p = pol.at(i);
        l_lst = CONS(ecl_make_doublefloat(p.y()), CONS(ecl_make_doublefloat(p.x()), l_lst)); }
    return cl_nreverse(l_lst); }

static cl_object from_qgradientstop(const QGradientStop& gs) {
    return CONS(ecl_make_doublefloat(gs.first), from_qcolor(gs.second)); }

static cl_object from_qwidgetlist(const QWidgetList& wl) {
    cl_object l_lst = Cnil;
    Q_FOREACH(QWidget* w, wl) {
        l_lst = CONS(qt_object_from_name(w->metaObject()->className(), w), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_qobjectlist(const QObjectList& ol) {
    cl_object l_lst = Cnil;
    Q_FOREACH(QObject* o, ol) {
        l_lst = CONS(qt_object_from_name(o->metaObject()->className(), o), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_qtexteditextraselectionlist(const QList<QTextEdit::ExtraSelection>& l) {
    cl_object l_lst = Cnil;
    Q_FOREACH(QTextEdit::ExtraSelection sel, l) {
        l_lst = CONS(LIST2(qt_object_from_name("QTextCursor", new QTextCursor(sel.cursor)),
                           qt_object_from_name("QTextCharFormat", new QTextCharFormat(sel.format))),
                     l_lst); }
    return cl_nreverse(l_lst); }

TO_CL_TYPEF(QPoint, qpoint, x, y)
TO_CL_TYPEF(QSize, qsize, width, height)

TO_CL_TYPEF2(QLine, qline, x1, y1, x2, y2)
TO_CL_TYPEF2(QRect, qrect, x, y, width, height)

TO_CL_LIST_PTR(QAbstractAnimation, qabstractanimation)
TO_CL_LIST_PTR(QAbstractButton, qabstractbutton)
TO_CL_LIST_PTR(QAbstractState, qabstractstate)
TO_CL_LIST_PTR(QAction, qaction)
TO_CL_LIST_PTR(QDockWidget, qdockwidget)
TO_CL_LIST_PTR(QGesture, qgesture)
TO_CL_LIST_PTR(QGraphicsItem, qgraphicsitem)
TO_CL_LIST_PTR(QGraphicsTransform, qgraphicstransform)
TO_CL_LIST_PTR(QGraphicsView, qgraphicsview)
TO_CL_LIST_PTR(QGraphicsWidget, qgraphicswidget)
TO_CL_LIST_PTR(QListWidgetItem, qlistwidgetitem)
TO_CL_LIST_PTR(QMdiSubWindow, qmdisubwindow)
TO_CL_LIST_PTR(QStandardItem, qstandarditem)
TO_CL_LIST_PTR(QTableWidgetItem, qtablewidgetitem)
TO_CL_LIST_PTR(QTextFrame, qtextframe)
TO_CL_LIST_PTR(QTreeWidgetItem, qtreewidgetitem)
TO_CL_LIST_PTR(QUndoStack, qundostack)

TO_CL_LIST_VAL(QByteArray, qbytearray)
TO_CL_LIST_VAL(QFileInfo, qfileinfo)
TO_CL_LIST_VAL(QKeySequence, qkeysequence)
TO_CL_LIST_VAL(QPolygonF, qpolygonf)
TO_CL_LIST_VAL(QSize, qsize)
TO_CL_LIST_VAL(QTableWidgetSelectionRange, qtablewidgetselectionrange)
TO_CL_LIST_VAL(QTextBlock, qtextblock)
TO_CL_LIST_VAL(QUrl, qurl)

TO_CL_VECTOR_VAL(QGradientStop, qgradientstop)
TO_CL_VECTOR_VAL(QLine, qline)
TO_CL_VECTOR_VAL(QLineF, qlinef)
TO_CL_VECTOR_VAL(QPoint, qpoint)
TO_CL_VECTOR_VAL(QPointF, qpointf)
TO_CL_VECTOR_VAL(QRect, qrect)
TO_CL_VECTOR_VAL(QRectF, qrectf)
TO_CL_VECTOR_VAL(QTextFormat, qtextformat)
TO_CL_VECTOR_VAL(QTextLength, qtextlength)
TO_CL_VECTOR_VAL2(QRgb, qrgb, ecl_make_unsigned_integer)
TO_CL_VECTOR_VAL2(qreal, qreal, ecl_make_doublefloat)

static cl_object from_qvariant_value(const QVariant& var) {
    cl_object l_obj = Cnil;
    int t = var.type();
    switch(t) {
        case QVariant::Bool:        l_obj = var.toBool() ? Ct : Cnil; break;
        case QVariant::Brush:       l_obj = from_qbrush(qVariantValue<QBrush>(var)); break;
        case QVariant::ByteArray:   l_obj = from_qbytearray(var.toByteArray()); break;
        case QVariant::Char:        l_obj = from_qchar(var.toChar()); break;
        case QVariant::Color:       l_obj = from_qstring(var.toString()); break;
        case QVariant::Cursor:      l_obj = from_qcursor(qVariantValue<QCursor>(var)); break;
        case QVariant::Date:        l_obj = from_qdate(var.toDate()); break;
        case QVariant::DateTime:    l_obj = from_qdatetime(var.toDateTime()); break;
        case QVariant::Double:      l_obj = ecl_make_doublefloat(var.toDouble()); break;
        case QVariant::Font:        l_obj = from_qfont(qVariantValue<QFont>(var)); break;
        case QVariant::Icon:        l_obj = from_qicon(qVariantValue<QIcon>(var)); break;
        case QVariant::Int:         l_obj = ecl_make_integer(var.toInt()); break;
        case QVariant::Image:       l_obj = from_qimage(qVariantValue<QImage>(var)); break;
        case QVariant::KeySequence: l_obj = from_qkeysequence(qVariantValue<QKeySequence>(var)); break;
        case QVariant::Line:        l_obj = from_qline(var.toLine()); break;
        case QVariant::LineF:       l_obj = from_qlinef(var.toLineF()); break;
        case QVariant::Locale:      l_obj = from_qlocale(var.toLocale()); break;
        case QVariant::LongLong:    l_obj = ecl_make_integer(var.toLongLong());
        case QVariant::Palette:     l_obj = from_qpalette(qVariantValue<QPalette>(var)); break;
        case QVariant::Pen:         l_obj = from_qpen(qVariantValue<QPen>(var)); break;
        case QVariant::Pixmap:      l_obj = from_qpixmap(qVariantValue<QPixmap>(var)); break;
        case QVariant::Point:       l_obj = from_qpoint(var.toPoint()); break;
        case QVariant::PointF:      l_obj = from_qpointf(var.toPointF()); break;
        case QVariant::Polygon:     l_obj = from_qpolygon(qVariantValue<QPolygon>(var)); break;
        case QVariant::Rect:        l_obj = from_qrect(var.toRect()); break;
        case QVariant::RectF:       l_obj = from_qrectf(var.toRectF()); break;
        case QVariant::Size:        l_obj = from_qsize(var.toSize()); break;
        case QVariant::SizeF:       l_obj = from_qsizef(var.toSizeF()); break;
        case QVariant::SizePolicy:  l_obj = from_qsizepolicy(qVariantValue<QSizePolicy>(var)); break;
        case QVariant::String:      l_obj = from_qstring(var.toString()); break;
        case QVariant::StringList:  l_obj = from_qstringlist(var.toStringList()); break;
        case QVariant::TextFormat:  l_obj = from_qtextformat(qVariantValue<QTextFormat>(var)); break;
        case QVariant::TextLength:  l_obj = from_qtextlength(qVariantValue<QTextLength>(var)); break;
        case QVariant::Time:        l_obj = from_qtime(var.toTime()); break;
        case QVariant::Url:         l_obj = from_qurl(var.toUrl()); break;
        case QVariant::UInt:        l_obj = ecl_make_unsigned_integer(var.toUInt()); break;
        case QVariant::ULongLong:   l_obj = ecl_make_unsigned_integer(var.toULongLong()); }
    return l_obj; }

static cl_object from_qvariantlist(const QVariantList& l) {
    cl_object l_lst = Cnil;
    Q_FOREACH(QVariant v, l) {
        l_lst = CONS(from_qvariant_value(v), l_lst); }
    return cl_nreverse(l_lst); }

static MetaArg toMetaArg(const QByteArray& sType, cl_object l_arg) {
    void* p = 0;
    const int n = QMetaType::type(sType);
    switch(n) {
        case QMetaType::Bool:                    p = new bool(l_arg != Cnil); break;
        case QMetaType::Char:                    p = new char(toChar(l_arg)); break;
        case QMetaType::Double:                  p = new double(toFloat<double>(l_arg)); break;
        case QMetaType::Float:                   p = new float(toFloat<float>(l_arg)); break;
        case QMetaType::Int:                     p = new int(toInt(l_arg)); break;
        case QMetaType::Long:                    p = new int(toInt<long>(l_arg)); break;
        case QMetaType::LongLong:                p = new qlonglong(toInt<qlonglong>(l_arg)); break;
        case QMetaType::UChar:                   p = new uchar(toUInt(l_arg)); break;
        case QMetaType::UInt:                    p = new uint(toUInt(l_arg)); break;
        case QMetaType::ULong:                   p = new ulong(toUInt<ulong>(l_arg)); break;
        case QMetaType::ULongLong:               p = new qulonglong(toUInt<qulonglong>(l_arg)); break;
        case QMetaType::QByteArray:              p = new QByteArray(toQByteArray(l_arg)); break;
        case QMetaType::QChar:                   p = new QChar(toQChar(l_arg)); break;
        case QMetaType::QColor:                  p = new QColor(toQColor(l_arg)); break;
        case QMetaType::QCursor:                 p = new QCursor(toQCursor(l_arg)); break;
        case QMetaType::QDate:                   p = new QDate(*toQDatePointer(l_arg)); break;
        case QMetaType::QDateTime:               p = new QDateTime(*toQDateTimePointer(l_arg)); break;
        case QMetaType::QFont:                   p = new QFont(*toQFontPointer(l_arg)); break;
        case QMetaType::QKeySequence:            p = new QKeySequence(*toQKeySequencePointer(l_arg)); break;
        case QMetaType::QLine:                   p = new QLine(toQLine(l_arg)); break;
        case QMetaType::QLineF:                  p = new QLineF(toQLineF(l_arg)); break;
        case QMetaType::QLocale:                 p = new QLocale(*toQLocalePointer(l_arg)); break;
        case QMetaType::QMatrix:                 p = new QMatrix(*toQMatrixPointer(l_arg)); break;
        case QMetaType::QPoint:                  p = new QPoint(toQPoint(l_arg)); break;
        case QMetaType::QPointF:                 p = new QPointF(toQPointF(l_arg)); break;
        case QMetaType::QPolygon:                p = new QPolygon(toQPolygon(l_arg)); break;
        case QMetaType::QRect:                   p = new QRect(toQRect(l_arg)); break;
        case QMetaType::QRectF:                  p = new QRectF(toQRectF(l_arg)); break;
        case QMetaType::QSize:                   p = new QSize(toQSize(l_arg)); break;
        case QMetaType::QSizeF:                  p = new QSizeF(toQSizeF(l_arg)); break;
        case QMetaType::QSizePolicy:             p = new QSizePolicy(*toQSizePolicyPointer(l_arg)); break;
        case QMetaType::QString:                 p = new QString(toQString(l_arg)); break;
        case QMetaType::QStringList:             p = new QStringList(toQStringList(l_arg)); break;
        case QMetaType::QBrush:                  p = new QBrush(*toQBrushPointer(l_arg)); break;
        case QMetaType::QIcon:                   p = new QIcon(*toQIconPointer(l_arg)); break;
        case QMetaType::QImage:                  p = new QImage(*toQImagePointer(l_arg)); break;
        case QMetaType::QPalette:                p = new QPalette(*toQPalettePointer(l_arg)); break;
        case QMetaType::QPen:                    p = new QPen(*toQPenPointer(l_arg)); break;
        case QMetaType::QPixmap:                 p = new QPixmap(*toQPixmapPointer(l_arg)); break;
        case QMetaType::QTextFormat:             p = new QTextFormat(*toQTextFormatPointer(l_arg)); break;
        case QMetaType::QTextLength:             p = new QTextLength(*toQTextLengthPointer(l_arg)); break;
        case QMetaType::QTime:                   p = new QTime(*toQTimePointer(l_arg)); break;
        case QMetaType::QTransform:              p = new QTransform(*toQTransformPointer(l_arg)); break;
        case QMetaType::QUrl:                    p = new QUrl(*toQUrlPointer(l_arg)); break;
#if QT_VERSION >= 0x40700
        case QMetaType::QVariant:                p = new QVariant(*toQVariantPointer(l_arg)); break;
        case QMetaType::QVariantList:            p = new QVariantList(toQVariantList(l_arg)); break;
#endif
    default:
        if(T_bool_ok_pointer == n) {
            p = new void*(&_ok_); }
        else if(sType.endsWith('*')) {
            if(sType.startsWith('Q') || sType.startsWith("const Q")) {
                QtObject o = toQtObject(l_arg);
                ulong l = (ulong)o.pointer;
                // cast from QObject to non QObject + multiple inheritance problem
                if((o.id > 0) && LObjects::n_names.contains(sType.left(sType.length() - 1))) {
                    l += sizeof(QObject); }
                void** v = new void*((void*)l);
                p = v; }
            else if("const char*" == sType) {
                p = to_cstring_ptr(l_arg); }}
        else if(T_QFileInfo == n)                        p = new QFileInfo(toQFileInfo(l_arg));
        else if(T_QFileInfoList == n)                    p = new QFileInfoList(toQFileInfoList(l_arg));
        else if(T_QGradientStop == n)                    p = new QGradientStop(toQGradientStop(l_arg));
        else if(T_QList_QAbstractAnimation == n)         p = new QList<QAbstractAnimation*>(toQAbstractAnimationList(l_arg));
        else if(T_QList_QAbstractButton == n)            p = new QList<QAbstractButton*>(toQAbstractButtonList(l_arg));
        else if(T_QList_QAbstractState == n)             p = new QList<QAbstractState*>(toQAbstractStateList(l_arg));
        else if(T_QList_QAction == n)                    p = new QList<QAction*>(toQActionList(l_arg));
        else if(T_QList_QByteArray == n)                 p = new QList<QByteArray>(toQByteArrayList(l_arg));
        else if(T_QList_QDockWidget == n)                p = new QList<QDockWidget*>(toQDockWidgetList(l_arg));
        else if(T_QList_QGesture == n)                   p = new QList<QGesture*>(toQGestureList(l_arg));
        else if(T_QList_QGraphicsItem == n)              p = new QList<QGraphicsItem*>(toQGraphicsItemList(l_arg));
        else if(T_QList_QGraphicsTransform == n)         p = new QList<QGraphicsTransform*>(toQGraphicsTransformList(l_arg));
        else if(T_QList_QGraphicsView == n)              p = new QList<QGraphicsView*>(toQGraphicsViewList(l_arg));
        else if(T_QList_QGraphicsWidget == n)            p = new QList<QGraphicsWidget*>(toQGraphicsWidgetList(l_arg));
        else if(T_QList_QKeySequence == n)               p = new QList<QKeySequence>(toQKeySequenceList(l_arg));
        else if(T_QList_QListWidgetItem == n)            p = new QList<QListWidgetItem*>(toQListWidgetItemList(l_arg));
        else if(T_QList_QMdiSubWindow == n)              p = new QList<QMdiSubWindow*>(toQMdiSubWindowList(l_arg));
        else if((T_QObjectList == n) || (T_QList_QObject == n))
            p = new QList<QObject*>(toQObjectList(l_arg));
        else if(T_QList_QPolygonF == n)                  p = new QList<QPolygonF>(toQPolygonFList(l_arg));
        else if(T_QList_QSize == n)                      p = new QList<QSize>(toQSizeList(l_arg));
        else if(T_QList_QStandardItem == n)              p = new QList<QStandardItem*>(toQStandardItemList(l_arg));
        else if(T_QList_QTableWidgetItem == n)           p = new QList<QTableWidgetItem*>(toQTableWidgetItemList(l_arg));
        else if(T_QList_QTableWidgetSelectionRange == n) p = new QList<QTableWidgetSelectionRange>(toQTableWidgetSelectionRangeList(l_arg));
        else if(T_QList_QTextBlock == n)                 p = new QList<QTextBlock>(toQTextBlockList(l_arg));
        else if(T_QList_QTextEdit_ExtraSelection == n)   p = new QList<QTextEdit::ExtraSelection>(toQTextEditExtraSelectionList(l_arg));
        else if(T_QList_QTextFrame == n)                 p = new QList<QTextFrame*>(toQTextFrameList(l_arg));
        else if(T_QList_QTreeWidgetItem == n)            p = new QList<QTreeWidgetItem*>(toQTreeWidgetItemList(l_arg));
        else if(T_QList_QUndoStack == n)                 p = new QList<QUndoStack*>(toQUndoStackList(l_arg));
        else if(T_QList_QUrl == n)                       p = new QList<QUrl>(toQUrlList(l_arg));
        else if((T_QWidgetList == n) || (T_QList_QWidget == n))
            p = new QList<QWidget*>(toQWidgetList(l_arg));
        else if(T_QList_int == n)                        p = new QList<int>(toIntList(l_arg));
        else if(T_QList_qreal == n)                      p = new QList<qreal>(toRealList(l_arg));
        else if(T_QModelIndex == n)                      p = new QModelIndex(*toQModelIndexPointer(l_arg));
        else if(T_QPainterPath == n)                     p = new QPainterPath(*toQPainterPathPointer(l_arg));
        else if(T_QPolygonF == n)                        p = new QPolygonF(toQPolygonF(l_arg));
        else if(T_QRgb == n)                             p = new QRgb(toUInt(l_arg));
        else if(T_QTableWidgetSelectionRange == n)       p = new QTableWidgetSelectionRange(*toQTableWidgetSelectionRangePointer(l_arg));
        else if(T_QTextBlock == n)                       p = new QTextBlock(*toQTextBlockPointer(l_arg));
        else if(T_QTextCharFormat == n)                  p = new QTextCharFormat(*toQTextCharFormatPointer(l_arg));
        else if(T_QTextCursor == n)                      p = new QTextCursor(*toQTextCursorPointer(l_arg));
        else if(T_QTextDocumentFragment == n)            p = new QTextDocumentFragment(*toQTextDocumentFragmentPointer(l_arg));
        else if(T_QTextLine == n)                        p = new QTextLine(*toQTextLinePointer(l_arg));
        else if(T_QTextOption == n)                      p = new QTextOption(*toQTextOptionPointer(l_arg));
#if QT_VERSION < 0x40700
        else if(T_QVariant == n)                         p = new QVariant(*toQVariantPointer(l_arg));
        else if(T_QList_QVariant == n)                   p = new QVariantList(toQVariantList(l_arg));
#endif
        else if(T_QVector_QGradientstop == n)            p = new QVector<QGradientStop>(toQGradientStopVector(l_arg));
        else if(T_QVector_QLine == n)                    p = new QVector<QLine>(toQLineVector(l_arg));
        else if(T_QVector_QLineF == n)                   p = new QVector<QLineF>(toQLineFVector(l_arg));
        else if(T_QVector_QPoint == n)                   p = new QVector<QPoint>(toQPointVector(l_arg));
        else if(T_QVector_QPointF == n)                  p = new QVector<QPointF>(toQPointFVector(l_arg));
        else if(T_QVector_QRect == n)                    p = new QVector<QRect>(toQRectVector(l_arg));
        else if(T_QVector_QRectF == n)                   p = new QVector<QRectF>(toQRectFVector(l_arg));
        else if(T_QVector_QRgb == n)                     p = new QVector<QRgb>(toQRgbVector(l_arg));
        else if(T_QVector_QTextFormat == n)              p = new QVector<QTextFormat>(toQTextFormatVector(l_arg));
        else if(T_QVector_QTextLength == n)              p = new QVector<QTextLength>(toQTextLengthVector(l_arg));
        else if(T_QVector_qreal == n)                    p = new QVector<qreal>(toqrealVector(l_arg));
        // module types
        else if((n >= LObjects::T_GLenum) &&
                (n <= LObjects::T_QGLFramebufferObjectFormat)) {
            if(LObjects::toMetaArg_opengl) {
                p = LObjects::toMetaArg_opengl(n, l_arg); }}
        else if((n >= LObjects::T_QHostAddress) &&
                (n <= LObjects::T_QSslKey)) {
            if(LObjects::toMetaArg_network) {
                p = LObjects::toMetaArg_network(n, l_arg); }}
        else if((n >= LObjects::T_QSqlDatabase) &&
                (n <= LObjects::T_QSqlRelation)) {
            if(LObjects::toMetaArg_sql) {
                p = LObjects::toMetaArg_sql(n, l_arg); }}
        else if((n >= LObjects::T_QWebElement) &&
                (n <= LObjects::T_QWebHitTestResult)) {
            if(LObjects::toMetaArg_webkit) {
                p = LObjects::toMetaArg_webkit(n, l_arg); }}
        else {
            int i_enum = -1;
            if(!sType.endsWith('>')) {
                i_enum = sType.indexOf("::"); }
            if(i_enum != -1) {
                const QMetaObject* mo = 0;
                if(sType.startsWith("Qt")) {
                    mo = staticQtMetaObject; }
                else {
                    mo = LObjects::staticMetaObject(sType.left(i_enum)); }
                int n = -1;
                if(mo) {
                    n = mo->indexOfEnumerator(sType.mid(i_enum + 2));
                    if(n != -1) {
                        QMetaEnum me = mo->enumerator(n);
                        int* i = new int(toInt(l_arg));
                        p = i; }}
                if(-1 == n) {
                    int* i = new int(toInt(l_arg));
                    p = i; }}}}
    return MetaArg(sType, p); }

cl_object to_lisp_arg(const MetaArg& arg) {
    cl_object l_ret = Cnil;
    void* p = arg.second;
    if(p) {
        QByteArray sType(arg.first);
        const int n = QMetaType::type(sType);
        switch(n) {
            case QMetaType::Bool:                    l_ret = *(bool*)p ? Ct : Cnil; break;
            case QMetaType::Char:                    l_ret = from_char(*(char*)p); break;
            case QMetaType::Double:                  l_ret = ecl_make_doublefloat(*(double*)p); break;
            case QMetaType::Float:                   l_ret = ecl_make_singlefloat(*(float*)p); break;
            case QMetaType::Int:                     l_ret = ecl_make_integer(*(int*)p); break;
            case QMetaType::Long:                    l_ret = ecl_make_integer(*(long*)p); break;
            case QMetaType::LongLong:                l_ret = ecl_make_integer(*(qlonglong*)p); break;
            case QMetaType::UChar:                   l_ret = MAKE_FIXNUM(*(uchar*)p); break;
            case QMetaType::UInt:                    l_ret = ecl_make_unsigned_integer(*(uint*)p); break;
            case QMetaType::ULong:                   l_ret = ecl_make_unsigned_integer(*(ulong*)p); break;
            case QMetaType::ULongLong:               l_ret = ecl_make_unsigned_integer(*(qulonglong*)p); break;
            case QMetaType::QBrush:                  l_ret = from_qbrush(*(QBrush*)p); break;
            case QMetaType::QByteArray:              l_ret = from_qbytearray(*(QByteArray*)p); break;
            case QMetaType::QChar:                   l_ret = from_qchar(*(QChar*)p); break;
            case QMetaType::QColor:                  l_ret = from_qcolor(*(QColor*)p); break;
            case QMetaType::QCursor:                 l_ret = from_qcursor(*(QCursor*)p); break;
            case QMetaType::QDate:                   l_ret = from_qdate(*(QDate*)p); break;
            case QMetaType::QDateTime:               l_ret = from_qdatetime(*(QDateTime*)p); break;
            case QMetaType::QFont:                   l_ret = from_qfont(*(QFont*)p); break;
            case QMetaType::QImage:                  l_ret = from_qimage(*(QImage*)p); break;
            case QMetaType::QKeySequence:            l_ret = from_qkeysequence(*(QKeySequence*)p); break;
            case QMetaType::QLine:                   l_ret = from_qline(*(QLine*)p); break;
            case QMetaType::QLineF:                  l_ret = from_qlinef(*(QLineF*)p); break;
            case QMetaType::QLocale:                 l_ret = from_qlocale(*(QLocale*)p); break;
            case QMetaType::QMatrix:                 l_ret = from_qmatrix(*(QMatrix*)p); break;
            case QMetaType::QPalette:                l_ret = from_qpalette(*(QPalette*)p); break;
            case QMetaType::QPen:                    l_ret = from_qpen(*(QPen*)p); break;
            case QMetaType::QPixmap:                 l_ret = from_qpixmap(*(QPixmap*)p); break;
            case QMetaType::QPoint:                  l_ret = from_qpoint(*(QPoint*)p); break;
            case QMetaType::QPointF:                 l_ret = from_qpointf(*(QPointF*)p); break;
            case QMetaType::QPolygon:                l_ret = from_qpolygon(*(QPolygon*)p); break;
            case QMetaType::QRect:                   l_ret = from_qrect(*(QRect*)p); break;
            case QMetaType::QRectF:                  l_ret = from_qrectf(*(QRectF*)p); break;
            case QMetaType::QSize:                   l_ret = from_qsize(*(QSize*)p); break;
            case QMetaType::QSizePolicy:             l_ret = from_qsizepolicy(*(QSizePolicy*)p); break;
            case QMetaType::QSizeF:                  l_ret = from_qsizef(*(QSizeF*)p); break;
            case QMetaType::QString:                 l_ret = from_qstring(*(QString*)p); break;
            case QMetaType::QStringList:             l_ret = from_qstringlist(*(QStringList*)p); break;
            case QMetaType::QTextFormat:             l_ret = from_qtextformat(*(QTextFormat*)p); break;
            case QMetaType::QTextLength:             l_ret = from_qtextlength(*(QTextLength*)p); break;
            case QMetaType::QTransform:              l_ret = from_qtransform(*(QTransform*)p); break;
            case QMetaType::QTime:                   l_ret = from_qtime(*(QTime*)p); break;
            case QMetaType::QUrl:                    l_ret = from_qurl(*(QUrl*)p); break;
#if QT_VERSION >= 0x40700
            case QMetaType::QVariant:                l_ret = from_qvariant(*(QVariant*)p); break;
            case QMetaType::QVariantList:            l_ret = from_qvariantlist(*(QVariantList*)p);
#endif
        default:
            if(T_bool_ok_pointer == n) {
                l_ret = _ok_ ? Ct : Cnil; }
            else if(sType.endsWith('*')) {
                if(sType.startsWith('Q') || sType.startsWith("const Q")) {
                    l_ret = qt_object_from_name(sType, *(void**)p); }
                else if("const char*" == sType) {
                    l_ret = make_base_string_copy(*(char**)p); }
                else {
                    l_ret = ecl_make_unsigned_integer((cl_index)*(void**)p); }}
            else if(T_QFileInfo == n)                        l_ret = from_qfileinfo(*(QFileInfo*)p);
            else if(T_QFileInfoList == n)                    l_ret = from_qfileinfolist(*(QFileInfoList*)p);
            else if(T_QGradientStop == n)                    l_ret = from_qgradientstop(*(QGradientStop*)p);
            else if(T_QList_QAbstractAnimation == n)         l_ret = from_qabstractanimationlist(*(QList<QAbstractAnimation*>*)p);
            else if(T_QList_QAbstractButton == n)            l_ret = from_qabstractbuttonlist(*(QList<QAbstractButton*>*)p);
            else if(T_QList_QAbstractState == n)             l_ret = from_qabstractstatelist(*(QList<QAbstractState*>*)p);
            else if(T_QList_QAction == n)                    l_ret = from_qactionlist(*(QList<QAction*>*)p);
            else if(T_QList_QByteArray == n)                 l_ret = from_qbytearraylist(*(QList<QByteArray>*)p);
            else if(T_QList_QDockWidget == n)                l_ret = from_qdockwidgetlist(*(QList<QDockWidget*>*)p);
            else if(T_QList_QGesture == n)                   l_ret = from_qgesturelist(*(QList<QGesture*>*)p);
            else if(T_QList_QGraphicsItem == n)              l_ret = from_qgraphicsitemlist(*(QList<QGraphicsItem*>*)p);
            else if(T_QList_QGraphicsTransform == n)         l_ret = from_qgraphicstransformlist(*(QList<QGraphicsTransform*>*)p);
            else if(T_QList_QGraphicsView == n)              l_ret = from_qgraphicsviewlist(*(QList<QGraphicsView*>*)p);
            else if(T_QList_QGraphicsWidget == n)            l_ret = from_qgraphicswidgetlist(*(QList<QGraphicsWidget*>*)p);
            else if(T_QList_QKeySequence == n)               l_ret = from_qkeysequencelist(*(QList<QKeySequence>*)p);
            else if(T_QList_QListWidgetItem == n)            l_ret = from_qlistwidgetitemlist(*(QList<QListWidgetItem*>*)p);
            else if(T_QList_QMdiSubWindow == n)              l_ret = from_qmdisubwindowlist(*(QList<QMdiSubWindow*>*)p);
            else if((T_QObjectList == n) || (T_QList_QObject == n))
                l_ret = from_qobjectlist(*(QList<QObject*>*)p);
            else if(T_QList_QPolygonF == n)                  l_ret = from_qpolygonflist(*(QList<QPolygonF>*)p);
            else if(T_QList_QSize == n)                      l_ret = from_qsizelist(*(QList<QSize>*)p);
            else if(T_QList_QStandardItem == n)              l_ret = from_qstandarditemlist(*(QList<QStandardItem*>*)p);
            else if(T_QList_QTableWidgetItem == n)           l_ret = from_qtablewidgetitemlist(*(QList<QTableWidgetItem*>*)p);
            else if(T_QList_QTableWidgetSelectionRange == n) l_ret = from_qtablewidgetselectionrangelist(*(QList<QTableWidgetSelectionRange>*)p);
            else if(T_QList_QTextBlock == n)                 l_ret = from_qtextblocklist(*(QList<QTextBlock>*)p);
            else if(T_QList_QTextEdit_ExtraSelection == n)   l_ret = from_qtexteditextraselectionlist(*(QList<QTextEdit::ExtraSelection>*)p);
            else if(T_QList_QTextFrame == n)                 l_ret = from_qtextframelist(*(QList<QTextFrame*>*)p);
            else if(T_QList_QTreeWidgetItem == n)            l_ret = from_qtreewidgetitemlist(*(QList<QTreeWidgetItem*>*)p);
            else if(T_QList_QUndoStack == n)                 l_ret = from_qundostacklist(*(QList<QUndoStack*>*)p);
            else if(T_QList_QUrl == n)                       l_ret = from_qurllist(*(QList<QUrl>*)p);
            else if((T_QWidgetList == n) || (T_QList_QWidget == n))
                l_ret = from_qwidgetlist(*(QList<QWidget*>*)p);
            else if(T_QList_int == n)                        l_ret = from_intlist(*(QList<int>*)p);
            else if(T_QList_qreal == n)                      l_ret = from_qreallist(*(QList<qreal>*)p);
            else if(T_QModelIndex == n)                      l_ret = from_qmodelindex(*(QModelIndex*)p);
            else if(T_QPainterPath == n)                     l_ret = from_qpainterpath(*(QPainterPath*)p);
            else if(T_QPolygonF == n)                        l_ret = from_qpolygonf(*(QPolygonF*)p);
            else if(T_QRgb == n)                             l_ret = ecl_make_unsigned_integer(*(QRgb*)p);
            else if(T_QTableWidgetSelectionRange == n)       l_ret = from_qtablewidgetselectionrange(*(QTableWidgetSelectionRange*)p);
            else if(T_QTextBlock == n)                       l_ret = from_qtextblock(*(QTextBlock*)p);
            else if(T_QTextCharFormat == n)                  l_ret = from_qtextcharformat(*(QTextCharFormat*)p);
            else if(T_QTextCursor == n)                      l_ret = from_qtextcursor(*(QTextCursor*)p);
            else if(T_QTextDocumentFragment == n)            l_ret = from_qtextdocumentfragment(*(QTextDocumentFragment*)p);
            else if(T_QTextLine == n)                        l_ret = from_qtextline(*(QTextLine*)p);
            else if(T_QTextOption == n)                      l_ret = from_qtextoption(*(QTextOption*)p);
#if QT_VERSION < 0x40700
            else if(T_QVariant)                              l_ret = from_qvariant(*(QVariant*)p);
            else if(T_QList_QVariant)                        l_ret = from_qvariantlist(*(QVariantList*)p);
#endif
            else if(T_QVector_QGradientstop == n)            l_ret = from_qgradientstopvector(*(QVector<QGradientStop>*)p);
            else if(T_QVector_QLine == n)                    l_ret = from_qlinevector(*(QVector<QLine>*)p);
            else if(T_QVector_QLineF == n)                   l_ret = from_qlinefvector(*(QVector<QLineF>*)p);
            else if(T_QVector_QPoint == n)                   l_ret = from_qpointvector(*(QVector<QPoint>*)p);
            else if(T_QVector_QPointF == n)                  l_ret = from_qpointfvector(*(QVector<QPointF>*)p);
            else if(T_QVector_QRect == n)                    l_ret = from_qrectvector(*(QVector<QRect>*)p);
            else if(T_QVector_QRectF == n)                   l_ret = from_qrectfvector(*(QVector<QRectF>*)p);
            else if(T_QVector_QRgb == n)                     l_ret = from_qrgbvector(*(QVector<QRgb>*)p);
            else if(T_QVector_QTextFormat == n)              l_ret = from_qtextformatvector(*(QVector<QTextFormat>*)p);
            else if(T_QVector_QTextLength == n)              l_ret = from_qtextlengthvector(*(QVector<QTextLength>*)p);
            else if(T_QVector_qreal == n)                    l_ret = from_qrealvector(*(QVector<qreal>*)p);
            // module types
            else if((n >= LObjects::T_GLenum) &&
                    (n <= LObjects::T_QGLFramebufferObjectFormat)) {
                if(LObjects::to_lisp_arg_opengl) {
                    l_ret = LObjects::to_lisp_arg_opengl(n, p); }}
            else if((n >= LObjects::T_QHostAddress) &&
                    (n <= LObjects::T_QSslKey)) {
                if(LObjects::to_lisp_arg_network) {
                    l_ret = LObjects::to_lisp_arg_network(n, p); }}
            else if((n >= LObjects::T_QSqlDatabase) &&
                    (n <= LObjects::T_QSqlRelation)) {
                if(LObjects::to_lisp_arg_sql) {
                    l_ret = LObjects::to_lisp_arg_sql(n, p); }}
            else if((n >= LObjects::T_QWebElement) &&
                    (n <= LObjects::T_QWebHitTestResult)) {
                if(LObjects::toMetaArg_webkit) {
                    l_ret = LObjects::to_lisp_arg_webkit(n, p); }}
            else if(!sType.endsWith('>') && sType.contains(':')) { // enum
                l_ret = ecl_make_integer(*(int*)p); }}}
    return l_ret; }

static void clearMetaArg(const MetaArg& arg, bool is_ret = false) {
    void* p = arg.second;
    QByteArray sType(arg.first);
    const int n = QMetaType::type(sType);
    // catch all exceptions first
    if(T_bool_ok_pointer == n) {
        delete (void**)p; }
    else if(sType.endsWith('*')) {
        if("const char*" == sType) {
            if(is_ret) {
                delete (char**)p; }}
        else {
            delete (void**)p; }}
    // enums
    else if(!sType.endsWith('>') && sType.contains(':')) {
        delete (int*)p; }
    // default
    else {
        QMetaType::destroy(n, p); }}

static void clearMetaArgList(const MetaArgList& args) {
    MetaArgIterator it(args);
    it.toBack();
    while(it.hasPrevious()) {
        clearMetaArg(it.previous()); }}

static MetaArg retArg(const QByteArray& name) {
    void* p = 0;
    MetaArg ret(name, p);
    if(name.endsWith('*')) {
        if("const char*" == name) {
            p = new char**; }
        else {
            p = new void**; }}
    else {
        p = QMetaType::construct(QMetaType::type(name)); }
    ret.second = p;
    return ret; }



// *** meta info ***

static StrList metaInfo(const QByteArray& type, const QByteArray& qclass, const QByteArray& search,
                        bool non, const QMetaObject* mo) {
    StrList info;
    if("methods" == type) {
        if(!mo) {
            mo = methodMetaObjectFromName(qclass, !non); }
        if(mo) {
            for(int i = mo->methodOffset(); i < mo->methodCount(); ++i) {
                QMetaMethod mm(mo->method(i));
                if(mm.methodType() == QMetaMethod::Method) {
                    QString sig(mm.signature());
                    if(sig.startsWith("CC")) { // copy constructor
                        continue; }
                    bool constructor = sig.startsWith('C');
                    QString ret;
                    if(constructor) {
                        sig = qclass + "(" + sig.mid(sig.contains(',') ? 7 : 6);
                        ret = "constructor"; }
                    else {
                        ret = mm.typeName();
                        if(ret.isEmpty()) {
                            ret = "void"; }}
                    ret.append(" ");
                    if(!sig.startsWith("_q_")) {
                        bool _static = false;
                        if(sig.startsWith('M')) {
                            sig = sig.mid(1); }
                        else if(sig.startsWith('S')) {
                            _static = true;
                            sig = sig.mid(1); }
                        QString name(ret + sig + (_static ? " static" : ""));
                        if(!_static && !constructor) {
                            QByteArray rm('(' + qclass + '*');
                            if(mm.parameterNames().size() > 1) {
                                rm.append(','); }
                            name.replace(rm, "("); }
                        if(name.contains(search, Qt::CaseInsensitive)) {
                            info << name.toAscii(); }}}}}}
    else if("override" == type) {
        Q_FOREACH(QByteArray name, LObjects::overrideFunctions(qclass)) {
            if(QString(name).contains(search, Qt::CaseInsensitive)) {
                info << name; }}}
    else if(!non) {
        if(!mo) {
            mo = LObjects::staticMetaObject(qclass); }
        if(mo) {
            if("properties" == type) {
                for(int i = mo->propertyOffset(); i < mo->propertyCount(); ++i) {
                    QMetaProperty mp(mo->property(i));
                    QString name = QString("%1 %2%3")
                                   .arg(mp.typeName())
                                   .arg(mp.name())
                                   .arg(mp.isWritable() ? "" : " const");
                    if(name.contains(search, Qt::CaseInsensitive)) {
                        info << name.toAscii(); }}}
            else {
                int _type = ("signals" == type) ? QMetaMethod::Signal : QMetaMethod::Slot;
                for(int i = mo->methodOffset(); i < mo->methodCount(); ++i) {
                    QMetaMethod mm(mo->method(i));
                    if(mm.methodType() == _type) {
                        QString ret(mm.typeName());
                        if(ret.isEmpty()) {
                            ret = "void"; }
                        QString sig(mm.signature());
                        if(!sig.startsWith("_q_")) {
                            QString name(QString("%1 %2").arg(ret).arg(sig));
                            if(name.contains(search, Qt::CaseInsensitive)) {
                                info << name.toAscii(); }}}}}}}
    return info; }

static bool metaInfoLessThan(const QByteArray& s1, const QString& s2) {
    if(s1.contains('(')) {
        return s1.mid(1 + s1.lastIndexOf(' ', s1.indexOf('('))) <
               s2.mid(1 + s2.lastIndexOf(' ', s2.indexOf('('))); }
    return s1.mid(1 + s1.indexOf(' ')) <
           s2.mid(1 + s2.indexOf(' ')); }

static cl_object collect_info(const QByteArray& type, const QByteArray& qclass, const QByteArray& qsearch,
                              bool non, bool* found, const QMetaObject* mo) {
    cl_object l_info = Cnil;
    StrList info = metaInfo(type, qclass, qsearch, non, mo);
    qSort(info.begin(), info.end(), metaInfoLessThan);
    if(info.size()) {
        *found = true;
        Q_FOREACH(QByteArray i, info) {
            l_info = CONS(make_base_string_copy((char*)i.constData()), l_info); }}
    return cl_nreverse(l_info); }

cl_object qapropos2(cl_object l_search, cl_object l_class, cl_object l_type) {
    /// args: (&optional search-string class-name)
    /// Finds all occurrencies of the given search string in the given object's meta information.<br>Constructors are listed under "Methods".<br>To list the user defined functions of external C++ classes (see Qt_EQL), pass the object instead of the class name.
    ///     (qapropos "html" "QTextEdit")
    ///     (qapropos nil "QWidget")
    ///     (qapropos)
    ///     (qapropos nil *qt-main*) ; embedded C++ (see Qt_EQL)
    ecl_process_env()->nvalues = 1;    
    QByteArray search;
    if(ECL_STRINGP(l_search)) {
        search = toCString(l_search); }
    bool all = (Cnil == l_type);
    bool q = all ? false : (Ct == cl_eql(q_keyword(), l_type));
    StrList classes;
    bool embedded = false;
    const QMetaObject* mo = 0;
    if(ECL_STRINGP(l_class)) {
        classes << toCString(l_class); }
    else if(Cnil == l_class) {
        if(all) {
            classes << LObjects::qNames;
            classes << LObjects::nNames;
            qSort(classes.begin(), classes.end()); }
        else {
            classes = q ? LObjects::qNames : LObjects::nNames; }}
    else {
        QtObject obj = toQtObject(l_class);
        if(obj.isQObject()) {
            if(obj.pointer) {
                embedded = true;
                mo = ((QObject*)obj.pointer)->metaObject();
                classes << QString("%1 : %2")
                        .arg(mo->className())
                        .arg(QString(obj.className()))
                        .toAscii(); }}}
    cl_object l_docs = Cnil;
    Q_FOREACH(QByteArray cl, classes) {
        bool found = false;
        bool non = LObjects::n_names.contains(cl);
        if(non || embedded || LObjects::q_names.contains(cl)) {
            cl_object l_doc_pro = Cnil;
            cl_object l_doc_slo = Cnil;
            cl_object l_doc_sig = Cnil;
            cl_object l_doc_ovr = Cnil;
            if(!non) {
                l_doc_pro = collect_info("properties", cl, search, non, &found, mo); }
            cl_object l_doc_met = collect_info("methods", cl, search, non, &found, mo);
            if(!non) {
                l_doc_slo = collect_info("slots", cl, search, non, &found, mo);
                l_doc_sig = collect_info("signals", cl, search, non, &found, mo); }
            l_doc_ovr = collect_info("override", cl, search, non, &found, mo);
            if(found) {
                cl_object l_doc = Cnil;
                if(l_doc_pro != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string((char*)"Properties:"), l_doc_pro), l_doc); }
                if(l_doc_met != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string((char*)"Methods:"), l_doc_met), l_doc); }
                if(l_doc_slo != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string((char*)"Slots:"), l_doc_slo), l_doc); }
                if(l_doc_sig != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string((char*)"Signals:"), l_doc_sig), l_doc); }
                if((l_doc_ovr != Cnil) && !embedded) {
                    l_doc = CONS(CONS(make_constant_base_string((char*)"Override:"), l_doc_ovr), l_doc); }
                l_doc = cl_nreverse(l_doc);
                if(l_doc != Cnil) {
                    l_docs = CONS(CONS(make_base_string_copy((char*)cl.data()), l_doc), l_docs); }}}}
    cl_object l_ret = cl_nreverse(l_docs);
    return l_ret; }



// *** main functions ***

cl_object qnew_instance2(cl_object l_name, cl_object l_args) {
    /// args: (class-name &rest arguments/properties)
    /// alias: qnew
    /// Creates a new Qt object, optionally passing the given arguments to the constructor. Additionally you can pass any number of property/value pairs.<br>Please note how you can abbreviate long type lists.
    ///     (qnew "QWidget")
    ///     (qnew "QPixmap(int,int)" 50 50) ; constructor
    ///     (qnew "QLabel" "text" "I love me.") ; set property
    ///     (qnew "QMatrix4x4(qreal...)" 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4)
    ecl_process_env()->nvalues = 1;
    static QHash<QByteArray, int> i_constructor;
    if(ECL_STRINGP(l_name)) {
        QByteArray name(QMetaObject::normalizedSignature(toCString(l_name)));
        QByteArray nameOnly(name);
        int p = name.indexOf('(');
        if(p != -1) {
            nameOnly = name.left(p); }
        int id = LObjects::q_names.value(nameOnly, 0);
        if(!id) {
            id = -LObjects::n_names.value(nameOnly, 0); }
        if(id) {
            QObject* caller = (id > 0) ? LObjects::Q[id - 1] : LObjects::N[-id - 1];
            if(caller) {
                const QMetaObject* mo = caller->metaObject();
                int n = i_constructor.value(name, -1);
                int len = LEN(l_args);
                if(n == -1) {
                    n = findMethodIndex(Method, QByteArray("C(uint") + ((p == -1) ? ")" : ("," + name.mid(p + 1))), mo, len);
                    if(n != -1) {
                        i_constructor[name] = n; }}
                if(n != -1) {
                    // qt_metacall to given constructor "C(uint...)"
                    QMetaMethod mm(mo->method(n));
                    StrList types(mm.parameterTypes());
                    if(len >= (types.length() - 1)) {
                        const int MAX_ARGS = 16;
                        //               r = return, u = unique
                        //               r  u  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16
                        void* args[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                        void* pointer = 0;
                        args[0] = &pointer; // return value
                        uint unique = LObjects::unique();
                        args[1] = &unique;
                        MetaArgList mArgs;
                        cl_object l_do_args = l_args;
                        if(p != -1) {
                            for(int i = 0; (i < (types.length() - 1)) && (i < MAX_ARGS) && (l_do_args != Cnil); ++i) {
                                MetaArg m_arg(toMetaArg(types.at(i + 1), cl_car(l_do_args)));
                                args[i + 2] = m_arg.second;
                                mArgs << m_arg;
                                l_do_args = cl_cdr(l_do_args); }}
                        caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                        clearMetaArgList(mArgs);
                        if(pointer) {
                            cl_object l_ret = new_qt_object(pointer, unique, id);
                            if(id > 0) { // QObject derived
                                QObject* obj = (QObject*)pointer;
                                if(obj->isWidgetType()) {
                                    obj->setProperty("EQL.unique", unique); }
                                while(l_do_args != Cnil) {
                                    qset_property(l_ret, cl_first(l_do_args), cl_second(l_do_args));
                                    l_do_args = cl_cddr(l_do_args); }}
                            return l_ret; }}}}}}
    error_msg("QNEW-INSTANCE", LIST2(l_name, l_args));
    return Cnil; }

cl_object qcopy(cl_object l_obj) {
    /// args: (object)
    /// Copies object if possible. Only few Qt classes allow copying.
    ///     (qcopy pixmap)
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    if(!o.isQObject()) {
        if(o.pointer) {
            // qt_metacall to copy constructor "CC(uint,<object*>)"
            QObject* caller = LObjects::N[-o.id - 1];
            const QMetaObject* mo = caller->metaObject();
            int n = mo->indexOfMethod(QByteArray("CC(uint,L") + o.className().mid(1) + "*)");
            if(n != -1) {
                QMetaMethod mm(mo->method(n));
                void* args[] = { 0, 0, 0 };
                void* pointer = 0;
                args[0] = &pointer; // return value
                uint unique = LObjects::unique();
                args[1] = &unique;
                args[2] = &o.pointer;
                caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                if(pointer) {
                    cl_object l_ret = new_qt_object(pointer, unique, o.id);
                    return l_ret; }}}}
    error_msg("QCOPY", LIST1(l_obj));
    return Cnil; }

cl_object qset_gc(cl_object l_obj) {
    ecl_process_env()->nvalues = 1;
    _garbage_collection_ = (l_obj != Cnil);
    return l_obj; }

enum { GarbageCollection = 1 };

cl_object qdelete2(cl_object l_obj, cl_object l_later) {
    /// args: (object &optional later)
    /// alias: qdel
    /// Deletes any Qt object, and sets the <code>pointer</code> value to <code>0</code>. Deleting a widget deletes all its child widgets, too.<br>If <code>later</code> is not <code>NIL</code>, the function <code>QObject::deleteLater()</code> will be called instead.<br>See <code>qlet</code> for local Qt objects.<br>Returns <code>T</code> if the object has effectively been deleted.
    ///     (qdel widget)
    ///     (qdel socket :later)
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    if(o.pointer) {
        bool ok = false;
        STATIC_SYMBOL_PKG(s_qt_object_finalize, (char*)"QT-OBJECT-FINALIZE", (char*)"EQL")
        if(cl_funcall(2, s_qt_object_finalize, l_obj) != Cnil) {
            if(_garbage_collection_) {
                if(o.isQObject()) {
                    QObject* obj = (QObject*)o.pointer;
                    delete obj; }
                else {
                    LObjects::deleteNObject(-o.id, o.pointer, GarbageCollection); }
                ok = true; }
            else {
                return Cnil; }}
        else {
            if(o.isQObject()) {
                QObject* obj = (QObject*)o.pointer;
                if(Cnil == l_later) {
                    delete obj; }
                else {
                    obj->deleteLater(); }}
            else {
                LObjects::deleteNObject(-o.id, o.pointer); }
            ok = true; }
        if(ok) {
            STATIC_SYMBOL_PKG(s_qset_null, (char*)"QSET-NULL", (char*)"EQL")
            cl_funcall(2, s_qset_null, l_obj);
            return Ct; }}
    // no error message (unintentional multiple deletion)
    return Cnil; }

cl_object qproperty(cl_object l_obj, cl_object l_name) {
    /// args: (object name)
    /// alias: qget
    /// Gets a Qt property. Enumerator values are returned as <code>int</code> values.
    ///     (qget label "text")
    QtObject o = toQtObject(l_obj);
    if(ECL_STRINGP(l_name)) {
        if(o.isQObject() && o.pointer) {
            const QMetaObject* mo = ((QObject*)o.pointer)->metaObject();
            int n = mo->indexOfProperty(toCString(l_name));
            if(n != -1) {
                QMetaProperty mp(mo->property(n));
                QVariant var(mp.read((QObject*)o.pointer));
                const cl_env_ptr l_env = ecl_process_env();
                l_env->nvalues = 2;
                EQL::is_arg_return_value = true;
                l_env->values[0] = from_qvariant_value(var);
                EQL::is_arg_return_value = false;
                l_env->values[1] = Ct;
                return l_env->values[0]; }}}
    ecl_process_env()->nvalues = 1;
    error_msg("QPROPERTY", LIST2(l_obj, l_name));
    return Cnil; }

cl_object qset_property(cl_object l_obj, cl_object l_name, cl_object l_val) {
    /// args: (object name value)
    /// alias: qset
    /// Sets a Qt property. Enumerators have to be passed as <code>int</code> values.
    ///     (qset label "alignment" |Qt.AlignCenter|)
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    if(ECL_STRINGP(l_name)) {
        if(o.isQObject() && o.pointer) {
            const QMetaObject* mo = ((QObject*)o.pointer)->metaObject();
            int n = mo->indexOfProperty(toCString(l_name));
            if(n != -1) {
                QMetaProperty mp(mo->property(n));
                QVariant var;
                if(mp.isEnumType()) {
                    var = toInt(l_val); }
                else {
                    var = toQVariant(l_val, mp.typeName()); }
                if(mp.write((QObject*)o.pointer, var)) {
                    return l_val; }}}}
    error_msg("QSET-PROPERTY", LIST3(l_obj, l_name, l_val));
    return Cnil; }

cl_object qinvoke_method2(cl_object l_obj, cl_object l_cast, cl_object l_name, cl_object l_args) {
    /// args: (object function-name &rest arguments)
    /// alias: qfun
    /// Calls any of Qt methods, slots, signals ("emit" in jargon). Static methods can be called by passing the string name of an object.<br>For overloaded Qt methods you may need to pass the argument types (as for <code>qconnect</code> and <code>qoverride</code>). In these (very few) ambiguous cases you will see a runtime error message, together with a list of all possible candidates.
    ///     (qfun item "setText" 0 "Some objects are EQL.")
    ///     (qfun "QDateTime" "currentDateTime") ; static method
    ///     (qfun slider "valueChanged" 10) ; emit signal
    static QHash<QByteArray, int> i_slot;
    static QHash<QByteArray, int> i_method;
    if((l_obj != Cnil) && ECL_STRINGP(l_name)) {
        bool qobject_align = false;
        bool embedded = false;
        QByteArray castClass;
        if(l_cast != Cnil) {
            if(ECL_STRINGP(l_cast)) {
                castClass = toCString(l_cast); }
            else if(cl_eql(qt_keyword(), l_cast)) {
                embedded = true; }}
        QtObject obj = toQtObject(l_obj, embedded ? Cnil : l_cast, &qobject_align);
        if(obj.id) {
            QByteArray name(QMetaObject::normalizedSignature(toCString(l_name)));
            int len_args = LEN(l_args);
            QByteArray cacheName((castClass.isEmpty()
                                  ? (embedded
                                     ? QByteArray(obj.pointer ? ((QObject*)obj.pointer)->metaObject()->className() : "Qt")
                                     : obj.className())
                                  : castClass)
                                 + '_' + name + char('A' + len_args));
            bool method = false;
            const QMetaObject* mo = 0;
            int n = i_slot.value(cacheName, -1);
            if(n != -1) {
                mo = staticMetaObject(obj); }
            else {
                n = i_method.value(cacheName, -1);
                if(n != -1) {
                    if(embedded) {
                        if(obj.pointer) {
                            mo = ((QObject*)obj.pointer)->metaObject(); }}
                    else {
                        method = true;
                        mo = methodMetaObject(obj); }}}
            if(n == -1) {
                if(embedded) {
                    if(obj.pointer) {
                        mo = ((QObject*)obj.pointer)->metaObject();
                        n = findMethodIndex(Embedded, name, mo, len_args); }}
                else {
                    mo = staticMetaObject(obj);
                    if(castClass.isEmpty() && obj.isQObject()) {
                        n = findMethodIndex(SignalOrSlot, name, mo, len_args); }
                    if(n == -1) {
                        method = true;
                        int p = name.indexOf('(');
                        if(p == -1) {
                            p = name.length();
                            name.append('('); }
                        if(obj.isStatic()) {
                            mo = methodMetaObject(obj);
                            // static methods start with 'S'
                            n = findMethodIndex(Static, QByteArray("S") + name.left(p + 1) + name.mid(p + 1), mo, len_args); }
                        else {
                            QString sep;
                            if(len_args) {
                                sep = ","; }
                            // ordinary methods start with 'M'
                            QString _name("M" + name.left(p + 1) + "%1*" + sep + name.mid(p + 1));
                            if(castClass.isEmpty()) {
                                const QMetaObject* _mo = mo;
                                mo = methodMetaObject(obj);
                                if(obj.isQObject()) {
                                    do {
                                        n = findMethodIndex(Method, _name.arg(_mo->className()).toAscii(), mo, len_args);
                                        if(n != -1) {
                                            break; }
                                        _mo = _mo->superClass();
                                        mo = mo->superClass(); }
                                    while(mo && _mo); }
                                else {
                                    const char* _class = obj.className().constData();
                                    do {
                                        n = findMethodIndex(Method, _name.arg(_class).toAscii(), mo, len_args);
                                        if(n != -1) {
                                            break; }
                                        _class = LObjects::nObjectSuperClass(_class);
                                        mo = mo->superClass(); }
                                    while(_class && mo); }}
                            else {
                                // very rare need of cast, see QFUN* for examples
                                mo = methodMetaObject(obj);
                                n = findMethodIndex(Method, _name.arg(castClass.constData()).toAscii(), mo, len_args); }}}}
                if(n != -1) {
                    if(method || embedded) {
                        i_method[cacheName] = n; }
                    else {
                        i_slot[cacheName] = n; }}}
            if(n != -1) {
                // qt_metacall
                QMetaMethod mm(mo->method(n));
                StrList types(mm.parameterTypes());
                bool this_arg = method && !obj.isStatic();
                cl_object l_do_args = l_args;
                if((types.length() - (this_arg ? 1 : 0)) == len_args) {
                    const int MAX_ARGS = 10;
                    //               r = return, o = object
                    //               r  o  1  2  3  4  5  6  7  8  9 10
                    void* args[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                    MetaArg ret(retArg(mm.typeName()));
                    args[0] = ret.second; // return value
                    MetaArgList mArgs;
                    int i = -1;
                    void* _this = 0;
                    if(this_arg) {
                        ulong l = (ulong)obj.pointer;
                        if(qobject_align) {
                            // cast from QObject to non QObject + multiple inheritance problem
                            l += sizeof(QObject); }
                        _this = (void*)l;
                        args[++i + 1] = &_this; }
                    bool types_ok = true;
                    while((l_do_args != Cnil) && (i < MAX_ARGS)) {
                        ++i;
                        cl_object l_arg = cl_car(l_do_args);
                        // type check
                        if(_check_argument_types_) {
                            if((l_arg != Cnil) &&
                               (types.at(i).startsWith('Q')) &&
                               !types.at(i).contains(':') &&
                               !types.at(i).endsWith('>')) {
                                if(!strstr("QByteArray QChar QColor QGradientStop QLineF QPointF QPolygonF QRectF QRgb QSizeF QStringList", // primitives
                                           types.at(i))) {
                                    if(types.at(i) != "QVariantList") { // special case
                                        QByteArray name1(types.at(i));
                                        if(name1.endsWith('*')) {
                                            name1.truncate(name1.length() - 1); }
                                        QByteArray name2(qtObjectName(l_arg));
                                        if(!inherits(name2, name1)) {
                                            type_msg(name1, name2);
                                            types_ok = false;
                                            break; }}}}}
                        MetaArg m_arg(toMetaArg(types.at(i), l_arg));
                        args[i + 1] = m_arg.second;
                        mArgs << m_arg;
                        l_do_args = cl_cdr(l_do_args); }
                    if(types_ok) {
                        QObject* caller = 0;
                        if(method) {
                            caller = obj.isQObject() ? LObjects::Q[obj.id - 1] : LObjects::N[-obj.id - 1]; }
                        else {
                            caller = obj.isQObject() ? (QObject*)obj.pointer : 0; }
                        if(caller) {
                            caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                            clearMetaArgList(mArgs);
                            cl_object l_ret = Cnil;
                            if(ret.second) {
                                EQL::is_arg_return_value = true;
                                l_ret = to_lisp_arg(ret);
                                EQL::is_arg_return_value = false;
                                clearMetaArg(ret, true); }
                            const cl_env_ptr l_env = ecl_process_env();
                            l_env->nvalues = 2;
                            l_env->values[0] = l_ret;
                            l_env->values[1] = Ct;
                            return l_env->values[0]; }
                        else {
                            clearMetaArgList(mArgs); }}}}}}
    ecl_process_env()->nvalues = 1;
    error_msg("QINVOKE-METHOD", LIST4(l_obj, l_cast, l_name, l_args));
    return Cnil; }

static void* getLispFun(cl_object l_fun) {
    STATIC_SYMBOL(s_package, (char*)"*PACKAGE*");
    STATIC_SYMBOL_PKG(s_get_function, (char*)"%GET-FUNCTION", (char*)"EQL") // see lisp/ini.lisp
    cl_object l_ret = cl_funcall(3,
                                 s_get_function,
                                 l_fun,
                                 cl_find_package(cl_symbol_value(s_package)));
    return (Cnil == l_ret) ? 0 : (void*)l_ret; }

cl_object qconnect2(cl_object l_caller, cl_object l_signal, cl_object l_receiver, cl_object l_slot) {
    /// args: (caller signal receiver/function &optional slot)
    /// Connects either a Qt signal to a Qt slot, or a Qt signal to a Lisp function.
    ///     (qconnect edit "textChanged(QString)" label "setText(QString)")
    ///     (qconnect edit "textChanged(QString)" (lambda (txt) (print txt)))
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_signal)) {
        QtObject o1 = toQtObject(l_caller);
        if(o1.isQObject() && o1.pointer) {
            QByteArray signal(QMetaObject::normalizedSignature(toCString(l_signal)));
            if(ECL_STRINGP(l_slot)) {
                QtObject o2 = toQtObject(l_receiver);
                if(o2.isQObject() && o2.pointer) {
                    QByteArray slot(QMetaObject::normalizedSignature(toCString(l_slot)));
                    if(QMetaObject::checkConnectArgs(signal, slot)) {
                        if(QObject::connect((QObject*)o1.pointer, SIG + signal, (QObject*)o2.pointer, SLO + slot)) {
                            return Ct; }}}}
            else if(Cnil == l_slot) {
                void* fun = getLispFun(l_receiver);
                if(fun) {
                    if(DynObject::connect((QObject*)o1.pointer, SIG + signal, LObjects::dynObject, fun)) {
                        return Ct; }}}}}
    error_msg("QCONNECT", LIST4(l_caller, l_signal, l_receiver, l_slot));
    return Cnil; }

cl_object qdisconnect2(cl_object l_caller, cl_object l_signal, cl_object l_receiver, cl_object l_slot) {
    /// args: (caller &optional signal receiver/function slot)
    /// Disconnects signals to either Qt slots or Lisp functions. Anything but the caller can be either <code>NIL</code> or omitted.
    ///     (qdisconnect edit "textChanged(QString)" label "setText(QString)")
    ///     (qdisconnect edit "textChanged(QString)")
    ///     (qdisconnect edit nil label)
    ///     (qdisconnect edit)
    ecl_process_env()->nvalues = 1;
    QtObject o1 = toQtObject(l_caller);
    if(o1.isQObject() && o1.pointer) {
        QtObject o2 = toQtObject(l_receiver);
        QByteArray signal(toCString(l_signal));
        QByteArray slot(toCString(l_slot));
        if(!signal.isEmpty()) {
            signal = QMetaObject::normalizedSignature(signal);
            signal.prepend(SIG); }
        if(!slot.isEmpty()) {
            slot = QMetaObject::normalizedSignature(slot);
            slot.prepend(SLO); }
        bool lisp = (l_receiver != Cnil) && !o2.pointer;
        void* lisp_fun = lisp ? getLispFun(l_receiver) : 0;
        bool ok = false;
        if(!lisp) {
            if(QObject::disconnect((QObject*)o1.pointer,
                                   signal.isEmpty() ? 0: signal.constData(),
                                   o2.isQObject() ? (QObject*)o2.pointer : 0,
                                   slot.isEmpty() ? 0 : slot.constData())) {
                ok = true; }}
        if(lisp_fun) {
            if(DynObject::disconnect((QObject*)o1.pointer,
                                     signal.isEmpty() ? 0 : signal.constData(),
                                     LObjects::dynObject,
                                     lisp_fun)) {
                ok = true; }}
        if(ok) {
            return Ct; }}
    error_msg("QDISCONNECT", LIST4(l_caller, l_signal, l_receiver, l_slot));
    return Cnil; }

cl_object qsender() {
    /// args: ()
    /// Corresponding to <code>QObject::sender()</code>. To use inside a Lisp function connected to a Qt signal.
    ecl_process_env()->nvalues = 1;
    QObject* curr = DynObject::currentSender;
    if(curr) {
        cl_object l_ret = qt_object_from_name(curr->metaObject()->className(), curr);
        return l_ret; }
    error_msg("QSENDER", Cnil);
    return Cnil; }

static cl_object call_lisp_fun(cl_object l_fun, cl_object l_args) {
    cl_object l_ret = Cnil;
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        l_ret = cl_apply(2, l_fun, l_args); }
    CL_CATCH_ALL_END;
    return l_ret; }

void callConnectFun(void* fun, const StrList& types, void** args) {
    int i = 0;
    cl_object l_args = Cnil;
    Q_FOREACH(QByteArray type, types) {
        l_args = CONS(to_lisp_arg(MetaArg(type, args[++i])), l_args); }
    call_lisp_fun((cl_object)fun, cl_nreverse(l_args)); }

cl_object qoverride(cl_object l_obj, cl_object l_name, cl_object l_fun) {
    /// args: (object name function)
    /// Sets a Lisp function to be called on a virtual Qt method.<br>To remove a function, pass <code>NIL</code> instead of the function argument.<br>Use <code>qcall-default</code> inside your function to call the base implementation.
    ///     (qoverride edit "keyPressEvent(QKeyEvent*)" (lambda (ev) (print (qfun ev "key")) (qcall-default)))
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    void* fun = (Cnil == l_fun) ? 0 : getLispFun(l_fun);
    if(o.pointer) {
        QByteArray name(QMetaObject::normalizedSignature(toCString(l_name)));
        uint id = LObjects::override_function_ids.value(name, 0);
        if(id) {
            LObjects::setOverrideFun(o.unique, id, fun);
            return Ct; }}
    error_msg("QOVERRIDE", LIST3(l_obj, l_name, l_fun));
    return Cnil; }

cl_object qcall_default() {
    /// args: ()
    /// To use inside an overridden function (see <code>qoverride</code>).<br>Calls the base implementation of the virtual Qt method.
    ecl_process_env()->nvalues = 1;
    LObjects::call_default = true;
    return Ct; }

QVariant callOverrideFun(void* fun, int id, const void** args) {
    STATIC_SYMBOL_PKG(s_qt_object_p,       (char*)"QT-OBJECT-P",       (char*)"EQL")
    STATIC_SYMBOL_PKG(s_qt_object_pointer, (char*)"QT-OBJECT-POINTER", (char*)"EQL")
    int n = id - 1;
    int i = 0;
    const char* type = 0;
    cl_object l_args = Cnil;
    while((type = LObjects::override_arg_types[n][i + 1])) {
        l_args = CONS(to_lisp_arg(MetaArg(type, (void*)args[i])), l_args);
        ++i; }
    LObjects::call_default = false; // see qcall_default()
    cl_object l_ret = call_lisp_fun((cl_object)fun, cl_nreverse(l_args));
    QVariant ret;
    const char* ret_type = LObjects::override_arg_types[n][0];
    if(ret_type) {
        QByteArray type(ret_type);
        void* pointer = 0;
        if(type.startsWith('Q') && type.endsWith('*')) {
            if(cl_funcall(2, s_qt_object_p, l_ret)) {
                pointer = (void*)fixnnint(cl_funcall(2, s_qt_object_pointer, l_ret)); }
            ret = qVariantFromValue(pointer); }
        else {
            const int type = QMetaType::type(ret_type);
            switch(type) {
                // implicit pointer types
                case QMetaType::QBrush:       ret = qVariantFromValue(*(QBrush*)pointer); break;
                case QMetaType::QCursor:      ret = qVariantFromValue(*(QCursor*)pointer); break;
                case QMetaType::QDate:        ret = qVariantFromValue(*(QDate*)pointer); break;
                case QMetaType::QDateTime:    ret = qVariantFromValue(*(QDateTime*)pointer); break;
                case QMetaType::QFont:        ret = qVariantFromValue(*(QFont*)pointer); break;
                case QMetaType::QIcon:        ret = qVariantFromValue(*(QIcon*)pointer); break;
                case QMetaType::QImage:       ret = qVariantFromValue(*(QImage*)pointer); break;
                case QMetaType::QKeySequence: ret = qVariantFromValue(*(QKeySequence*)pointer); break;
                case QMetaType::QLocale:      ret = qVariantFromValue(*(QLocale*)pointer); break;
                case QMetaType::QPalette:     ret = qVariantFromValue(*(QPalette*)pointer); break;
                case QMetaType::QPen:         ret = qVariantFromValue(*(QPen*)pointer); break;
                case QMetaType::QPixmap:      ret = qVariantFromValue(*(QPixmap*)pointer); break;
                case QMetaType::QTextFormat:  ret = qVariantFromValue(*(QTextFormat*)pointer); break;
                case QMetaType::QTextLength:  ret = qVariantFromValue(*(QTextLength*)pointer); break;
                case QMetaType::QTime:        ret = qVariantFromValue(*(QTime*)pointer); break;
                case QMetaType::QUrl:         ret = qVariantFromValue(*(QUrl*)pointer); break;
#if QT_VERSION >= 0x40700
                case QMetaType::QVariant:     ret = qVariantFromValue(*(QVariant*)pointer); break;
#endif
            default:
                if(type == T_QFileInfo)                       ret = qVariantFromValue(*(QFileInfo*)pointer);
                else if(type == T_QModelIndex)                ret = qVariantFromValue(*(QModelIndex*)pointer);
                else if(type == T_QPainterPath)               ret = qVariantFromValue(*(QPainterPath*)pointer);
                else if(type == T_QTableWidgetSelectionRange) ret = qVariantFromValue(*(QTableWidgetSelectionRange*)pointer);
                else if(type == T_QTextBlock)                 ret = qVariantFromValue(*(QTextBlock*)pointer);
                else if(type == T_QTextCharFormat)            ret = qVariantFromValue(*(QTextCharFormat*)pointer);
                else if(type == T_QTextCursor)                ret = qVariantFromValue(*(QTextCursor*)pointer);
                else if(type == T_QTextDocumentFragment)      ret = qVariantFromValue(*(QTextDocumentFragment*)pointer);
                else if(type == T_QTextOption)                ret = qVariantFromValue(*(QTextOption*)pointer);
#if QT_VERSION < 0x40700
                else if(type == T_QVariant)                   ret = qVariantFromValue(*(QVariant*)pointer);
#endif
                else                                          ret = toQVariant(l_ret, ret_type); }}}
    return ret; }

cl_object qadd_event_filter(cl_object l_obj, cl_object l_ev, cl_object l_fun) {
    /// args: (object event function)
    /// Adds a Lisp function to be called on a given event type.<br>If the object argument is <code>NIL</code>, the event will be captured for any object.<br>If the Lisp function returns <code>NIL</code>, the event will be processed by Qt afterwards.
    ///     (qadd-event-filter nil |QEvent.MouseButtonPress| (lambda (obj ev) (print obj) nil))
    ecl_process_env()->nvalues = 1;
    void* fun = getLispFun(l_fun);
    if(fun) {
        QObject* obj = 0;
        if(l_obj != Cnil) {
            QtObject o = toQtObject(l_obj);
            if(o.isQObject()) {
                obj = (QObject*)o.pointer; }}
        LObjects::dynObject->addEventFilter(obj, toInt(l_ev), fun);
        return l_ev; }
    error_msg("QADD-EVENT-FILTER", LIST3(l_obj, l_ev, l_fun));
    return Cnil; }

bool callEventFun(void* fun, QObject* obj, QEvent* ev) {
    if(fun) {
        if(obj->objectName().endsWith("viewport")) {
            obj = obj->parent(); }
        return (call_lisp_fun((cl_object)fun,
                              LIST2(qt_object_from_name(obj->metaObject()->className(), (void*)obj),
                                    qt_object_from_name("QEvent", (void*)ev)))
                != Cnil); }
    return true; }

cl_object qclear_event_filters() {
    /// args: ()
    /// Clears all added event filters.
    ecl_process_env()->nvalues = 1;
    LObjects::dynObject->clearEventFilters();
    return Ct; }

cl_object qrequire2(cl_object l_name, cl_object l_quiet) {
    ecl_process_env()->nvalues = 1;
    QString name = symbolName(l_name).toLower();
    QString prefix, postfix;
#ifdef Q_OS_LINUX
    prefix = "lib"; postfix = ".so.1";
#endif
#ifdef Q_OS_DARWIN
    prefix = "lib"; postfix = ".1.dylib";
#endif
    QLibrary lib(prefix + "eql_" + name + postfix);
    typedef void (*Ini)();
    Ini ini = (Ini)lib.resolve("ini");
    if(ini) {
        ini();
        StaticMetaObject meta = (StaticMetaObject)lib.resolve("staticMetaObject");
        DeleteNObject del = (DeleteNObject)lib.resolve("deleteNObject");
        Override over = (Override)lib.resolve("overrideFunctions");
        if(meta && del && over) {
            if("help" == name) {
                LObjects::staticMetaObject_help = meta;
                LObjects::deleteNObject_help = del;
                LObjects::override_help = over;
                return l_name; }
            else if("svg" == name) {
                LObjects::staticMetaObject_svg = meta;
                LObjects::deleteNObject_svg = del;
                LObjects::override_svg = over;
                return l_name; }
            else {
                ToMetaArg metaArg = (ToMetaArg)lib.resolve("toMetaArg");
                To_lisp_arg lispArg = (To_lisp_arg)lib.resolve("to_lisp_arg");
                if(metaArg && lispArg) {
                    if("network" == name) {
                        LObjects::staticMetaObject_network = meta;
                        LObjects::deleteNObject_network = del;
                        LObjects::override_network = over;
                        LObjects::toMetaArg_network = metaArg;
                        LObjects::to_lisp_arg_network = lispArg;
                        return l_name; }
                    else if("opengl" == name) {
                        LObjects::staticMetaObject_opengl = meta;
                        LObjects::deleteNObject_opengl = del;
                        LObjects::override_opengl = over;
                        LObjects::toMetaArg_opengl = metaArg;
                        LObjects::to_lisp_arg_opengl = lispArg;
                        return l_name; }
                    else if("sql" == name) {
                        LObjects::staticMetaObject_sql = meta;
                        LObjects::deleteNObject_sql = del;
                        LObjects::override_sql = over;
                        LObjects::toMetaArg_sql = metaArg;
                        LObjects::to_lisp_arg_sql = lispArg;
                        return l_name; }
                    else if("webkit" == name) {
                        LObjects::staticMetaObject_webkit = meta;
                        LObjects::deleteNObject_webkit = del;
                        LObjects::override_webkit = over;
                        LObjects::toMetaArg_webkit = metaArg;
                        LObjects::to_lisp_arg_webkit = lispArg;
                        return l_name; }}}}}
    if(l_quiet == Cnil) {
        error_msg("QREQUIRE", LIST1(l_name)); }
    return Cnil; }



// *** convenience functions ***

cl_object qtranslate(cl_object l_con, cl_object l_src, cl_object l_n) {
    ecl_process_env()->nvalues = 1;
    QByteArray context(toQString(l_con).toUtf8());
    QByteArray source(toQString(l_src).toUtf8());
    int n = toInt(l_n);
    cl_object l_ret;
    if(n == -1) {
        l_ret = from_qstring(QCoreApplication::translate(context, source, 0, QCoreApplication::CodecForTr)); }
    else {
        l_ret = from_qstring(QCoreApplication::translate(context, source, 0, QCoreApplication::CodecForTr, n)); }
    return l_ret; }

cl_object qlocal8bit(cl_object l_str) {
    /// args: (string)
    /// Returns the string converted using <code>QString::toLocal8Bit()</code> (see <code>QLocale</code> settings).<br>Depending on the OS, this may be necessary if you get a filename from Qt and want to use it in Lisp.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_cstring(toQString(l_str).toLocal8Bit());
    return l_ret; }

cl_object qutf8(cl_object l_str) {
    /// args: (string)
    /// Returns the string converted using <code>QString::toUtf8()</code>.<br>Depending on the OS, this may be necessary if you get a filename from Qt and want to use it in Lisp.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_cstring(toQString(l_str).toUtf8());
    return l_ret; }

cl_object qfrom_utf8(cl_object l_ba) {
    /// args: (byte-array)
    /// Returns the byte array (vector of octets) converted using <code>QString::fromUtf8()</code>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_qstring(QString::fromUtf8(toQByteArray(l_ba)));
    return l_ret; }

cl_object qescape(cl_object l_str) {
    /// args: (string)
    /// Calls <code>Qt::escape()</code>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_qstring(Qt::escape(toQString(l_str)));
    return l_ret; }

cl_object qt_object_name(cl_object l_obj) {
    /// args: (object)
    /// Returns the Qt class name.
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    cl_object l_ret = from_cstring(o.className());
    return l_ret; }

cl_object qobject_names2(cl_object l_type) {
    /// args: (&optional type)
    /// Returns all supported object names. Passing either <code>:q</code> or <code>:n</code> returns only the QObject inherited, or not QObject inherited names, respectively.
    ecl_process_env()->nvalues = 1;
    bool all = (Cnil == l_type);
    StrList names;
    if(all) {
        names << LObjects::qNames;
        names << LObjects::nNames;
        qSort(names.begin(), names.end()); }
    else {
        names = (Ct == cl_eql(q_keyword(), l_type)) ? LObjects::qNames : LObjects::nNames; }
    QStringList lst;
    Q_FOREACH(QByteArray name, names) {
        lst << QString(name); }
    cl_object l_ret = from_qstringlist(lst);
    return l_ret; }

cl_object qenum(cl_object l_name, cl_object l_key) { // for internal use only
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_name) && ECL_STRINGP(l_key)) {
        QByteArray name(toCString(l_name));
        QByteArray key(toCString(l_key));
        int i = name.indexOf("::");
        if(i != -1) {
            const QMetaObject* mo;
            if(name.startsWith("Qt")) {
                mo = staticQtMetaObject; }
            else {
                mo = LObjects::staticMetaObject(name.left(i)); }
            if(mo) {
                int n = mo->indexOfEnumerator(name.mid(i + 2));
                if(n != -1) {
                    QMetaEnum me = mo->enumerator(n);
                    int val = (me.isFlag() ? me.keysToValue(key) : me.keyToValue(key));
                    cl_object l_ret = ecl_make_integer(val);
                    return l_ret; }}}}
    error_msg("QENUM", LIST2(l_name, l_key));
    return Cnil; }

static cl_object enums(const QMetaObject* mo) {
    cl_object l_enums = Cnil;
    if(mo) {
        for(int i = mo->enumeratorOffset(); i < mo->enumeratorCount(); ++i) {
            QMetaEnum me(mo->enumerator(i));
            if(Cnil == l_enums) {
                l_enums = LIST1(from_cstring(me.scope())); }
            cl_object l_keys = LIST1(from_cstring(me.name()));
            for(int j = 0; j < me.keyCount(); ++j) {
                l_keys = CONS(from_cstring(me.key(j)), l_keys); }
            l_enums = CONS(cl_nreverse(l_keys), l_enums); }}
    return cl_nreverse(l_enums); }

cl_object qmeta_enums() { // for internal use only
    ecl_process_env()->nvalues = 1;
    cl_object l_all_enums = Cnil;
    Q_FOREACH(QByteArray name, LObjects::qNames) {
        cl_object l_enums = enums(LObjects::staticMetaObject(name));
        if(l_enums != Cnil) {
            l_all_enums = CONS(l_enums, l_all_enums); }}
    l_all_enums = CONS(enums(staticQtMetaObject), l_all_enums);
    l_all_enums = cl_nreverse(l_all_enums);
    return l_all_enums; }

cl_object qapp() {
    /// args: ()
    /// Convenience function returning <code>qApp</code>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = qt_object_from_name("QApplication", (void*)qApp);
    return l_ret; }

cl_object qprocess_events() {
    /// args: ()
    /// Convenience function to call <code>QApplication::processEvents()</code>.
    ecl_process_env()->nvalues = 1;
    QApplication::processEvents();
    return Ct; }

cl_object qexec2(cl_object l_milliseconds) {
    /// args: (&optional milliseconds)
    /// Convenience function to call <code>QApplication::exec()</code>.<br>Optionally pass the time in milliseconds after which <code>QEventLoop::exit()</code> will be called.
    ecl_process_env()->nvalues = 1;
    if(l_milliseconds != Cnil) {
        static QTimer* timer = 0;
        if(!timer) {
            timer = new QTimer;
            EQL::eventLoop = new QEventLoop;
            timer->setSingleShot(true);
            QObject::connect(timer, QSIGNAL(timeout()), LObjects::eql, QSLOT(exitEventLoop())); }
        timer->start(toInt(l_milliseconds));
        EQL::eventLoop->exec();
        return l_milliseconds; }
    QCoreApplication::exit(); // prevent "The event loop is already running"
    QApplication::exec();
    return Ct; }

cl_object qexit() {
    /// args: ()
    /// Calls <code>QEventLoop::exit()</code>, in order to exit event processing after a call to <code>qexec</code> with a timeout.<br>Returns <code>T</code> if the event loop has effectively been exited.
    ecl_process_env()->nvalues = 1;
    if(EQL::eventLoop) {
        if(EQL::eventLoop->isRunning()) {
            EQL::eventLoop->exit();
            return Ct; }}
    return Cnil; }

cl_object qstatic_meta_object(cl_object l_class) {
    /// args: (class-name)
    /// Returns the static QMetaObject of the given class name (for <code>QObject</code> inherited classes).
    ///     (qstatic-meta-object "QWidget")
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_class)) {
        const QMetaObject* m = LObjects::staticMetaObject(toCString(l_class));
        if(m) {
            cl_object l_ret = qt_object_from_name("QMetaObject", (void*)m);
            return l_ret; }}
    error_msg("QSTATIC-META-OBJECT", LIST1(l_class));
    return Cnil; }

cl_object qload_ui(cl_object l_ui) {
    /// args: (file-name)
    /// Calls a custom <code>QUiLoader::load()</code> function, loading a UI file created by Qt Designer. Returns the top level widget of the UI.<br>Use <code>qfind-child</code> to retrieve the child widgets.
    ///     (qload-ui "my-fancy-gui.ui")
    ecl_process_env()->nvalues = 1;
    QString ui(toQString(l_ui));
    if(!ui.isEmpty()) {
        if(!ui.endsWith(".ui")) {
            ui.append(".ui"); }
        UiLoader loader;
        QFile file(ui);
        if(file.open(QFile::ReadOnly)) {
            QWidget* w = loader.load(&file);
            file.close();
            if(w) {
                cl_object l_ret = qt_object_from_name(LObjects::vanillaQtSuperClassName(w->metaObject()),
                                                      w,
                                                      w->property("EQL.unique").toUInt());
                return  l_ret; }}}
    error_msg("QLOAD-UI", LIST1(l_ui));
    return Cnil; }

cl_object qfind_child(cl_object l_obj, cl_object l_name) {
    /// args: (object name)
    /// Calls <code>qFindChild&lt;QObject*&gt;()</code>.<br>Can be used to get the child objects of any Qt object (typically from a UI, see <code>qload-ui</code>), identified by <code>objectName</code>.
    ///     (qfind-child *main* "editor")
    ecl_process_env()->nvalues = 1;
    QString name(toQString(l_name));
    if(!name.isEmpty()) {
        QtObject o = toQtObject(l_obj);
        if(o.isQObject()) {
            QObject* obj = qFindChild<QObject*>((QObject*)o.pointer, name);
            if(obj) {
                cl_object l_ret = qt_object_from_name(LObjects::vanillaQtSuperClassName(obj->metaObject()),
                                                      obj,
                                                      obj->property("EQL.unique").toUInt());
                return l_ret; }}}
    error_msg("QFIND-CHILD", LIST2(l_obj, l_name));
    return Cnil; }

cl_object qui_class2(cl_object l_ui, cl_object l_name) {
    /// args: (file-name &optional object-name)
    /// Finds the class name for the given user-defined object name in the given UI file.<br>Omitting the object name will return the top level class name of the UI.
    ///     (qui-class "examples/data/main-window.ui" "editor") ; returns "QTextEdit"
    ecl_process_env()->nvalues = 1;
    QString ui(toQString(l_ui));
    QString name(toQString(l_name));
    if(!ui.isEmpty()) {
        if(!ui.endsWith(".ui")) {
            ui.append(".ui"); }
        bool main = name.isEmpty();
        QFile file(ui);
        QString className;
        if(file.open(QIODevice::ReadOnly)) {
            QXmlStreamReader reader(&file);
            while(!reader.atEnd()) {
                reader.readNext();
                if(reader.isStartElement()) {
                    QStringRef el(reader.name());
                    if("widget" == el) {
                        if(main) {
                            className = reader.attributes().value("class").toString();
                            break; }
                        else if(name == reader.attributes().value("name")) {
                            className = reader.attributes().value("class").toString();
                            break; }
                        main = false; }
                    else if("action" == el) {
                        if(name == reader.attributes().value("name")) {
                            className = "QAction";
                            break; }}
                    else if("actiongroup" == el) {
                        if(name == reader.attributes().value("name")) {
                            className = "QActionGroup";
                            break; }}
                    else if("layout" == el) {
                        if(name == reader.attributes().value("name")) {
                            className = reader.attributes().value("class").toString();
                            break; }}}}
            if(!className.isEmpty()) {
                cl_object l_ret = from_qstring(className);
                return l_ret; }}}
    error_msg("QUI-CLASS", LIST2(l_ui, l_name));
    return Cnil; }

cl_object qui_names(cl_object l_ui) {
    /// args: (file-name)
    /// Finds all user-defined object names in the given UI file.
    ///     (qui-names "examples/data/main-window.ui")
    ecl_process_env()->nvalues = 1;
    QString ui(toQString(l_ui));
    if(!ui.isEmpty()) {
        if(!ui.endsWith(".ui")) {
            ui.append(".ui"); }
        QFile file(ui);
        if(file.open(QIODevice::ReadOnly)) {
            QStringList names;
            QXmlStreamReader reader(&file);
            while(!reader.atEnd()) {
                reader.readNext();
                if(reader.isStartElement()) {
                    QStringRef el(reader.name());
                    if(("widget"      == el) ||
                       ("action"      == el) ||
                       ("actiongroup" == el) ||
                       ("layout"      == el)) {
                        QString name(reader.attributes().value("name").toString());
                        if(!name.isEmpty()) {
                            names << name; }}}}
            names.sort();
            cl_object l_ret = from_qstringlist(names);
            return l_ret; }}
    error_msg("QUI-NAMES", LIST1(l_ui));
    return Cnil; }

cl_object qsuper_class_name(cl_object l_name) {
    /// args: (name)
    /// Returns the super class of an object name, or <code>NIL</code> if the class doesn't inherit another Qt class.<br>Returns <code>T</code> as second return value for successful calls.
    ///     (qsuper-class-name "QGraphicsLineItem")
    if(ECL_STRINGP(l_name)) {
        bool found = false;
        QByteArray super = superClassName(toCString(l_name), &found);
        const cl_env_ptr l_env = ecl_process_env();
        if(found) {
            l_env->nvalues = 2;
            l_env->values[0] = super.isEmpty() ? Cnil : from_cstring(super);
            l_env->values[1] = Ct;
            return l_env->values[0]; }}
    ecl_process_env()->nvalues = 1;
    error_msg("QSUPER-CLASS-NAME", LIST1(l_name));
    return Cnil; }

cl_object qsingle_shot(cl_object l_msec, cl_object l_fun) {
    /// args: (milliseconds function)
    /// A single shot timer similar to <code>QTimer::singleShot</code>.
    ///     (qsingle-shot 0 'on-qt-idle)
    ///     (let ((ms 500)) (qsingle-shot ms (lambda () (qmsg ms))))
    ecl_process_env()->nvalues = 1;
    void* fun = getLispFun(l_fun);
    if(fun) {
        new SingleShot(toInt(l_msec), fun);
        return l_msec; }
    error_msg("QSINGLE-SHOT", LIST2(l_msec, l_fun));
    return Cnil; }

cl_object qok() {
    /// args: ()
    /// Needed to get the boolean <b>ok</b> value in cases like this:
    ///    (qfun "QFontDialog" "getFont(bool*)" nil)
    ecl_process_env()->nvalues = 1;
    return _ok_ ? Ct : Cnil; }

cl_object qid(cl_object l_class) {
    /// args: (name)
    /// Returns the internally used ID of the object name. Non QObject classes have negative ids.
    ///     (qid "QWidget")
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_class)) {
        int id = classId(l_class);
        if(id) {
            cl_object l_ret = MAKE_FIXNUM(id);
            return l_ret; }}
    return Cnil; }

cl_object qversion() {
    /// args: ()
    /// Returns the EQL version number as "&lt;year&gt;.&lt;month&gt;.&lt;counter&gt;", analogous to the ECL version number.<br>The second return value is the Qt version as returned by <code>qVersion()</code>.
    const cl_env_ptr l_env = ecl_process_env();
    l_env->nvalues = 2;
    l_env->values[0] = from_cstring(EQL::version);
    l_env->values[1] = from_cstring(qVersion());
    return l_env->values[0]; }

cl_object qquit2(cl_object l_exit_status, cl_object /* l_kill_all_threads */) {
    int exit_status = toInt(l_exit_status);
    cl_shutdown();
    qApp->quit();
    exit(exit_status); }



// *** special extensions ***

//
// Contributed by Mark Cox, please see LICENSE-MAKE-QIMAGE.txt
//

cl_object make_qimage_dangerous(cl_object l_vector, cl_object l_width, cl_object l_height, cl_object l_bytes_per_line, cl_object l_format) {
     ecl_process_env()->nvalues = 1;

    // make sure all the input data is of the correct type.
    if (!ECL_VECTORP(l_vector) || !ECL_FIXNUMP(l_width) || !ECL_FIXNUMP(l_height) || !ECL_FIXNUMP(l_bytes_per_line) || !ECL_FIXNUMP(l_format)) {
      error_msg("%MAKE-QIMAGE/DANGEROUS", LIST5(l_vector, l_width, l_height, l_bytes_per_line, l_format));
      return Cnil; }

    ecl_vector *v = &l_vector->vector;
    switch (v->elttype) {
    case ecl_aet_bit:
    case ecl_aet_b8:
    case ecl_aet_b16:
    case ecl_aet_b32:
      break;
    default:
      error_msg("%MAKE-QIMAGE/DANGEROUS", LIST5(l_vector, l_width, l_height, l_bytes_per_line, l_format));
      return Cnil; }

    int width                   = toInt<int>(l_width);
    int height                  = toInt<int>(l_height);
    int bytes_per_line          = toInt<int>(l_bytes_per_line);
    QImage::Format image_format = (QImage::Format)toInt<int>(l_format);

    QImage *image = new QImage(width, height, image_format);
    Q_ASSERT(image->bytesPerLine() >= bytes_per_line);

    uint8_t *current = v->self.b8;
    for (int row = 0; row < height; row++) {
      uint8_t *destination = (uint8_t *)image->scanLine(row);
      std::copy(current, current + bytes_per_line, destination);
      current += bytes_per_line; }

    cl_object l_image = qt_object_from_name("QImage", (void*)image);
    return l_image; }

QT_END_NAMESPACE
