#include <QApplication>
#include <QTextCodec>
#include <ecl/ecl.h>
#include "eql.h"

extern "C" void ini_app(cl_object);

int catch_all_qexec() {
    int ret = 0;
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        ret = QApplication::exec(); }
    CL_CATCH_ALL_END;
    return ret; }

int main(int argc, char** argv) {

    EQL::ini(argv);

    QApplication qapp(argc, argv);

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(utf8);
    QTextCodec::setCodecForTr(utf8);

    EQL eql;
    eql.exec(ini_app);

    return catch_all_qexec(); }
