TEMPLATE     = app
CONFIG      += no_keywords uitools release
INCLUDEPATH += ../src
LIBS        += -lecl -L.. -leql -LQt -ltrafficlight
TARGET       = Qt_EQL
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

include(../src/windows.pri)

win32 {
    CONFIG += console
}

SOURCES = main.cpp
