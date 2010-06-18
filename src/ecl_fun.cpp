// copyright (c) 2010 power4projects software

#include "ecl_fun.h"
#include "eql.h"
#include "dyn_object.h"
#include "gen/_objects.h"

#ifdef MODULE_OPENGL
#include <QtOpenGL>
#endif

typedef QPair<QByteArray, void*> MetaArg;
typedef QList<MetaArg>           MetaArgList;
typedef QListIterator<MetaArg>   MetaArgIterator;
typedef QList<QByteArray>        TypeList;

static const char SIG = '2';
static const char SLO = '1';
static int _n_cstr_ = -1;
static const QMetaObject *staticQtMetaObject = QtMetaObject::get();

struct QtObject {
    QtObject() : pointer(0), unique(0), id(0) {}

    void *pointer;
    uint unique;
    int id;

    bool isQObject() const { return (id > 0); }
    bool isStatic() const { return !pointer; }
    QByteArray className() const {
        return id ? ((id > 0) ? Objects::qNames.at(id - 1) : Objects::nNames.at(-id - 1)) : QByteArray(); }
};

class UiLoader : public QUiLoader {
public:
    QWidget *createWidget(const QString &cl, QWidget *par, const QString &name) {
        QWidget *w = 0;
        int id = Objects::q_names.value(cl.toAscii(), -1);
        if(id != -1) {
            // qt_metacall to base constructor "C(uint)"
            QObject *caller = Objects::Q[id - 1];
            const QMetaObject *mo = caller->metaObject();
            int n = mo->indexOfMethod("C(uint)");
            if(n != -1) {
                QMetaMethod mm(mo->method(n));
                void *args[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                void *pointer;
                args[0] = &pointer; // return value
                uint unique = Objects::unique();
                args[1] = &unique;
                caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                if(pointer) {
                    w = (QWidget*)pointer;
                    if(par) {
                        w->setParent(par); }
                    Objects::ui_unique[name] = unique;
                    w->setObjectName(name); }}
            else {
                // fallback
                w = QUiLoader::createWidget(cl, par, name); }}
        return w; }
};

void iniCLFunctions() {
    cl_object eql(make_simple_base_string("EQL"));
    cl_make_package(1, eql);
    si_select_package(eql);
    cl_def_c_function(c_string_to_object("qadd-event-filter"),    (cl_objectfn_fixed)qadd_event_filter,        3);
    cl_def_c_function(c_string_to_object("qapropos2"),            (cl_objectfn_fixed)qapropos2,                3);
    cl_def_c_function(c_string_to_object("qapp"),                 (cl_objectfn_fixed)qapp,                     0);
    cl_def_c_function(c_string_to_object("qclear-event-filters"), (cl_objectfn_fixed)qclear_event_filters,     0);
    cl_def_c_function(c_string_to_object("qconnect2"),            (cl_objectfn_fixed)qconnect2,                5);
    cl_def_c_function(c_string_to_object("qcopy"),                (cl_objectfn_fixed)qcopy,                    1);
    cl_def_c_function(c_string_to_object("qdelete"),              (cl_objectfn_fixed)qdelete,                  1);
    cl_def_c_function(c_string_to_object("qenum2"),               (cl_objectfn_fixed)qenum2,                   2);
    cl_def_c_function(c_string_to_object("qfind-child"),          (cl_objectfn_fixed)qfind_child,              2);
    cl_def_c_function(c_string_to_object("qid"),                  (cl_objectfn_fixed)qid,                      1);
    cl_def_c_function(c_string_to_object("qinvoke-method2"),      (cl_objectfn_fixed)qinvoke_method2,          4);
    cl_def_c_function(c_string_to_object("qload-ui"),             (cl_objectfn_fixed)qload_ui,                 1);
    cl_def_c_function(c_string_to_object("qnew-instance2"),       (cl_objectfn_fixed)qnew_instance2,           2);
    cl_def_c_function(c_string_to_object("qnobject-super-class"), (cl_objectfn_fixed)qnobject_super_class,     1);
    cl_def_c_function(c_string_to_object("qobject-names2"),       (cl_objectfn_fixed)qobject_names2,           1);
    cl_def_c_function(c_string_to_object("qoverride"),            (cl_objectfn_fixed)qoverride,                3);
    cl_def_c_function(c_string_to_object("qprocess-events"),      (cl_objectfn_fixed)qprocess_events,          0);
    cl_def_c_function(c_string_to_object("qproperty"),            (cl_objectfn_fixed)qproperty,                2);
    cl_def_c_function(c_string_to_object("qquit"),                (cl_objectfn_fixed)qquit,                    0);
    cl_def_c_function(c_string_to_object("qsender"),              (cl_objectfn_fixed)qsender,                  0);
    cl_def_c_function(c_string_to_object("qset-property"),        (cl_objectfn_fixed)qset_property,            3);
    cl_def_c_function(c_string_to_object("qsingle-shot"),         (cl_objectfn_fixed)qsingle_shot,             2);
    cl_def_c_function(c_string_to_object("qstatic-meta-object"),  (cl_objectfn_fixed)qstatic_meta_object,      1);
    cl_def_c_function(c_string_to_object("qt-object-name"),       (cl_objectfn_fixed)qt_object_name,           1);
    cl_def_c_function(c_string_to_object("tr"),                   (cl_objectfn_fixed)tr,                       1); }

enum UserMetaTypes {
    // must correspond exactly to "registerMetaTypes()"
    Start = QMetaType::User,
#ifdef MODULE_OPENGL
    T_GLfloat,
    T_GLint,
    T_GLuint,
#endif
    T_QGradientStop,
    T_QList_QAbstractButton,
    T_QList_QAction,
    T_QList_QByteArray,
    T_QList_QDockWidget,
    T_QList_QGraphicsItem,
    T_QList_QGraphicsTransform,
    T_QList_QGraphicsView,
    T_QList_QGraphicsWidget,
    T_QList_QKeySequence,
    T_QList_QListWidgetItem,
    T_QList_QObject,
    T_QObjectList,
    T_QList_QPolygonF,
    T_QList_QSize,
    T_QList_QStandardItem,
    T_QList_QTableWidgetItem,
    T_QList_QTableWidgetSelectionRange,
    T_QList_QTextFrame,
    T_QList_QTreeWidgetItem,
    T_QList_QUndoStack,
    T_QList_QUrl,
    T_QList_QWidget,
    T_QWidgetList,
    T_QList_int,
    T_QList_qreal,
    T_QModelIndex,
    T_QPainterPath,
    T_QPolygonF,
    T_QRgb,
    T_QTableWidgetSelectionRange,
    T_QGradientStops,
    T_QVector_QLine,
    T_QVector_QLineF,
    T_QVector_QPoint,
    T_QVector_QPointF,
    T_QVector_QRect,
    T_QVector_QRectF,
    T_QVector_QRgb,
    T_QVector_QTextFormat,
    T_QVector_QTextLength,
    T_QVector_qreal
};

void registerMetaTypes() {
    // must correspond exactly to "enum UserMetaTypes"
#ifdef MODULE_OPENGL
    qRegisterMetaType<GLfloat>("GLfloat");
    qRegisterMetaType<GLint>("GLint");
    qRegisterMetaType<GLuint>("GLuint");
#endif
    qRegisterMetaType<QGradientStop>("QGradientStop");
    qRegisterMetaType<QList<QAbstractButton*> >("QList<QAbstractButton*>");
    qRegisterMetaType<QList<QAction*> >("QList<QAction*>");
    qRegisterMetaType<QList<QByteArray> >("QList<QByteArray>");
    qRegisterMetaType<QList<QDockWidget*> >("QList<QDockWidget*>");
    qRegisterMetaType<QList<QGraphicsItem*> >("QList<QGraphicsItem*>");
    qRegisterMetaType<QList<QGraphicsTransform*> >("QList<QGraphicsTransform*>");
    qRegisterMetaType<QList<QGraphicsView*> >("QList<QGraphicsView*>");
    qRegisterMetaType<QList<QGraphicsWidget*> >("QList<QGraphicsWidget*>");
    qRegisterMetaType<QList<QKeySequence> >("QList<QKeySequence>");
    qRegisterMetaType<QList<QListWidgetItem*> >("QList<QListWidgetItem*>");
    qRegisterMetaType<QList<QObject*> >("QList<QObject*>");
    qRegisterMetaType<QList<QObject*> >("QObjectList");
    qRegisterMetaType<QList<QPolygonF> >("QList<QPolygonF>");
    qRegisterMetaType<QList<QSize> >("QList<QSize>");
    qRegisterMetaType<QList<QStandardItem*> >("QList<QStandardItem*>");
    qRegisterMetaType<QList<QTableWidgetItem*> >("QList<QTableWidgetItem*>");
    qRegisterMetaType<QList<QTableWidgetSelectionRange> >("QList<QTableWidgetSelectionRange>");
    qRegisterMetaType<QList<QTextFrame*> >("QList<QTextFrame*>");
    qRegisterMetaType<QList<QTreeWidgetItem*> >("QList<QTreeWidgetItem*>");
    qRegisterMetaType<QList<QUndoStack*> >("QList<QUndoStack*>");
    qRegisterMetaType<QList<QUrl> >("QList<QUrl>");
    qRegisterMetaType<QList<QWidget*> >("QList<QWidget*>");
    qRegisterMetaType<QList<QWidget*> >("QWidgetList");
    qRegisterMetaType<QList<int> >("QList<int>");
    qRegisterMetaType<QList<qreal> >("QList<qreal>");
    qRegisterMetaType<QModelIndex>("QModelIndex");
    qRegisterMetaType<QPainterPath>("QPainterPath");
    qRegisterMetaType<QPolygonF>("QPolygonF");
    qRegisterMetaType<QRgb>("QRgb");
    qRegisterMetaType<QTableWidgetSelectionRange>("QTableWidgetSelectionRange");
    qRegisterMetaType<QVector<QGradientStop> >("QGradientStops");
    qRegisterMetaType<QVector<QLine> >("QVector<QLine>");
    qRegisterMetaType<QVector<QLineF> >("QVector<QLineF>");
    qRegisterMetaType<QVector<QPoint> >("QVector<QPoint>");
    qRegisterMetaType<QVector<QPointF> >("QVector<QPointF>");
    qRegisterMetaType<QVector<QRect> >("QVector<QRect>");
    qRegisterMetaType<QVector<QRectF> >("QVector<QRectF>");
    qRegisterMetaType<QVector<QRgb> >("QVector<QRgb>");
    qRegisterMetaType<QVector<QTextFormat> >("QVector<QTextFormat>");
    qRegisterMetaType<QVector<QTextLength> >("QVector<QTextLength>");
    qRegisterMetaType<QVector<qreal> >("QVector<qreal>"); }



// *** utilities ***

static char **to_cstring(cl_object l_str) {
    static char *s[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    ++_n_cstr_;
    if((_n_cstr_ >= 0) && (_n_cstr_ <= 9)) {
        cl_index l = l_str->base_string.fillp;
        s[++_n_cstr_] = new char[l + 1];
        strncpy(s[_n_cstr_], (const char*)l_str->base_string.self, l);
        (s[_n_cstr_])[l] = 0;
        return &s[_n_cstr_]; }
    return 0; }

static const QMetaObject *staticMetaObject(QtObject o) {
    return Objects::staticMetaObject(QByteArray(), o.id); }

static const QMetaObject *methodMetaObject(QtObject o) {
    return (o.isQObject() ? Objects::Q[o.id - 1] : Objects::N[-o.id - 1])->metaObject(); }

static const QMetaObject *methodMetaObjectFromName(const QByteArray &name, bool qobject) {
    return (qobject
            ? Objects::Q[Objects::q_names.value(name) - 1]
            : Objects::N[Objects::n_names.value(name) - 1])
            ->metaObject(); }

static cl_object q_keyword() {
    STATIC_SYMBOL_PKG(s_q, "Q", "KEYWORD")
    return s_q; }

static void error(const char *fun, cl_object l_args) {
    STATIC_SYMBOL(s_error_output, "*ERROR-OUTPUT*")
    cl_format(4,
              cl_symbol_value(s_error_output),
              make_constant_base_string("[EQL:error] ~a (~{~s~^ ~})~%"),
              make_constant_base_string(fun),
              l_args); }

static cl_object make_char_string_copy(const char *s, cl_index l) {
    cl_object l_s;
    l_s = ecl_alloc_simple_base_string(l);
    memcpy(l_s->base_string.self, s, l);
    return l_s; }

static cl_object make_vector() {
    STATIC_SYMBOL_PKG(s_make_vector, "%MAKE-VECTOR", "EQL")
    return cl_funcall(1, s_make_vector); }



// *** type conversions ***

template<typename T>
static T toInt(cl_object l_num) {
    T i = 0;
    if(FIXNUMP(l_num)) {
        i = fixint(l_num); }
    return i; }

static int toInt(cl_object l_num) {
    return toInt<int>(l_num); }

template<typename T>
static T toUInt(cl_object l_num) {
    T i = 0;
    if(FIXNUMP(l_num)) {
        i = fixnnint(l_num); }
    return i; }

static int toUInt(cl_object l_num) {
    return toUInt<uint>(l_num); }

template<typename T>
static T toFloat(cl_object l_num) {
    T f = 0;
    if(ECL_DOUBLE_FLOAT_P(l_num)) {
        f = df(l_num); }
    else if(ECL_SINGLE_FLOAT_P(l_num)) {
        f = sf(l_num); }
    else if(FIXNUMP(l_num)) {
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

static QChar toQChar(cl_object l_ch) {
    QChar ch;
    if(CHARACTERP(l_ch)) {
        ch = QChar(toInt(cl_char_code(l_ch))); }
    return ch; }

static QByteArray toQByteArray(cl_object l_str) {
    QByteArray ba;
    if(ECL_STRINGP(l_str)) {
#ifdef ECL_UNICODE
        if(ECL_BASE_STRING_P(l_str)) {
            ba = QByteArray((char*)l_str->base_string.self, l_str->base_string.fillp); }
        else {
            int l = l_str->string.fillp;
            ba.reserve(l);
            ecl_character *l_s = l_str->string.self;
            for(int i = 0; i < l; ++i) {
                ba[i] = l_s[i]; }}
#else
        ba = QByteArray((char*)l_str->base_string.self, l_str->base_string.fillp);
#endif
    }
    return ba; }

static QString toQString(cl_object l_str) {
    QString s;
    if(ECL_STRINGP(l_str)) {
#ifdef ECL_UNICODE
        if(ECL_BASE_STRING_P(l_str)) {
            s = QString::fromLatin1((char*)l_str->string.self, l_str->base_string.fillp); }
        else {
            int l = l_str->string.fillp;
            s.reserve(l);
            ecl_character *l_s = l_str->string.self;
            for(int i = 0; i < l; ++i) {
                s[i] = QChar(l_s[i]); }}
#else
        s = QString::fromLatin1((char*)l_str->string.self, l_str->base_string.fillp); }
#endif
    }
    return s; }

static int classId(cl_object l_class) {
    QByteArray name(toQByteArray(l_class));
    int id = Objects::q_names.value(name, 0);
    if(!id) {
        id = -Objects::n_names.value(name, 0); }
    return id; }

static QtObject toQtObject(cl_object l_obj) {
    STATIC_SYMBOL_PKG(s_qt_object_p,       "QT-OBJECT-P",       "EQL")
    STATIC_SYMBOL_PKG(s_qt_object_pointer, "QT-OBJECT-POINTER", "EQL")
    STATIC_SYMBOL_PKG(s_qt_object_unique,  "QT-OBJECT-UNIQUE",  "EQL")
    STATIC_SYMBOL_PKG(s_qt_object_id,      "QT-OBJECT-ID",      "EQL")
    QtObject o;
    if(cl_funcall(2, s_qt_object_p, l_obj) == Ct) {
        o.pointer = (void*)fixnnint(cl_funcall(2, s_qt_object_pointer, l_obj));
        o.unique = fixnnint(cl_funcall(2, s_qt_object_unique, l_obj));
        o.id = toInt(cl_funcall(2, s_qt_object_id, l_obj)); }
    else { // string name, for static methods
        o.id = classId(l_obj); }
    return o; }

static cl_object qt_object(void *pointer, uint unique, int id) {
    STATIC_SYMBOL_PKG(s_qt_object, "QT-OBJECT", "EQL")
    return cl_funcall(4, s_qt_object,
                      ecl_make_unsigned_integer((cl_index)pointer),
                      ecl_make_unsigned_integer((cl_index)unique),
                      MAKE_FIXNUM(id)); }

static cl_object qt_object_from_name(const QByteArray &name, void *pointer, uint unique = 0) {
    QByteArray name2(name);
    if(name2.endsWith('*')) {
        name2.truncate(name2.length() - 1); }
    if(name2.startsWith("const ")) {
        name2 = name2.mid(6); }
    if('L' == name2.at(0)) {
        name2[0] = 'Q'; }
    int id = Objects::q_names.value(name2, 0);
    if(!id) {
        id = -Objects::n_names.value(name2, 0); }
    return qt_object(pointer, unique, id); }

static QStringList toQStringList(cl_object l_lst) {
    QStringList l;
    if(LISTP(l_lst)) {
        cl_object l_el = l_lst;
        while(l_el != Cnil) {
            l << toQString(cl_car(l_el));
            l_el = cl_cdr(l_el); }}
    return l; }

static QCursor toQCursor(cl_object l_cur) {
    if(ECL_STRINGP(l_cur)) {
        const QMetaObject *mo = staticQtMetaObject;
        return QCursor((Qt::CursorShape)mo->enumerator(mo->indexOfEnumerator("CursorShape"))
                       .keyToValue(toQByteArray(l_cur))); }
    return QCursor(); }

static QPolygon toQPolygon(cl_object l_lst) {
    QPolygon p;
    if(LISTP(l_lst)) {
        cl_object l_el = l_lst;
        while(l_el != Cnil) {
            p << QPoint(toInt(cl_first(l_el)), toInt(cl_second(l_el)));
            l_el = cl_cdr(l_el);
            l_el = cl_cdr(l_el); }}
    return p; }

static QPolygonF toQPolygonF(cl_object l_lst) {
    QPolygonF p;
    if(LISTP(l_lst)) {
        cl_object l_el = l_lst;
        while(l_el != Cnil) {
            p << QPointF(toReal(cl_first(l_el)), toReal(cl_second(l_el)));
            l_el = cl_cdr(l_el);
            l_el = cl_cdr(l_el); }}
    return p; }

static QFont toQFont(cl_object l_f) {
    QFont f;
    f.fromString(toQString(l_f));
    return f; }

static QColor toQColor(cl_object l_c) {
    return QColor(toQString(l_c)); }

static QDate toQDate(cl_object l_d) {
    return QDate(QDate::fromString(toQString(l_d), Qt::ISODate)); }

static QTime toQTime(cl_object l_d) {
    return QTime(QTime::fromString(toQString(l_d), Qt::ISODate)); }

static QDateTime toQDateTime(cl_object l_d) {
    return QDateTime(QDateTime::fromString(toQString(l_d), Qt::ISODate)); }

static QUrl toQUrl(cl_object l_c) {
    return QUrl(toQString(l_c)); }

static QKeySequence toQKeySequence(cl_object l_c) {
    return QKeySequence(toQString(l_c)); }

static QGradientStop toQGradientStop(cl_object l_gs) {
    QGradientStop gs;
    if(cl_consp(l_gs)) {
        gs = qMakePair(toReal(cl_car(l_gs)), toQColor(cl_cdr(l_gs))); }
    return gs; }

// implicit pointer types
TO_QT_TYPE_PTR2(QBrush, qbrush)
TO_QT_TYPE_PTR2(QIcon, qicon)
TO_QT_TYPE_PTR2(QImage, qimage)
TO_QT_TYPE_PTR(QModelIndex, qmodelindex)
TO_QT_TYPE_PTR(QPainterPath, qpainterpath)
TO_QT_TYPE_PTR2(QPalette, qpalette)
TO_QT_TYPE_PTR2(QPen, qpen)
TO_QT_TYPE_PTR2(QPixmap, qpixmap)
TO_QT_TYPE_PTR2(QTableWidgetSelectionRange, qtablewidgetselectionrange)
TO_QT_TYPE_PTR2(QTextFormat, qtextformat)
TO_QT_TYPE_PTR2(QTextLength, qtextlength)

TO_QT_TYPEF(QPoint)
TO_QT_TYPEF(QSize)

TO_QT_TYPEF2(QLine)
TO_QT_TYPEF2(QRect)

TO_QT_LIST_PTR(QAbstractButton)
TO_QT_LIST_PTR(QAction)
TO_QT_LIST_PTR(QDockWidget)
TO_QT_LIST_PTR(QGraphicsItem)
TO_QT_LIST_PTR(QGraphicsTransform)
TO_QT_LIST_PTR(QGraphicsView)
TO_QT_LIST_PTR(QGraphicsWidget)
TO_QT_LIST_PTR(QListWidgetItem)
TO_QT_LIST_PTR(QObject)
TO_QT_LIST_PTR(QStandardItem)
TO_QT_LIST_PTR(QTableWidgetItem)
TO_QT_LIST_PTR(QTextFrame)
TO_QT_LIST_PTR(QTreeWidgetItem)
TO_QT_LIST_PTR(QUndoStack)
TO_QT_LIST_PTR(QWidget)

TO_QT_LIST_VAL(QByteArray)
TO_QT_LIST_VAL(QKeySequence)
TO_QT_LIST_VAL(QPolygonF)
TO_QT_LIST_VAL(QSize)
TO_QT_LIST_VAL(QTableWidgetSelectionRange)
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

static QVariant toQVariant(cl_object l_obj, const char *s_type, QVariant::Type n_type = QVariant::UserType) {
    QVariant var;
    int type = (QVariant::UserType == n_type) ? QVariant::nameToType(s_type) : n_type;
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
        case QVariant::LongLong:    var = toInt<qlonglong>(l_obj); break;
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
        case QVariant::String:      var = toQString(l_obj); break;
        case QVariant::StringList:  var = toQStringList(l_obj); break;
        case QVariant::TextFormat:  var = toQTextFormat(l_obj); break;
        case QVariant::TextLength:  var = toQTextLength(l_obj); break;
        case QVariant::Time:        var = toQTime(l_obj); break;
        case QVariant::Url:         var = toQUrl(l_obj); break;
        case QVariant::UInt:        var = toUInt(l_obj); break;
        case QVariant::ULongLong:   var = toUInt<qulonglong>(l_obj); break; }
    return var; }

static cl_object from_qstring(const QString &s) {
#ifdef ECL_UNICODE
    cl_object l_s;
    l_s = ecl_alloc_simple_extended_string(s.length());
    ecl_character *l_p = l_s->string.self;
    for(int i = 0; i < s.length(); ++i) {
        l_p[i] = s.at(i).unicode(); }
    return l_s;
#else
    return from_qbytearray(s.toLatin1());
#endif
}

static cl_object from_qkeysequence(const QKeySequence &k) {
    return from_qstring(k.toString()); }

static cl_object from_qurl(const QUrl &u) {
    return from_qstring(u.toString()); }

static cl_object from_qchar(const QChar &ch) {
    return cl_code_char(MAKE_FIXNUM(ch.unicode())); }

static cl_object from_qbytearray(const QByteArray &ba) {
    return make_char_string_copy(ba.constData(), (cl_index)ba.length()); }

static cl_object from_qstringlist(const QStringList &l) {
    cl_object l_lst = Cnil;
    Q_FOREACH(QString s, l) {
        l_lst = CONS(from_qstring(s), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_intlist(const QList<int> &l) {
    cl_object l_lst = Cnil;
    Q_FOREACH(int i, l) {
        l_lst = CONS(MAKE_FIXNUM(i), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_qreallist(const QList<qreal> &l) {
    cl_object l_lst = Cnil;
    Q_FOREACH(qreal r, l) {
        l_lst = CONS(ecl_make_doublefloat(r), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_qcursor(const QCursor &cr) {
    return make_base_string_copy(staticQtMetaObject->enumerator(staticQtMetaObject->indexOfEnumerator("CursorShape")).valueToKey(cr.shape())); }

static cl_object from_qfont(const QFont &f) {
    return from_qstring(f.toString()); }

static cl_object from_qcolor(const QColor &c) {
    return from_qstring(c.name()); }

static cl_object from_qdate(const QDate &d) {
    return from_qstring(d.toString(Qt::ISODate)); }

static cl_object from_qtime(const QTime &t) {
    return from_qstring(t.toString(Qt::ISODate)); }

static cl_object from_qdatetime(const QDateTime &dt) {
    return from_qstring(dt.toString(Qt::ISODate)); }

static cl_object from_qpolygon(const QPolygon &p) {
    cl_object l_lst = Cnil;
    for(int i = 0; i < p.size(); ++i) {
        int x, y;
        p.point(i, &x, &y);
        l_lst = CONS(MAKE_FIXNUM(y), CONS(MAKE_FIXNUM(x), l_lst)); }
    return cl_nreverse(l_lst); }

static cl_object from_qpolygonf(const QPolygonF &pol) {
    cl_object l_lst = Cnil;
    for(int i = 0; i < pol.size(); ++i) {
        QPointF p = pol.at(i);
        l_lst = CONS(ecl_make_doublefloat(p.y()), CONS(ecl_make_doublefloat(p.x()), l_lst)); }
    return cl_nreverse(l_lst); }

static cl_object from_qgradientstop(const QGradientStop &gs) {
    return CONS(ecl_make_doublefloat(gs.first), from_qcolor(gs.second)); }

static cl_object from_qwidgetlist(const QWidgetList &wl) {
    cl_object l_lst = Cnil;
    Q_FOREACH(QWidget *w, wl) {
        l_lst = CONS(qt_object_from_name(w->metaObject()->className(), w), l_lst); }
    return cl_nreverse(l_lst); }

static cl_object from_qobjectlist(const QObjectList &ol) {
    cl_object l_lst = Cnil;
    Q_FOREACH(QObject *o, ol) {
        l_lst = CONS(qt_object_from_name(o->metaObject()->className(), o), l_lst); }
    return cl_nreverse(l_lst); }

TO_CL_TYPEF(QPoint, qpoint, x, y)
TO_CL_TYPEF(QSize, qsize, width, height)

TO_CL_TYPEF2(QLine, qline, x1, y1, x2, y2)
TO_CL_TYPEF2(QRect, qrect, x, y, width, height)

TO_CL_LIST_PTR(QAbstractButton, qabstractbutton)
TO_CL_LIST_PTR(QAction, qaction)
TO_CL_LIST_PTR(QDockWidget, qdockwidget)
TO_CL_LIST_PTR(QGraphicsItem, qgraphicsitem)
TO_CL_LIST_PTR(QGraphicsTransform, qgraphicstransform)
TO_CL_LIST_PTR(QGraphicsView, qgraphicsview)
TO_CL_LIST_PTR(QGraphicsWidget, qgraphicswidget)
TO_CL_LIST_PTR(QListWidgetItem, qlistwidgetitem)
TO_CL_LIST_PTR(QStandardItem, qstandarditem)
TO_CL_LIST_PTR(QTableWidgetItem, qtablewidgetitem)
TO_CL_LIST_PTR(QTextFrame, qtextframe)
TO_CL_LIST_PTR(QTreeWidgetItem, qtreewidgetitem)
TO_CL_LIST_PTR(QUndoStack, qundostack)

TO_CL_LIST_VAL(QByteArray, qbytearray)
TO_CL_LIST_VAL(QKeySequence, qkeysequence)
TO_CL_LIST_VAL(QPolygonF, qpolygonf)
TO_CL_LIST_VAL(QSize, qsize)
TO_CL_LIST_VAL(QTableWidgetSelectionRange, qtablewidgetselectionrange)
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

static cl_object to_lisp_object(const QVariant &var) {
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
        case QVariant::Font:        l_obj = from_qstring(var.toString()); break;
        case QVariant::Icon:        l_obj = from_qicon(qVariantValue<QIcon>(var)); break;
        case QVariant::Int:         l_obj = MAKE_FIXNUM(var.toInt()); break;
        case QVariant::Image:       l_obj = from_qimage(qVariantValue<QImage>(var)); break;
        case QVariant::KeySequence: l_obj = from_qkeysequence(qVariantValue<QKeySequence>(var)); break;
        case QVariant::Line:        l_obj = from_qline(var.toLine()); break;
        case QVariant::LineF:       l_obj = from_qlinef(var.toLineF()); break;
        case QVariant::LongLong:    l_obj = MAKE_FIXNUM(var.toLongLong());
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
        case QVariant::String:      l_obj = from_qstring(var.toString()); break;
        case QVariant::StringList:  l_obj = from_qstringlist(var.toStringList()); break;
        case QVariant::TextFormat:  l_obj = from_qtextformat(qVariantValue<QTextFormat>(var)); break;
        case QVariant::TextLength:  l_obj = from_qtextlength(qVariantValue<QTextLength>(var)); break;
        case QVariant::Time:        l_obj = from_qtime(var.toTime()); break;
        case QVariant::Url:         l_obj = from_qurl(var.toUrl()); break;
        case QVariant::UInt:        l_obj = MAKE_FIXNUM(var.toUInt()); break;
        case QVariant::ULongLong:   l_obj = MAKE_FIXNUM(var.toULongLong()); }
    return l_obj; }

static MetaArg toMetaArg(const QByteArray &sType, cl_object l_arg, QObject *q = 0) {
    void *p = 0;
    const int n = QMetaType::type(sType);
    switch(n) {
        case QMetaType::Bool:                    p = new bool(l_arg != Cnil); break;
        case QMetaType::Double:                  p = new double(toFloat<double>(l_arg)); break;
        case QMetaType::Float:                   p = new float(toFloat<float>(l_arg)); break;
        case QMetaType::Int:                     p = new int(toInt(l_arg)); break;
        case QMetaType::LongLong:                p = new qlonglong(toInt<qlonglong>(l_arg)); break;
        case QMetaType::UInt:                    p = new uint(toUInt(l_arg)); break;
        case QMetaType::ULongLong:               p = new qulonglong(toUInt<qulonglong>(l_arg)); break;
        case QMetaType::QByteArray:              p = new QByteArray(toQByteArray(l_arg)); break;
        case QMetaType::QChar:                   p = new QChar(toQChar(l_arg)); break;
        case QMetaType::QColor:                  p = new QColor(toQColor(l_arg)); break;
        case QMetaType::QCursor:                 p = new QCursor(toQCursor(l_arg)); break;
        case QMetaType::QDate:                   p = new QDate(toQDate(l_arg)); break;
        case QMetaType::QDateTime:               p = new QDateTime(toQDateTime(l_arg)); break;
        case QMetaType::QFont:                   p = new QFont(toQFont(l_arg)); break;
        case QMetaType::QKeySequence:            p = new QKeySequence(toQKeySequence(l_arg)); break;
        case QMetaType::QLine:                   p = new QLine(toQLine(l_arg)); break;
        case QMetaType::QLineF:                  p = new QLineF(toQLineF(l_arg)); break;
        case QMetaType::QPoint:                  p = new QPoint(toQPoint(l_arg)); break;
        case QMetaType::QPointF:                 p = new QPointF(toQPointF(l_arg)); break;
        case QMetaType::QPolygon:                p = new QPolygon(toQPolygon(l_arg)); break;
        case QMetaType::QRect:                   p = new QRect(toQRect(l_arg)); break;
        case QMetaType::QRectF:                  p = new QRectF(toQRectF(l_arg)); break;
        case QMetaType::QSize:                   p = new QSize(toQSize(l_arg)); break;
        case QMetaType::QSizeF:                  p = new QSizeF(toQSizeF(l_arg)); break;
        case QMetaType::QString:                 p = new QString(toQString(l_arg)); break;
        case QMetaType::QStringList:             p = new QStringList(toQStringList(l_arg)); break;
        case QMetaType::QTime:                   p = new QTime(toQTime(l_arg)); break;
        case QMetaType::QUrl:                    p = new QUrl(toQUrl(l_arg)); break;
        case QMetaType::QBrush:                  p = toQBrushPointer(l_arg); break;
        case QMetaType::QIcon:                   p = toQIconPointer(l_arg); break;
        case QMetaType::QImage:                  p = toQImagePointer(l_arg); break;
        case QMetaType::QPalette:                p = toQPalettePointer(l_arg); break;
        case QMetaType::QPen:                    p = toQPenPointer(l_arg); break;
        case QMetaType::QPixmap:                 p = toQPixmapPointer(l_arg); break;
        case QMetaType::QTextFormat:             p = toQTextFormatPointer(l_arg); break;
        case QMetaType::QTextLength:             p = toQTextLengthPointer(l_arg); break;
        case T_QGradientStop:                    p = new QGradientStop(toQGradientStop(l_arg)); break;
        case T_QList_QAbstractButton:            p = new QList<QAbstractButton*>(toQAbstractButtonList(l_arg)); break;
        case T_QList_QAction:                    p = new QList<QAction*>(toQActionList(l_arg)); break;
        case T_QList_QByteArray:                 p = new QList<QByteArray>(toQByteArrayList(l_arg)); break;
        case T_QList_QDockWidget:                p = new QList<QDockWidget*>(toQDockWidgetList(l_arg)); break;
        case T_QList_QGraphicsItem:              p = new QList<QGraphicsItem*>(toQGraphicsItemList(l_arg)); break;
        case T_QList_QGraphicsTransform:         p = new QList<QGraphicsTransform*>(toQGraphicsTransformList(l_arg)); break;
        case T_QList_QGraphicsView:              p = new QList<QGraphicsView*>(toQGraphicsViewList(l_arg)); break;
        case T_QList_QGraphicsWidget:            p = new QList<QGraphicsWidget*>(toQGraphicsWidgetList(l_arg)); break;
        case T_QList_QKeySequence:               p = new QList<QKeySequence>(toQKeySequenceList(l_arg)); break;
        case T_QList_QListWidgetItem:            p = new QList<QListWidgetItem*>(toQListWidgetItemList(l_arg)); break;
        case T_QObjectList:                      // empty
        case T_QList_QObject:                    p = new QList<QObject*>(toQObjectList(l_arg)); break;
        case T_QList_QPolygonF:                  p = new QList<QPolygonF>(toQPolygonFList(l_arg)); break;
        case T_QList_QSize:                      p = new QList<QSize>(toQSizeList(l_arg)); break;
        case T_QList_QStandardItem:              p = new QList<QStandardItem*>(toQStandardItemList(l_arg)); break;
        case T_QList_QTableWidgetItem:           p = new QList<QTableWidgetItem*>(toQTableWidgetItemList(l_arg)); break;
        case T_QList_QTableWidgetSelectionRange: p = new QList<QTableWidgetSelectionRange>(toQTableWidgetSelectionRangeList(l_arg)); break;
        case T_QList_QTextFrame:                 p = new QList<QTextFrame*>(toQTextFrameList(l_arg)); break;
        case T_QList_QTreeWidgetItem:            p = new QList<QTreeWidgetItem*>(toQTreeWidgetItemList(l_arg)); break;
        case T_QList_QUndoStack:                 p = new QList<QUndoStack*>(toQUndoStackList(l_arg)); break;
        case T_QList_QUrl:                       p = new QList<QUrl>(toQUrlList(l_arg)); break;
        case T_QWidgetList:                      // empty
        case T_QList_QWidget:                    p = new QList<QWidget*>(toQWidgetList(l_arg)); break;
        case T_QList_int:                        p = new QList<int>(toIntList(l_arg)); break;
        case T_QList_qreal:                      p = new QList<qreal>(toRealList(l_arg)); break;
        case T_QModelIndex:                      p = toQModelIndexPointer(l_arg); break;
        case T_QPainterPath:                     p = toQPainterPathPointer(l_arg); break;
        case T_QPolygonF:                        p = new QPolygonF(toQPolygonF(l_arg)); break;
        case T_QRgb:                             p = new QRgb(toUInt(l_arg)); break;
        case T_QTableWidgetSelectionRange:       p = toQTableWidgetSelectionRangePointer(l_arg); break;
        case T_QGradientStops:                   p = new QVector<QGradientStop>(toQGradientStopVector(l_arg)); break;
        case T_QVector_QLine:                    p = new QVector<QLine>(toQLineVector(l_arg)); break;
        case T_QVector_QLineF:                   p = new QVector<QLineF>(toQLineFVector(l_arg)); break;
        case T_QVector_QPoint:                   p = new QVector<QPoint>(toQPointVector(l_arg)); break;
        case T_QVector_QPointF:                  p = new QVector<QPointF>(toQPointFVector(l_arg)); break;
        case T_QVector_QRect:                    p = new QVector<QRect>(toQRectVector(l_arg)); break;
        case T_QVector_QRectF:                   p = new QVector<QRectF>(toQRectFVector(l_arg)); break;
        case T_QVector_QRgb:                     p = new QVector<QRgb>(toQRgbVector(l_arg)); break;
        case T_QVector_QTextFormat:              p = new QVector<QTextFormat>(toQTextFormatVector(l_arg)); break;
        case T_QVector_QTextLength:              p = new QVector<QTextLength>(toQTextLengthVector(l_arg)); break;
        case T_QVector_qreal:                    p = new QVector<qreal>(toqrealVector(l_arg)); break;
#ifdef MODULE_OPENGL
        case T_GLfloat:                          p = new GLfloat(toFloat<GLfloat>(l_arg)); break;
        case T_GLint:                            p = new GLint(toInt<GLint>(l_arg)); break;
        case T_GLuint:                           p = new GLuint(toFloat<GLuint>(l_arg)); break;
#endif
        default:
            if(sType.endsWith('*')) {
                if(sType.startsWith('Q') || sType.startsWith("const Q")) {
                    QtObject o = toQtObject(l_arg);
                    void **v = new void*(o.pointer);
                    p = v; }
                else if("const char*" == sType) {
                    if(ECL_STRINGP(l_arg)) {
                        p = to_cstring(l_arg); }}}
            else {
                int i_enum = sType.indexOf("::");
                if(i_enum != -1) {
                    const QMetaObject *mo = 0;
                    if(sType.startsWith("Qt")) {
                        mo = staticQtMetaObject; }
                    else if(q) {
                        mo = q->metaObject(); }
                    int n = -1;
                    if(mo) {
                        n = mo->indexOfEnumerator(sType.mid(i_enum + 2));
                        if(n != -1) {
                            QMetaEnum me = mo->enumerator(n);
                            int *i = new int(me.isFlag()
                                             ? me.keysToValue(toQByteArray(l_arg))
                                             : me.keyToValue(toQByteArray(l_arg)));
                            p = i; }}
                    if(-1 == n) {
                        int *i = new int(fixint(l_arg));
                        p = i; }}}}
    return MetaArg(sType, p); }

static cl_object to_lisp_arg(const MetaArg &arg, QObject *q) {
    cl_object l_ret = Cnil;
    void *p = arg.second;
    if(p) {
        QByteArray sType(arg.first);
        const int n = QMetaType::type(sType);
        switch(n) {
            case QMetaType::Bool:                    l_ret = *(bool*)p ? Ct : Cnil; break;
            case QMetaType::Double:                  l_ret = ecl_make_doublefloat(*(double*)p); break;
            case QMetaType::Float:                   l_ret = ecl_make_singlefloat(*(float*)p); break;
            case QMetaType::Int:                     l_ret = MAKE_FIXNUM(*(int*)p); break;
            case QMetaType::LongLong:                l_ret = MAKE_FIXNUM(*(qulonglong*)p); break;
            case QMetaType::UInt:                    l_ret = MAKE_FIXNUM(*(uint*)p); break;
            case QMetaType::ULongLong:               l_ret = MAKE_FIXNUM(*(qulonglong*)p); break;
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
            case QMetaType::QPalette:                l_ret = from_qpalette(*(QPalette*)p); break;
            case QMetaType::QPen:                    l_ret = from_qpen(*(QPen*)p); break;
            case QMetaType::QPixmap:                 l_ret = from_qpixmap(*(QPixmap*)p); break;
            case QMetaType::QPoint:                  l_ret = from_qpoint(*(QPoint*)p); break;
            case QMetaType::QPointF:                 l_ret = from_qpointf(*(QPointF*)p); break;
            case QMetaType::QPolygon:                l_ret = from_qpolygon(*(QPolygon*)p); break;
            case QMetaType::QRect:                   l_ret = from_qrect(*(QRect*)p); break;
            case QMetaType::QRectF:                  l_ret = from_qrectf(*(QRectF*)p); break;
            case QMetaType::QSize:                   l_ret = from_qsize(*(QSize*)p); break;
            case QMetaType::QSizeF:                  l_ret = from_qsizef(*(QSizeF*)p); break;
            case QMetaType::QString:                 l_ret = from_qstring(*(QString*)p); break;
            case QMetaType::QStringList:             l_ret = from_qstringlist(*(QStringList*)p); break;
            case QMetaType::QTextFormat:             l_ret = from_qtextformat(*(QTextFormat*)p); break;
            case QMetaType::QTextLength:             l_ret = from_qtextlength(*(QTextLength*)p); break;
            case QMetaType::QTime:                   l_ret = from_qtime(*(QTime*)p); break;
            case QMetaType::QUrl:                    l_ret = from_qurl(*(QUrl*)p); break;
            case T_QGradientStop:                    l_ret = from_qgradientstop(*(QGradientStop*)p); break;
            case T_QList_QAbstractButton:            l_ret = from_qabstractbuttonlist(*(QList<QAbstractButton*>*)p); break;
            case T_QList_QAction:                    l_ret = from_qactionlist(*(QList<QAction*>*)p); break;
            case T_QList_QByteArray:                 l_ret = from_qbytearraylist(*(QList<QByteArray>*)p); break;
            case T_QList_QDockWidget:                l_ret = from_qdockwidgetlist(*(QList<QDockWidget*>*)p); break;
            case T_QList_QGraphicsItem:              l_ret = from_qgraphicsitemlist(*(QList<QGraphicsItem*>*)p); break;
            case T_QList_QGraphicsTransform:         l_ret = from_qgraphicstransformlist(*(QList<QGraphicsTransform*>*)p); break;
            case T_QList_QGraphicsView:              l_ret = from_qgraphicsviewlist(*(QList<QGraphicsView*>*)p); break;
            case T_QList_QGraphicsWidget:            l_ret = from_qgraphicswidgetlist(*(QList<QGraphicsWidget*>*)p); break;
            case T_QList_QKeySequence:               l_ret = from_qkeysequencelist(*(QList<QKeySequence>*)p); break;
            case T_QList_QListWidgetItem:            l_ret = from_qlistwidgetitemlist(*(QList<QListWidgetItem*>*)p); break;
            case T_QObjectList:                      // empty
            case T_QList_QObject:                    l_ret = from_qobjectlist(*(QList<QObject*>*)p); break;
            case T_QList_QPolygonF:                  l_ret = from_qpolygonflist(*(QList<QPolygonF>*)p); break;
            case T_QList_QSize:                      l_ret = from_qsizelist(*(QList<QSize>*)p); break;
            case T_QList_QStandardItem:              l_ret = from_qstandarditemlist(*(QList<QStandardItem*>*)p); break;
            case T_QList_QTableWidgetItem:           l_ret = from_qtablewidgetitemlist(*(QList<QTableWidgetItem*>*)p); break;
            case T_QList_QTableWidgetSelectionRange: l_ret = from_qtablewidgetselectionrangelist(*(QList<QTableWidgetSelectionRange>*)p); break;
            case T_QList_QTextFrame:                 l_ret = from_qtextframelist(*(QList<QTextFrame*>*)p); break;
            case T_QList_QTreeWidgetItem:            l_ret = from_qtreewidgetitemlist(*(QList<QTreeWidgetItem*>*)p); break;
            case T_QList_QUndoStack:                 l_ret = from_qundostacklist(*(QList<QUndoStack*>*)p); break;
            case T_QList_QUrl:                       l_ret = from_qurllist(*(QList<QUrl>*)p); break;
            case T_QWidgetList:                      // empty
            case T_QList_QWidget:                    l_ret = from_qwidgetlist(*(QList<QWidget*>*)p); break;
            case T_QList_int:                        l_ret = from_intlist(*(QList<int>*)p); break;
            case T_QList_qreal:                      l_ret = from_qreallist(*(QList<qreal>*)p); break;
            case T_QModelIndex:                      l_ret = from_qmodelindex(*(QModelIndex*)p); break;
            case T_QPainterPath:                     l_ret = from_qpainterpath(*(QPainterPath*)p); break;
            case T_QPolygonF:                        l_ret = from_qpolygonf(*(QPolygonF*)p); break;
            case T_QRgb:                             l_ret = ecl_make_unsigned_integer(*(QRgb*)p); break;
            case T_QTableWidgetSelectionRange:       l_ret = from_qtablewidgetselectionrange(*(QTableWidgetSelectionRange*)p); break;
            case T_QGradientStops:                   l_ret = from_qgradientstopvector(*(QVector<QGradientStop>*)p); break;
            case T_QVector_QLine:                    l_ret = from_qlinevector(*(QVector<QLine>*)p); break;
            case T_QVector_QLineF:                   l_ret = from_qlinefvector(*(QVector<QLineF>*)p); break;
            case T_QVector_QPoint:                   l_ret = from_qpointvector(*(QVector<QPoint>*)p); break;
            case T_QVector_QPointF:                  l_ret = from_qpointfvector(*(QVector<QPointF>*)p); break;
            case T_QVector_QRect:                    l_ret = from_qrectvector(*(QVector<QRect>*)p); break;
            case T_QVector_QRectF:                   l_ret = from_qrectfvector(*(QVector<QRectF>*)p); break;
            case T_QVector_QRgb:                     l_ret = from_qrgbvector(*(QVector<QRgb>*)p); break;
            case T_QVector_QTextFormat:              l_ret = from_qtextformatvector(*(QVector<QTextFormat>*)p); break;
            case T_QVector_QTextLength:              l_ret = from_qtextlengthvector(*(QVector<QTextLength>*)p); break;
            case T_QVector_qreal:                    l_ret = from_qrealvector(*(QVector<qreal>*)p); break;
#ifdef MODULE_OPENGL
            case T_GLfloat:                          l_ret = ecl_make_doublefloat(*(GLfloat*)p); break;
            case T_GLint:                            l_ret = MAKE_FIXNUM(*(GLint*)p); break;
            case T_GLuint:                           l_ret = MAKE_FIXNUM(*(GLuint*)p); break;
#endif
            default:
                if(sType.endsWith('*')) {
                    if(sType.startsWith('Q') || sType.startsWith("const Q")) {
                        l_ret = qt_object_from_name(sType, *(void**)p); }
                    else if("const char*" == sType) {
                        l_ret = make_base_string_copy(*(char**)p); }
                    else {
                        l_ret = ecl_make_unsigned_integer((cl_index)*(void**)p); }}
                else {
                    int i_enum = sType.indexOf("::");
                    if(i_enum != -1) {
                        int *i = (int*)p;
                        const QMetaObject *mo = 0;
                        if(sType.startsWith("Qt")) {
                            mo = staticQtMetaObject; }
                        else if(q) {
                            mo = q->metaObject(); }
                        int n = -1;
                        if(mo) {
                            n = mo->indexOfEnumerator(sType.mid(i_enum + 2));
                            if(n != -1) {
                                QMetaEnum me = mo->enumerator(n);
                                QByteArray ba = (me.isFlag() ? me.valueToKeys(*i) : QByteArray(me.valueToKey(*i)));
                                l_ret = make_base_string_copy(ba.constData()); }}
                        if(-1 == n) {
                            l_ret = MAKE_FIXNUM(*i); }}}}}
    return l_ret; }

static void clearMetaArg(const MetaArg &arg, bool is_ret = false) {
    void *p = arg.second;
    QByteArray sType(arg.first);
    const int n = QMetaType::type(sType);
    switch(n) {
        case QMetaType::Double:
        case QMetaType::Float:
        case QMetaType::Int:
        case QMetaType::LongLong:
        case QMetaType::UInt:
        case QMetaType::ULongLong:
        case QMetaType::QByteArray:
        case QMetaType::QChar:
        case QMetaType::QColor:
        case QMetaType::QCursor:
        case QMetaType::QDate:
        case QMetaType::QDateTime:
        case QMetaType::QFont:
        case QMetaType::QKeySequence:
        case QMetaType::QLine:
        case QMetaType::QLineF:
        case QMetaType::QPoint:
        case QMetaType::QPointF:
        case QMetaType::QPolygon:
        case QMetaType::QRect:
        case QMetaType::QRectF:
        case QMetaType::QSize:
        case QMetaType::QSizeF:
        case QMetaType::QString:
        case QMetaType::QStringList:
        case QMetaType::QTime:
        case QMetaType::QUrl:
        case T_QPolygonF:
#ifdef MODULE_OPENGL
        case T_GLfloat:
        case T_GLint:
        case T_GLuint:
#endif
            QMetaType::destroy(n, p);
            break;
        // implicit pointer types
        case QMetaType::QBrush:
        case QMetaType::QIcon:
        case QMetaType::QImage:
        case QMetaType::QPalette:
        case QMetaType::QPen:
        case QMetaType::QPixmap:
        case QMetaType::QTextFormat:
        case QMetaType::QTextLength:
        case T_QModelIndex:
        case T_QPainterPath:
        case T_QTableWidgetSelectionRange:
            if(is_ret) {
                QMetaType::destroy(n, p); }
            break;
        default:
            if(n > QMetaType::User) {
                QMetaType::destroy(n, p); }
            else {
                if(sType.endsWith('*')) {
                    if("const char*" == sType) {
                        char **s = (char**)p;
                        if(is_ret) {
                            delete s; }
                        else {
                            if((_n_cstr_ >= 0) && (_n_cstr_ <= 9)) {
                                delete[] *s;
                                --_n_cstr_; }}}
                    else {
                        delete (void**)p; }}
                else {
                    int i_enum = sType.indexOf("::");
                    if(i_enum != -1) {
                        delete (int*)p; }}}}}

static void clearMetaArgList(const MetaArgList &args) {
    MetaArgIterator it(args);
    it.toBack();
    while(it.hasPrevious()) {
        clearMetaArg(it.previous()); }}

static MetaArg retArg(const QByteArray &name) {
    void *p = 0;
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

static QList<QByteArray> metaInfo(const QByteArray &type, const QByteArray &qclass, const QByteArray &search, bool non) {
    QList<QByteArray> info;
    if("methods" == type) {
        const QMetaObject *mo = methodMetaObjectFromName(qclass, !non);
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
                        info << name.toAscii(); }}}}}
    else if("override" == type) {
        Q_FOREACH(QByteArray name, Objects::override(qclass)) {
            if(QString(name).contains(search, Qt::CaseInsensitive)) {
                info << name; }}}
    else if(!non) {
        const QMetaObject *mo = Objects::staticMetaObject(qclass);
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

static cl_object collect_info(const QByteArray &type, const QByteArray &qclass, const QByteArray &qsearch, bool non, bool *found) {
    cl_object l_info = Cnil;
    QList<QByteArray> info = metaInfo(type, qclass, qsearch, non);
    if(info.size()) {
        *found = true;
        Q_FOREACH(QByteArray i, info) {
            l_info = CONS(make_base_string_copy((char*)i.constData()), l_info); }}
    return cl_nreverse(l_info); }

cl_object qapropos2(cl_object l_search, cl_object l_class, cl_object l_type) {
    /// args: (&optional search class)
    /// Finds all occurrencies of the given search term in the given object's meta information.<br>Constructors are listed under <b>Methods</b>.
    ///     (qapropos "html" "QTextEdit")
    ///     (qapropos nil "QWidget")
    ///     (qapropos)
    ecl_process_env()->nvalues = 1;
    QByteArray search;
    if(ECL_STRINGP(l_search)) {
        search = toQByteArray(l_search); }
    bool all = (Cnil == l_type);
    bool q = all ? false : (Ct == cl_eql(q_keyword(), l_type));
    QList<QByteArray> classes;
    if(ECL_STRINGP(l_class)) {
        classes << toQByteArray(l_class); }
    else {
        if(all) {
            classes << Objects::qNames;
            classes << Objects::nNames;
            qSort(classes.begin(), classes.end()); }
        else {
            classes = q ? Objects::qNames : Objects::nNames; }}
    cl_object l_docs = Cnil;
    Q_FOREACH(QByteArray cl, classes) {
        bool found = false;
        bool non = Objects::n_names.contains(cl);
        if(non || Objects::q_names.contains(cl)) {
            cl_object l_doc_pro = Cnil;
            cl_object l_doc_slo = Cnil;
            cl_object l_doc_sig = Cnil;
            cl_object l_doc_han = Cnil;
            if(!non) {
                l_doc_pro = collect_info("properties", cl, search, non, &found); }
            cl_object l_doc_met = collect_info("methods", cl, search, non, &found);
            if(!non) {
                l_doc_slo = collect_info("slots", cl, search, non, &found);
                l_doc_sig = collect_info("signals", cl, search, non, &found); }
            l_doc_han = collect_info("override", cl, search, non, &found);
            if(found) {
                cl_object l_doc = Cnil;
                if(l_doc_pro != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string("Properties:"), l_doc_pro), l_doc); }
                if(l_doc_met != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string("Methods:"), l_doc_met), l_doc); }
                if(l_doc_slo != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string("Slots:"), l_doc_slo), l_doc); }
                if(l_doc_sig != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string("Signals:"), l_doc_sig), l_doc); }
                if(l_doc_han != Cnil) {
                    l_doc = CONS(CONS(make_constant_base_string("Override:"), l_doc_han), l_doc); }
                l_doc = cl_nreverse(l_doc);
                if(l_doc != Cnil) {
                    l_docs = CONS(CONS(make_base_string_copy((char*)cl.data()), l_doc), l_docs); }}}}
    cl_object l_ret = cl_nreverse(l_docs);
    return l_ret; }



// *** main functions ***

cl_object qnew_instance2(cl_object l_name, cl_object l_args) {
    /// args: (name &rest arguments)
    /// alias: qnew
    /// Creates a new Qt object, optionally passing the given arguments to the constructor. Additionally you can pass any number of property/value pairs.
    ///     (qnew "QWidget")
    ///     (qnew "QPixmap(int,int)" 50 50)
    ///     (qnew "QLabel" "text" "I love me.")
    ecl_process_env()->nvalues = 1;
    static QHash<QByteArray, int> i_constructor;
    if(ECL_STRINGP(l_name)) {
        QByteArray name(QMetaObject::normalizedSignature(toQByteArray(l_name)));
        QByteArray nameOnly(name);
        int p = name.indexOf('(');
        if(p != -1) {
            nameOnly = name.left(p); }
        int id = Objects::q_names.value(nameOnly, 0);
        if(!id) {
            id = -Objects::n_names.value(nameOnly, 0); }
        if(id) {
            QObject *caller = (id > 0) ? Objects::Q[id - 1] : Objects::N[-id - 1];
            const QMetaObject *mo = caller->metaObject();
            int n = i_constructor.value(name, -1);
            if(n == -1) {
                n = mo->indexOfMethod(QByteArray("C(uint") + ((p == -1) ? ")" : ("," + name.mid(p + 1))));
                if(n != -1) {
                    i_constructor[name] = n; }}
            if(n != -1) {
                // qt_metacall to given constructor "C(uint...)"
                QMetaMethod mm(mo->method(n));
                TypeList types(mm.parameterTypes());
                void *args[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                void *pointer;
                args[0] = &pointer; // return value
                uint unique = Objects::unique();
                args[1] = &unique;
                MetaArgList mArgs;
                cl_object l_do_args = l_args;
                if(p != -1) {
                    for(int i = 0; (i < (types.length() - 1)) && (i < 9) && (l_do_args != Cnil); ++i) {
                        MetaArg m_arg(toMetaArg(types.at(i + 1), cl_car(l_do_args)));
                        args[i + 2] = m_arg.second;
                        mArgs << m_arg;
                        l_do_args = cl_cdr(l_do_args); }}
                caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                clearMetaArgList(mArgs);
                if(pointer) {
                    cl_object l_ret = qt_object(pointer, unique, id);
                    if(id > 0) { // QObject derived
                        while(l_do_args != Cnil) {
                            qset_property(l_ret, cl_first(l_do_args), cl_second(l_do_args));
                            l_do_args = cl_cddr(l_do_args); }}
                    return l_ret; }}}}
    error("QNEW-INSTANCE", LIST2(l_name, l_args));
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
            QObject *caller = Objects::N[-o.id - 1];
            const QMetaObject *mo = caller->metaObject();
            int n = mo->indexOfMethod(QString("CC(uint,L" + o.className().mid(1) + "*)").toAscii());
            if(n != -1) {
                QMetaMethod mm(mo->method(n));
                void *args[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                void *pointer;
                args[0] = &pointer; // return value
                uint unique = Objects::unique();
                args[1] = &unique;
                args[2] = &o.pointer;
                caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                if(pointer) {
                    cl_object l_ret = qt_object(pointer, unique, o.id);
                    return l_ret; }}}}
    error("QCOPY", LIST1(l_obj));
    return Cnil; }

cl_object qdelete(cl_object l_obj) {
    /// args: (object)
    /// alias: qdel
    /// Deletes any Qt object, and sets the <code>pointer</code> value to <code>0</code>.
    ///     (qdel widget)
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    bool ok = false;
    if(o.isQObject()) {
        if(o.pointer) {
            delete (QObject*)o.pointer;
            ok = true; }}
    else if(o.pointer) {
        Objects::deleteNObject(-o.id, o.pointer);
        ok = true; }
    if(ok) {
        STATIC_SYMBOL_PKG(s_qset_null, "QSET-NULL", "EQL")
        cl_funcall(2, s_qset_null, l_obj);
        return Ct; }
    error("QDELETE", LIST1(l_obj));
    return Cnil; }

cl_object qproperty(cl_object l_obj, cl_object l_name) {
    /// args: (object name)
    /// alias: qget
    /// Gets a Qt property. Enumerator values are returned as string names.
    ///     (qget label "text")
    QtObject o = toQtObject(l_obj);
    if(ECL_STRINGP(l_name)) {
        if(o.pointer) {
            const QMetaObject *mo = staticMetaObject(o);
            if(mo) {
                int n = mo->indexOfProperty(toQByteArray(l_name));
                if(n != -1) {
                    QMetaProperty mp(mo->property(n));
                    QVariant var(mp.read((QObject*)o.pointer));
                    if(mp.isEnumType()) {
                        QMetaEnum me(mp.enumerator());
                        var = me.isFlag()
                              ? QString(me.valueToKeys(var.toInt()))
                              : QString(me.valueToKey(var.toInt())); }
                    const cl_env_ptr l_env = ecl_process_env();
                    l_env->nvalues = 2;
                    l_env->values[0] = to_lisp_object(var);
                    l_env->values[1] = Ct;
                    return l_env->values[0]; }}}}
    ecl_process_env()->nvalues = 1;
    error("QPROPERTY", LIST2(l_obj, l_name));
    return Cnil; }

cl_object qset_property(cl_object l_obj, cl_object l_name, cl_object l_val) {
    /// args: (object name value)
    /// alias: qset
    /// Sets a Qt property. Enumerator values have to be passed as string names.
    ///     (qset label "alignment" "AlignCenter")
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    if(ECL_STRINGP(l_name)) {
        if(o.pointer) {
            const QMetaObject *mo = staticMetaObject(o);
            if(mo) {
                int n = mo->indexOfProperty(toQByteArray(l_name));
                if(n != -1) {
                    QMetaProperty mp(mo->property(n));
                    QVariant var;
                    if(mp.isEnumType()) {
                        if(ECL_STRINGP(l_val)) {
                            QMetaEnum me(mp.enumerator());
                            var = (me.isFlag()
                                   ? me.keysToValue(toQByteArray(l_val))
                                   : me.keyToValue(toQByteArray(l_val))); }}
                    else {
                        var = toQVariant(l_val, mp.typeName()); }
                    if(mp.write((QObject*)o.pointer, var)) {
                        return l_val; }}}}}
    error("QSET-PROPERTY", LIST3(l_obj, l_name, l_val));
    return Cnil; }

cl_object qinvoke_method2(cl_object l_obj, cl_object l_class, cl_object l_name, cl_object l_args) {
    /// args: (object name &rest arguments)
    /// alias: qfun
    /// Calls a Qt slot or method. Static methods can be called by passing the string name of an object.
    ///     (qfun item "setText(int,QString)" 0 "Some objects are EQL.")
    ///     (qfun "QDateTime" "currentDateTime()") ; static method
    static QHash<QByteArray, int> i_slot;
    static QHash<QByteArray, int> i_method;
    QtObject o = toQtObject(l_obj);
    if(ECL_STRINGP(l_name)) {
        QByteArray qclass;
        if(ECL_STRINGP(l_class)) {
            qclass = toQByteArray(l_class); }
        QByteArray name(QMetaObject::normalizedSignature(toQByteArray(l_name)));
        QByteArray cacheName((qclass.isEmpty() ? o.className() : qclass) + '_' + name);
        bool method = false;
        const QMetaObject *mo = 0;
        int n = i_slot.value(cacheName, -1);
        if(n != -1) {
            mo = staticMetaObject(o); }
        else {
            n = i_method.value(cacheName, -1);
            if(n != -1) {
                method = true;
                mo = methodMetaObject(o); }}
        if(n == -1) {
            mo = staticMetaObject(o);
            if(qclass.isEmpty()) {
                n = mo->indexOfSlot(name); }
            if(n == -1) {
                method = true;
                int p = name.indexOf('(');
                if(o.isStatic()) {
                    mo = methodMetaObject(o);
                    n = mo->indexOfMethod(QString("S" + name.left(p + 1) + name.mid(p + 1)).toAscii()); }
                else {
                    QString sep;
                    if(p != (name.length() - 2)) {
                        sep = ","; }
                    QString _name("M" + name.left(p + 1) + "%1*" + sep + name.mid(p + 1));
                    if(qclass.isEmpty()) {
                        const QMetaObject *_mo = mo;
                        mo = methodMetaObject(o);
                        if(o.isQObject()) {
                            do {
                                n = mo->indexOfMethod(_name.arg(_mo->className()).toAscii());
                                if(n != -1) {
                                    break; }
                                _mo = _mo->superClass();
                                mo = mo->superClass(); }
                            while(mo && _mo); }
                        else {
                            const char *_class = o.className().constData();
                            do {
                                n = mo->indexOfMethod(_name.arg(_class).toAscii());
                                if(n != -1) {
                                    break; }
                                _class = Objects::nObjectSuperClass(_class);
                                mo = mo->superClass(); }
                            while(_class && mo); }}
                    else {
                        if(!o.isQObject()) {
                            mo = methodMetaObject(o); }
                        n = mo->indexOfMethod(_name.arg(qclass.constData()).toAscii()); }}}
            if(n != -1) {
                if(method) {
                    i_method[cacheName] = n; }
                else {
                    i_slot[cacheName] = n; }}}
        if(n != -1) {
            // qt_metacall
            QMetaMethod mm(mo->method(n));
            TypeList types(mm.parameterTypes());
            bool class_arg = method && !o.isStatic();
            cl_object l_do_args = l_args;
            if((types.length() - (class_arg ? 1 : 0)) == fixint(cl_length(l_args))) {
                void *args[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                MetaArg ret(retArg(mm.typeName()));
                args[0] = ret.second; // return value
                MetaArgList mArgs;
                int i = -1;
                QObject *q = o.isQObject() ? (QObject*)o.pointer : 0;
                if(class_arg) {
                    args[++i + 1] = &(o.pointer); }
                while((l_do_args != Cnil) && (i < 9)) {
                    ++i;
                    MetaArg m_arg(toMetaArg(types.at(i), cl_car(l_do_args), q));
                    args[i + 1] = m_arg.second;
                    mArgs << m_arg;
                    l_do_args = cl_cdr(l_do_args); }
                QObject *caller = 0;
                if(method) {
                    caller = o.isQObject() ? Objects::Q[o.id - 1] : Objects::N[-o.id - 1]; }
                else {
                    caller = q; }
                if(caller) {
                    caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                    clearMetaArgList(mArgs);
                    cl_object l_ret = to_lisp_arg(ret, q);
                    clearMetaArg(ret, true);
                    const cl_env_ptr l_env = ecl_process_env();
                    l_env->nvalues = 2;
                    l_env->values[0] = l_ret;
                    l_env->values[1] = Ct;
                    return l_env->values[0]; }
                else {
                    clearMetaArgList(mArgs); }}}}
    ecl_process_env()->nvalues = 1;
    error("QINVOKE-METHOD", LIST4(l_obj, l_class, l_name, l_args));
    return Cnil; }

static void *getLispFun(cl_object l_fun) {
    STATIC_SYMBOL(s_package, "*PACKAGE*");
    STATIC_SYMBOL_PKG(s_get_function, "%GET-FUNCTION", "EQL")
    cl_object l_ret = cl_funcall(3, s_get_function, l_fun, cl_find_package(cl_symbol_value(s_package)));
    return (Cnil == l_ret) ? 0 : (void*)l_ret; }

cl_object qconnect2(cl_object l_caller, cl_object l_signal, cl_object l_receiver, cl_object l_slot, cl_object l_dis) {
    /// args: (caller signal receiver slot)
    /// Connects either a Qt signal to a Qt slot, or a Qt signal to a Lisp function.
    ///     (qconnect edit "textChanged(QString)" label "setText(QString)")
    ///     (qconnect edit "textChanged(QString)" #'(lambda (txt) (print txt)))
    ecl_process_env()->nvalues = 1;
    QtObject o1 = toQtObject(l_caller);
    if(ECL_STRINGP(l_signal)) {
        if(o1.isQObject() && o1.pointer) {
            QByteArray signal(QMetaObject::normalizedSignature(toQByteArray(l_signal)));
            if(ECL_STRINGP(l_slot)) {
                QtObject o2 = toQtObject(l_receiver);
                if(o2.isQObject() && o2.pointer) {
                    QByteArray slot(QMetaObject::normalizedSignature(toQByteArray(l_slot)));
                    if(QMetaObject::checkConnectArgs(signal, slot)) {
                        if(Ct == l_dis) {
                            if(QObject::disconnect((QObject*)o1.pointer, SIG + signal, (QObject*)o2.pointer, SLO + slot)) {
                                return Ct; }}
                        else {
                            if(QObject::connect((QObject*)o1.pointer, SIG + signal, (QObject*)o2.pointer, SLO + slot)) {
                                return Ct; }}}}}
            else if(Cnil == l_slot) {
                void *fun = getLispFun(l_receiver);
                if(fun) {
                    if(Ct == l_dis) {
                        if(DynObject::disconnect((QObject*)o1.pointer, SIG + signal, Objects::dynObject, fun)) {
                            return Ct; }}
                    else {
                        if(DynObject::connect((QObject*)o1.pointer, SIG + signal, Objects::dynObject, fun)) {
                            return Ct; }}}}}}
    error("QCONNECT", LIST5(l_caller, l_signal, l_receiver, l_slot, l_dis));
    return Cnil; }

cl_object qsender() {
    /// args: ()
    /// Corresponding to <code>QObject::sender()</code>. To use inside a Lisp function connected to a Qt signal.
    ecl_process_env()->nvalues = 1;
    QObject *curr = DynObject::currentSender;
    if(curr) {
        cl_object l_ret = qt_object_from_name(curr->metaObject()->className(), curr);
        return l_ret; }
    error("QSENDER", Cnil);
    return Cnil; }

void callConnectFun(void *fun, const QList<QByteArray> &types, void **args) {
    cl_object l_fun = (cl_object)fun;
    int i = 0;
    QObject *q = (QObject*)DynObject::currentSender;
    MetaArgList mArgs;
    Q_FOREACH(QByteArray type, types) {
        mArgs << MetaArg(type, args[++i]); }
    switch(types.size()) {
        case 0: cl_funcall(1, l_fun);
            break;
        case 1: cl_funcall(2, l_fun, to_lisp_arg(mArgs.at(0), q));
            break;
        case 2: cl_funcall(3, l_fun,
                           to_lisp_arg(mArgs.at(0), q),
                           to_lisp_arg(mArgs.at(1), q));
            break;
        case 3: cl_funcall(4, l_fun,
                           to_lisp_arg(mArgs.at(0), q),
                           to_lisp_arg(mArgs.at(1), q),
                           to_lisp_arg(mArgs.at(2), q));
            break;
        default: {
            cl_object l_args = Cnil;
            Q_FOREACH(MetaArg arg, mArgs) {
                l_args = CONS(to_lisp_arg(arg, q), l_args); }
            cl_apply(2, l_fun, cl_nreverse(l_args)); }}}

cl_object qoverride(cl_object l_obj, cl_object l_name, cl_object l_fun) {
    /// args: (object name function)
    /// Sets a Lisp function to be called on a virtual Qt method. If the Lisp function returns <code>NIL</code>, the default Qt method will be called afterwards.<br><br>To remove a function, pass <code>NIL</code> instead of the function argument.
    ///     (qoverride edit "keyPressEvent(QKeyEvent*)" #'(lambda (ev) (print (qfun ev "key()")) nil))
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    void *fun = (Cnil == l_fun) ? 0 : getLispFun(l_fun);
    if(o.pointer) {
        Objects::setOverrideFun(o.unique, toQByteArray(l_name), fun);
        return Ct; }
    error("QOVERRIDE", LIST3(l_obj, l_name, l_fun));
    return Cnil; }

QVariant callOverrideFun(const QObject *caller, void *fun, int id, const void **args) {
    int n = id - 1;
    cl_object l_fun = (cl_object)fun;
    MetaArgList mArgs;
    int i = 0;
    char *type = 0;
    while((type = Objects::override_arg_types[n][i + 1])) {
        mArgs << MetaArg(type, (void*)args[i]);
        ++i; }
    QObject *q = (QObject*)caller;
    cl_object l_ret = Cnil;
    switch(i) {
        case 0: l_ret = cl_funcall(1, l_fun);
            break;
        case 1: l_ret = cl_funcall(2, l_fun, to_lisp_arg(mArgs.at(0), q));
            break;
        case 2: l_ret = cl_funcall(3, l_fun,
                                    to_lisp_arg(mArgs.at(0), q),
                                    to_lisp_arg(mArgs.at(1), q));
            break;
        case 3: l_ret = cl_funcall(4, l_fun,
                                    to_lisp_arg(mArgs.at(0), q),
                                    to_lisp_arg(mArgs.at(1), q),
                                    to_lisp_arg(mArgs.at(2), q));
            break;
        default: {
            cl_object l_args = Cnil;
            Q_FOREACH(MetaArg arg, mArgs) {
                l_args = CONS(to_lisp_arg(arg, q), l_args); }
            l_ret = cl_apply(2, l_fun, cl_nreverse(l_args)); }}
    QVariant ret(false);
    char *ret_type = Objects::override_arg_types[n][0];
    if(ret_type) {
        QByteArray type(ret_type);
        QtObject o = toQtObject(l_ret);
        if(type.startsWith('Q') && type.endsWith('*')) {
            ret = qVariantFromValue((void*)o.pointer); }
        else {
            const int type = QMetaType::type(ret_type);
            switch(type) {
                // implicit pointer types
                case QMetaType::QBrush:            ret = qVariantFromValue(*(QBrush*)o.pointer); break;
                case QMetaType::QIcon:             ret = qVariantFromValue(*(QIcon*)o.pointer); break;
                case QMetaType::QImage:            ret = qVariantFromValue(*(QImage*)o.pointer); break;
                case QMetaType::QPalette:          ret = qVariantFromValue(*(QPalette*)o.pointer); break;
                case QMetaType::QPen:              ret = qVariantFromValue(*(QPen*)o.pointer); break;
                case QMetaType::QPixmap:           ret = qVariantFromValue(*(QPixmap*)o.pointer); break;
                case QMetaType::QTextFormat:       ret = qVariantFromValue(*(QTextFormat*)o.pointer); break;
                case QMetaType::QTextLength:       ret = qVariantFromValue(*(QTextLength*)o.pointer); break;
                case T_QModelIndex:                ret = qVariantFromValue(*(QModelIndex*)o.pointer); break;
                case T_QPainterPath:               ret = qVariantFromValue(*(QPainterPath*)o.pointer); break;
                case T_QTableWidgetSelectionRange: ret = qVariantFromValue(*(QTableWidgetSelectionRange*)o.pointer); break;
                default:
                    ret = toQVariant(l_ret, ret_type); }}}
    else {
        ret = (Ct == l_ret); }
    return ret; }

cl_object qadd_event_filter(cl_object l_obj, cl_object l_ev, cl_object l_fun) {
    /// args: (object event function)
    /// Adds a Lisp function to be called on a given event type. The event type has to be passed as integer value. If the object argument is <code>NIL</code>, the event will be captured for any object. If the Lisp function returns <code>NIL</code>, the event will be processed by Qt afterwards.
    ///     (qadd-event-filter nil +mouse-button-press+ #'(lambda (obj ev) (print obj) nil))
    ecl_process_env()->nvalues = 1;
    void *fun = getLispFun(l_fun);
    if(fun) {
        QObject *obj = 0;
        if(l_obj != Cnil) {
            QtObject o = toQtObject(l_obj);
            if(o.isQObject()) {
                obj = (QObject*)o.pointer; }}
        Objects::dynObject->addEventFilter(obj, fixint(l_ev), fun);
        return l_ev; }
    error("QADD-EVENT-FILTER", LIST3(l_obj, l_ev, l_fun));
    return Cnil; }

bool callEventFun(void *fun, QObject *obj, QEvent *ev) {
    if(fun) {
        if(obj->objectName().endsWith("viewport")) {
            obj = obj->parent(); }
        return (cl_funcall(3, (cl_object)fun,
                           qt_object_from_name(obj->metaObject()->className(), (void*)obj),
                           qt_object_from_name("QEvent", (void*)ev))
                != Cnil); }
    return true; }

cl_object qclear_event_filters() {
    /// args: ()
    /// Clears all added event filters.
    ecl_process_env()->nvalues = 1;
    Objects::dynObject->clearEventFilters();
    return Ct; }



// *** convenience functions ***

cl_object tr(cl_object l_str) {
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_qstring(QObject::tr(toQByteArray(l_str).constData()));
    return l_ret; }

cl_object qt_object_name(cl_object l_obj) {
    /// args: (object)
    /// Returns the Qt class name.
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    cl_object l_ret = from_qbytearray(o.className());
    return l_ret; }

cl_object qobject_names2(cl_object l_type) {
    /// args: (&optional type)
    /// Returns all supported object names. Passing either <code>:q</code> or <code>:n</code> returns only the QObject inherited, or not QObject inherited names, respectively.
    ecl_process_env()->nvalues = 1;
    bool all = (Cnil == l_type);
    QList<QByteArray> names;
    if(all) {
        names << Objects::qNames;
        names << Objects::nNames;
        qSort(names.begin(), names.end()); }
    else {
        names = (Ct == cl_eql(q_keyword(), l_type)) ? Objects::qNames : Objects::nNames; }
    QStringList lst;
    Q_FOREACH(QByteArray name, names) {
        lst << QString(name); }
    cl_object l_ret = to_lisp_object(lst);
    return l_ret; }

cl_object qenum2(cl_object l_name, cl_object l_key) {
    /// args: (name key)
    /// Registered enumerators only (see <code>Q_ENUMS</code>).<br>Returns the integer value of the passed enumerator, passed as name and key. Needed only if an enumerator argument has to be passed as <code>int</code> value.
    ///    (qfun item "setTextAlignment(int,int) 0 (qenum "Qt::Alignment" "AlignCenter"))
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_name) && ECL_STRINGP(l_key)) {
        QByteArray name(toQByteArray(l_name));
        QByteArray key(toQByteArray(l_key));
        int p = name.indexOf("::");
        if(p != -1) {
            const QMetaObject *mo;
            if(name.startsWith("Qt")) {
                mo = staticQtMetaObject; }
            else {
                mo = Objects::staticMetaObject(name.mid(p + 2)); }
            if(mo) {
                int n = mo->indexOfEnumerator(name.mid(p + 2));
                if(n != -1) {
                    QMetaEnum me = mo->enumerator(n);
                    int val = (me.isFlag() ? me.keysToValue(key) : me.keyToValue(key));
                    cl_object l_ret = MAKE_FIXNUM(val);
                    return l_ret; }}}}
    error("QENUM", LIST2(l_name, l_key));
    return Cnil; }

