#include "eql_client.h"

QT_BEGIN_NAMESPACE

typedef const char* (*Eval)(const char*);

static Main*       _main_ = 0;
static EvalServer* _server_ = 0;
static Run*        _run_ = 0;
static Eval        _eval_ = 0;

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

void ev() {
    if(!_run_) {
        _run_ = new Run; }
    QRect rect = QApplication::desktop()->availableGeometry();
    _run_->move(rect.x() + ((rect.width() / 2) - (_run_->width() / 2)), rect.y() + 5);
    _run_->show();
    _run_->loop.exec(); }

QT_END_NAMESPACE
