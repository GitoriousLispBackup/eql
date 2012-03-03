TEMPLATE     = lib
CONFIG      += dll no_keywords uitools release
INCLUDEPATH += ../src
LIBS        += -L.. -leql
TARGET       = qt_plugin
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

include(../src/windows.pri)

HEADERS = qt_plugin.h
SOURCES = qt_plugin.cpp