cl_object qapp() {
    /// args: ()
    /// Convenience function returning <code>qApp</code>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = qt_object_from_name("QApplication", (void*)qApp);
    return l_ret; }

cl_object qprocess_events() {
    /// args: ()
    /// Convenience function to call <code>qApp->processEvents()</code>.
    ecl_process_env()->nvalues = 1;
    qApp->processEvents();
    return Ct; }

cl_object qstatic_meta_object(cl_object l_class) {
    /// args: (name)
    /// Returns the static QMetaObject of the given QObject name.
    ///     (qstatic-meta-object "QWidget")
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_class)) {
        const QMetaObject *m = Objects::staticMetaObject(toQByteArray(l_class));
        if(m) {
            cl_object l_ret = qt_object((void*)m, 0, -Objects::n_names.value("QMetaObject"));
            return l_ret; }}
    error("QSTATIC-META-OBJECT", LIST1(l_class));
    return Cnil; }

cl_object qload_ui(cl_object l_file) {
    /// args: (file)
    /// Calls a custom <code>QUiLoader::load()</code> function, loading a UI file created by Qt Designer. Returns the top level widget of the UI. Use <code>qfind-child</code> to retrieve the child widgets.
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_file)) {
        UiLoader ui;
        QFile f(toQString(l_file));
        if(f.open(QFile::ReadOnly)) {
            QWidget *w = ui.load(&f);
            f.close();
            if(w) {
                cl_object l_ret = qt_object_from_name(w->metaObject()->className(), w);
                return  l_ret; }}}
    error("QLOAD-UI", LIST1(l_file));
    return Cnil; }

