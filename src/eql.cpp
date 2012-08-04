// copyright (c) 2010-2012 Polos Ruetz

#include "eql.h"
#include "ecl_fun.h"
#include "gen/_lobjects.h"
#include <QApplication>
#include <QTimer>
#include <QStringList>

const char EQL::version[] = "12.8.1"; // 2012-08-01

extern "C" void ini_EQL(cl_object);

EQL::EQL() : QObject() {
    if(!cl_booted) {
        cl_boot(1, QCoreApplication::argv()); }
    iniCLFunctions();
    LObjects::ini(this);
    read_VV(OBJNULL, ini_EQL); } // see src/make-eql-lib.lisp

EQL::~EQL() {
    LObjects::cleanUp();
    cl_shutdown(); }

void EQL::ini(char** argv) {
    cl_booted = true;
    cl_boot(1, argv); }

void EQL::eval(const char* lisp_code) {
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        si_safe_eval(2, ecl_read_from_cstring((char*)lisp_code), Cnil); }
    CL_CATCH_ALL_END; }

QString EQL::home() {
    static QString path;
    if(path.isEmpty()) {
        path = QApplication::applicationDirPath();
#ifdef Q_OS_DARWIN
        path.truncate(path.lastIndexOf('/', path.indexOf(".app")));
#endif
        path.append('/'); }
    return path; }

void EQL::exec(const QStringList& args) {
    QStringList arguments(args);
    si_select_package(make_simple_base_string((char*)"EQL"));
    eval(QString("(set-home \"%1\")").arg(home()).toAscii().constData());
    bool quit = false;
    QStringList forms;
    if(arguments.contains("-slime") ||
      (arguments.indexOf(QRegExp("*start-swank*.lisp", Qt::CaseInsensitive, QRegExp::Wildcard)) != -1)) {
        arguments.removeAll("-slime");
        QApplication::setQuitOnLastWindowClosed(false);
        forms << "(setf eql:*slime-mode* t)"
              << "(eql::eval-top-level)"; }
    if(arguments.count() == 1) {
        quit = true;
        forms << "(si:top-level)"; }
    if(arguments.contains("-qgui")) {
        arguments.removeAll("-qgui");
        forms << "(qgui)"; }
    if(arguments.contains("-qtpl")) {
        arguments.removeAll("-qtpl");
        QApplication::setQuitOnLastWindowClosed(false);
        forms << "(when (directory (in-home \"src/lisp/ecl-readline.fas*\"))"
                 "  (load (in-home \"src/lisp/ecl-readline\")))"
              << "(eql::start-read-thread)"
              << "(eql::eval-top-level)"; }
    if(arguments.contains("-quic")) {
        arguments.removeAll("-quic");
        if(arguments.size() == 2) {
            quit = true;
            QString uiFile(QDir::fromNativeSeparators(arguments.at(1)));
            int sep = uiFile.lastIndexOf('/') + 1;
            QProcess::execute("uic -o ui.h " + uiFile);
            forms << QString("(eql:quic \"ui.h\" \"%1ui-%2.lisp\")")
                    .arg(uiFile.left(sep))
                    .arg(uiFile.mid(sep, uiFile.length() - sep - 3))
                  << QString("(delete-file \"ui.h\")"); }
        else {
            qDebug() << "Please pass a file.ui (Qt Designer)";
            exit(-1); }}
    else if(arguments.count() > 1) {
        QString fileName(QDir::fromNativeSeparators(arguments.at(1)));
        forms.prepend(QString("(load \"%1\")").arg(fileName)); }
    QString code;
    if(forms.length() == 1) {
        code = forms.first(); }
    else {
        code = "(progn " + forms.join(" ") + ")"; }
    eval(code.toAscii().constData());
    if(quit) {
        qquit(); }}

void EQL::exec(lisp_ini ini, const QByteArray& expression, const QByteArray& package) {
    // see my_app example
    eval(QString("(eql::set-home \"%1\")").arg(home()).toAscii().constData());
    read_VV(OBJNULL, ini);
    si_select_package(make_simple_base_string((char*)package.toUpper().constData()));
    eval(expression.constData()); }

void EQL::exec(QWidget* widget, const QString& lispFile, const QString& slimeHookFile) {
    // see Qt_EQL example
    QStringList forms;
    forms << QString("(set-home \"%1\")").arg(home())
          << QString("(defvar *qt-main* (qt-object %1 0 (qid \"%2\")))")
                     .arg((ulong)widget)
                     .arg(QString(LObjects::vanillaQtSuperClassName(widget->metaObject())))
          << QString("(export '*qt-main*)")
          << QString("(load \"%1\")").arg(lispFile)
          << QString("(in-package :cl-user)");
    if(!slimeHookFile.isEmpty()) {
        forms << QString("(setf eql:*slime-mode* t)")
              << QString("(setf eql::*slime-hook-file* \"%1\"").arg(slimeHookFile)
              << QString("(eql::eval-top-level)");
        QApplication::setQuitOnLastWindowClosed(false); }
    eval(QString("(progn " + forms.join(" ") + ")").toAscii().constData()); }

void EQL::evalTopLevel() {
    STATIC_SYMBOL_PKG(s_eval_top_level, (char*)"EVAL-TOP-LEVEL", (char*)"EQL")
    cl_funcall(1, s_eval_top_level); } // see "lisp/ini.lisp"

bool EQL::cl_booted = false;
bool EQL::is_arg_return_value = false;
QEventLoop* EQL::eventLoop = 0;
