// copyright (c) 2010 power4projects software

#include "eql.h"
#include "ecl_fun.h"
#include "gen/_lobjects.h"
#include <QApplication>
#include <QTimer>
#include <QStringList>

extern "C" void ini_EQL(cl_object);

bool EQL::ini = false;

static void eval(const char* lisp_code) {
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        si_safe_eval(2, ecl_read_from_cstring(lisp_code), Cnil); }
    CL_CATCH_ALL_END; }

EQL::EQL() : QObject(), fun(0) {
    iniCLFunctions();
    registerMetaTypes();
    LObjects::ini(this);
    read_VV(OBJNULL, ini_EQL); } // see src/make-eql-lib.lisp

EQL::~EQL() {
    cl_shutdown(); }

QString EQL::home() {
    static QString path;
    if(path.isEmpty()) {
        path = QApplication::applicationDirPath();
#ifdef Q_OS_DARWIN
        path.truncate(path.lastIndexOf('/', path.indexOf(".app")));
#endif
        path.append('/'); }
    return path; }

void EQL::singleShot() {
    if(fun) {
        cl_funcall(1, (cl_object)fun);
        fun = 0; }}

void EQL::exec(const QStringList& args) {
    si_select_package(make_simple_base_string((char*)"EQL"));
    eval(QString("(SET-HOME \"%1\")").arg(home()).toAscii().constData());
    bool qgui = false;
    int count = args.count();
    if(count > 1) {
        if(args.at(1) == "-qgui") {
            qgui = true;
            eval("(QGUI)"); }}
    bool quit = false;
    const char* lisp_code = 0;
    QString load;
    if(count == 1) {
        quit = true;
        lisp_code = "(SI:TOP-LEVEL)"; }
    else if(args.contains("-qtpl")) {
        quit = true;
        lisp_code = "(SI::QTOP-LEVEL)"; } // see src/lisp/ini.lisp
    else if(count >= 2) {
        if(!(qgui && (count == 2))) {
            load = QString("(LOAD \"%1\")")
                   .arg(args.at(((count > 2) && qgui) ? 2 : 1));
            lisp_code = load.toAscii().constData(); }}
    if(lisp_code) {
        eval(lisp_code); }
    if(quit) {
        qquit(); }}

void EQL::exec(lisp_ini ini, const QByteArray& command, const QByteArray& package) {
    eval(QString("(EQL::SET-HOME \"%1\")").arg(home()).toAscii().constData());
    read_VV(OBJNULL, ini);
    si_select_package(make_simple_base_string((char*)package.constData()));
    eval(command.constData()); }