cl_object qfind_child(cl_object l_obj, cl_object l_name) {
    /// args: (object name)
    /// Calls <code>qFindChild&lt;QObject*&gt;()</code>. Can be used to get the single widgets of a UI (see <code>qload-ui</code>), identified by <code>objectName</code>.
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_name)) {
        QtObject o = toQtObject(l_obj);
        if(o.isQObject()) {
            QString name(toQString(l_name));
            QObject *obj = qFindChild<QObject*>((QObject*)o.pointer, name);
            if(obj) {
                cl_object l_ret = qt_object_from_name(obj->metaObject()->className(),
                                                      obj,
                                                      Objects::ui_unique.value(name, 0));
                return l_ret; }}}
    error("QFIND-CHILD", LIST2(l_obj, l_name));
    return Cnil; }

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
    error("QID", LIST1(l_class));
    return Cnil; }

cl_object qnobject_super_class(cl_object l_class) {
    /// args: (name)
    /// Returns the super class of non QObjects (lacking QMetaObject).
    ///     (qnobject-super-class "QGraphicsLineItem")
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_class)) {
        const char *name = Objects::nObjectSuperClass(toQByteArray(l_class));
        if(name) {
            cl_object l_ret = make_constant_base_string(name);
            return l_ret; }
        return Cnil; }
    error("QNOBJECT-SUPER-CLASS", LIST1(l_class));
    return Cnil; }

cl_object qsingle_shot(cl_object l_msec, cl_object l_fun) {
    /// args: (milliseconds function)
    /// Convenience function: a single shot timer for Lisp functions (using <code>QTimer::singleShot</code>). You can use only 1 at a time, so if you need real timers, use <code>QTimer</code> directly.
    ///     (qsingle-shot 0 'on-qt-idle)
    ecl_process_env()->nvalues = 1;
    Objects::eql->fun = getLispFun(l_fun);
    QTimer::singleShot(toInt(l_msec), Objects::eql, QSLOT(singleShot()));
    return Ct; }

cl_object qquit() {
    /// args: ()
    /// Quits both Qt and ECL.
    qApp->quit();
    exit(0); }
