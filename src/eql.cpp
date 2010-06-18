// copyright (c) 2010 power4projects software

#include "eql.h"
#include "ecl_fun.h"
#include "gen/_objects.h"
#include <QApplication>
#include <QTimer>
#include <QStringList>

extern "C" void ini_EQL(cl_object);

bool EQL::ini = false;

EQL::EQL(const QStringList &args) : QObject(), fun(0) {
    iniCLFunctions();
    registerMetaTypes();
    Objects::ini(this);
    exec(args); }

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

static void eval(const char *lisp_code) {
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        si_safe_eval(2, ecl_read_from_cstring(lisp_code), Cnil); }
    CL_CATCH_ALL_END; }

void EQL::disableConsole() {
    eval("(progn"
         "  (setf *terminal-io*"
         "        (make-two-way-stream"
         "          (make-string-input-stream \"\")"
         "          (make-string-output-stream)))"
         "  (setf *error-output* "
         "        (two-way-stream-output-stream *terminal-io*)))"); }

void EQL::exec(const QStringList &args) {
    bool quit = false;
    read_VV(OBJNULL, ini_EQL); // see "src/make-eql-lib.lisp"
    si_select_package(make_simple_base_string("EQL"));
    eval(QString("(SET-HOME \"%1\")").arg(home()).toAscii().constData());
    if(args.contains("-qgui")) {
        eval("(QGUI)"); }
    const char *lisp_code = 0;
    QString load;
    if(args.count() == 1) {
        quit = true;
        lisp_code = "(SI:TOP-LEVEL)"; }
    else if(args.contains("-qtpl")) {
        quit = true;
        lisp_code = "(SI::QTOP-LEVEL)"; } // see "src/lisp/ini.lisp"
    else if((args.count() == 2) && !args.at(1).startsWith("-")) {
        load = QString("(LOAD \"%1\")").arg(args.at(1));
        lisp_code = load.toAscii().constData(); }
    if(lisp_code) {
        eval(lisp_code); }
    if(quit) {
        qquit(); }}
