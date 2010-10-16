TEMPLATE     = app
CONFIG      += no_keywords uitools release
INCLUDEPATH += ../src
LIBS        += -lecl -L. -lmy_lib -L.. -leql
TARGET       = my_app
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

include(../src/windows.pri)

SOURCES += main.cpp
