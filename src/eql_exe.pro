TEMPLATE     = app
CONFIG       += no_keywords uitools release
INCLUDEPATH  += ../src
LIBS         = -lecl -L.. -leql
TARGET       = eql
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

include(windows.pri)

win32 {
    CONFIG += console
}

SOURCES += main.cpp

