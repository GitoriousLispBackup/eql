#include "eql_client.h"

QT_BEGIN_NAMESPACE

static Main* main = 0;

static void ini() {
    if(!main) {
        int argc = 1;
        char* argv[] = {(char*)"eql-client"};
        new QCoreApplication(argc, argv);
        main = new Main; }}

const char* send(const char* str){
    if(!main) {
        ini(); }
    return main->send(str); }

QT_END_NAMESPACE
