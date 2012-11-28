TEMPLATE     = app
CONFIG      += no_keywords console release
INCLUDEPATH += ../../../src
LIBS        += -lecl -L. -leql-local-server -L../../.. -leql
TARGET       = eql_local_server
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

include(../../../src/windows.pri)

SOURCES += main.cpp
