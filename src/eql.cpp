// copyright (c) 2010-2011 Polos Ruetz

#include "eql.h"
#include "ecl_fun.h"
#include "gen/_lobjects.h"
#include <QApplication>
#include <QTimer>
#include <QStringList>

const char EQL::version[] = "11.8.2"; // 2011-08-31

void EQL::eval(const char* lisp_code) {
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        si_safe_eval(2, ecl_read_from_cstring((char*)lisp_code), Cnil); }
    CL_CATCH_ALL_END; }

extern "C" void ini_EQL(cl_object);

EQL::EQL() : QObject(), fun(0) {
    iniCLFunctions();
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
        CL_CATCH_ALL_BEGIN(ecl_process_env()) {
            cl_funcall(1, (cl_object)fun); }
        CL_CATCH_ALL_END;
        fun = 0; }}

void EQL::exec(const QStringList& args) {
    QStringList arguments(args);
    si_select_package(make_simple_base_string((char*)"EQL"));
    eval(QString("(set-home \"%1\")").arg(home()).toAscii().constData());
    bool tpl = false;
    QStringList forms;
    if(arguments.contains("-slime")) {
        arguments.removeAll("-slime");
        initialize_slime = true; }
    if(arguments.count() == 1) {
        tpl = true;
        forms << "(si:top-level)"; }
    if(arguments.contains("-qgui")) {
        arguments.removeAll("-qgui");
        forms << "(qgui)"; }
#ifndef Q_OS_WIN
    if(arguments.contains("-qtpl")) {
        arguments.removeAll("-qtpl");
        tpl = true;
        forms << "(si::qtop-level)"; }
#endif
    if(arguments.count() > 1) {
        forms.prepend(QString("(load \"%1\")").arg(arguments.at(1))); }
    QString code;
    if(forms.length() == 1) {
        code = forms.first(); }
    else {
        code = "(progn " + forms.join(" ") + ")"; }
    eval(code.toAscii().constData());
    if(tpl) {
        qquit(); }}

void EQL::exec(lisp_ini ini, const QByteArray& expression, const QByteArray& package) {
    // see my_app example
    eval(QString("(eql::set-home \"%1\")").arg(home()).toAscii().constData());
    read_VV(OBJNULL, ini);
    si_select_package(make_simple_base_string((char*)package.toUpper().constData()));
    eval(expression.constData()); }

void EQL::exec(QWidget* widget, const QString& file, bool slime_mode) {
    // see Qt_EQL example
    eval("(progn"
         "  (in-package :eql)"
         "  (defvar *slime-mode* nil)"
         "  (export '*slime-mode*))");
    QStringList forms =
            QStringList()
            << QString("(set-home \"%1\")").arg(home())
            << (QString("(defvar *qt-main* (qt-object %1 0 (qid \"%2\")))")
                .arg((ulong)widget)
                .arg(QString(LObjects::vanillaQtSuperClassName(widget->metaObject()))))
            << QString("(export '*qt-main*)")
            << QString("(load \"%1\")").arg(file)
            << QString("(in-package :cl-user)");
    if(slime_mode) {
        forms << "(setf eql:*slime-mode* t)" << "(si:top-level)"; }
    eval(QString("(progn " + forms.join(" ") + ")").toAscii().constData()); }

bool EQL::is_arg_return_value = false;
bool EQL::initialize_slime = false;
