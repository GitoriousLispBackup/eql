// copyright (c) 2010-2012 Polos Ruetz

#include "eql.h"
#include "ecl_fun.h"
#include "gen/_lobjects.h"
#include <QApplication>
#include <QTimer>
#include <QStringList>

const char EQL::version[] = "12.11.1"; // 2012-11-15

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
    eval("(in-package :eql-user)");
    eval(QString("(eql::set-home \"%1\")").arg(home()).toAscii().constData());
    QStringList forms;
    if(arguments.contains("-slime") ||
      (arguments.indexOf(QRegExp("*start-swank*.lisp", Qt::CaseInsensitive, QRegExp::Wildcard)) != -1)) {
        arguments.removeAll("-slime");
        QApplication::setQuitOnLastWindowClosed(false);
        forms << "(setf eql:*slime-mode* t)"
              << "(eql::eval-top-level)"
              << "(loop"
                 "  (with-simple-restart (restart-qt-events \"Restart Qt event processing.\")"
                 "    (qexec)))"; }
    if(arguments.count() == 1) {
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
        if(arguments.size() >= 2) {
            QString uiFile(QDir::fromNativeSeparators(arguments.at(1)));
            int sep = uiFile.lastIndexOf('/') + 1;
            forms << QString("(ext:run-program \"uic\" (list \"-o\" \"ui.h\" \"%1\"))").arg(uiFile)  
                  << QString("(eql:quic \"ui.h\" \"%1ui-%2.lisp\" %3)")
                             .arg(uiFile.left(sep))
                             .arg(uiFile.mid(sep, uiFile.length() - sep - 3))
                             .arg((arguments.size() == 2) ? ":ui" : arguments.at(2))
                  << QString("(delete-file \"ui.h\")")
                  << QString("(eql:qq)"); }
        else {
            qDebug() << "\nPlease pass a file.ui (Qt Designer).\n";
            exit(-1); }}
    else if(arguments.count() > 1) {
        QString fileName(QDir::fromNativeSeparators(arguments.at(1)));
        forms.prepend(QString("(load \"%1\")").arg(fileName)); }
    QString code;
    if(forms.length() == 1) {
        code = forms.first(); }
    else {
        code = "(progn " + forms.join(" ") + ")"; }
    eval(code.toAscii().constData()); }

void EQL::exec(lisp_ini ini, const QByteArray& expression, const QByteArray& package) {
    // see my_app example
    eval(QString("(eql::set-home \"%1\")").arg(home()).toAscii().constData());
    read_VV(OBJNULL, ini);
    eval(QString("(in-package :%1)").arg(QString(package)).toAscii().constData());
    eval(expression.constData()); }

enum { NotFound = -1 };

void EQL::exec(QWidget* widget, const QString& lispFile, const QString& slimeHookFile) {
    // see Qt_EQL example
    QStringList forms;
    eval("(in-package :eql)");
    forms << QString("(set-home \"%1\")").arg(home())
          << QString("(defvar *qt-main* (qt-object %1 0 (qid \"%2\")))")
                     .arg((ulong)widget)
                     .arg(QString(LObjects::vanillaQtSuperClassName(widget->metaObject())))
          << QString("(export '*qt-main*)")
          << QString("(in-package :eql-user)")
          << QString("(load \"%1\")").arg(lispFile);
    if(!slimeHookFile.isEmpty()) {
        QString startSwankFile(QCoreApplication::arguments().last());
        if(NotFound == startSwankFile.indexOf(QRegExp("*start-swank*.lisp", Qt::CaseInsensitive, QRegExp::Wildcard))) {
            qDebug() << "\nPlease pass the pathname for \"eql-start-swank.lisp\".\n";
            exit(-1); }
        QApplication::setQuitOnLastWindowClosed(false);
        forms << QString("(load \"%1\")").arg(startSwankFile)
              << QString("(setf eql::*slime-hook-file* \"%1\")").arg(slimeHookFile)
              << QString("(setf eql:*slime-mode* t)")
              << QString("(eql::eval-top-level)")
              << "(loop"
                 "  (with-simple-restart (restart-qt-events \"Restart Qt event processing.\")"
                 "    (qexec)))"; }
    eval(QString("(progn " + forms.join(" ") + ")").toAscii().constData()); }

bool EQL::cl_booted = false;
bool EQL::return_value_p = false;
QEventLoop* EQL::eventLoop = 0;
