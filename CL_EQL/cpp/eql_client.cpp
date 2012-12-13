#include "eql_client.h"

QT_BEGIN_NAMESPACE

typedef const char* (*Eval)(const char*);

static Main*       _main_ = 0;
static EvalServer* _server_ = 0;
static Run*        _run_ = 0;
static Eval        _eval_ = 0;

/*
void _log(const QString& str) {
    QFile f("/tmp/log.txt");
    f.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream ts(&f);
    ts << QString("### %1\n").arg(str.left(80)); }
*/

void ini_q(void* eval_callback) {
    if(!_main_) {
        _eval_ = (Eval)eval_callback;
        static int argc = 1;
        static char* argv[] = {(char*)"eql-client"};
        new QApplication(argc, argv);
        _main_ = new Main;
        _server_ = new EvalServer; }}

const char* send_q(const char* str){
    if(_main_) {
        return _main_->send(str); }
    return 0; }
 
void EvalServer::readEvalWrite() {
    QString str(socket->readAll());
    if(size == -1) {
        QString sSize(str.section(' ', 0, 0));
        size = sSize.toInt();
        bytes_read = str.length() - sSize.length() - 1;
        list << str.section(' ', 1); }
    else if(bytes_read < size) {
        list << str;
        bytes_read += str.length(); }
    if(size == bytes_read) {
        expression = list.join("").trimmed().toAscii();
        QByteArray ba(_eval_(expression.constData()));
        ba.prepend(QString::number(ba.size()).toAscii() + ' ');
        socket->write(ba);
        clearBytes(); }}

void ev(bool no_button) {
    if(!_run_) {
        _run_ = new Run; }
    if(!no_button) {
        QRect rect = QApplication::desktop()->availableGeometry();
        _run_->move(rect.x() + ((rect.width() / 2) - (_run_->width() / 2)), rect.y() + 5);
        _run_->show(); }
    _run_->loop = new QEventLoop;
    _run_->loop->exec(); }

void ev_exit() {
    _run_->hide();
    _run_->exit(); }

QT_END_NAMESPACE
