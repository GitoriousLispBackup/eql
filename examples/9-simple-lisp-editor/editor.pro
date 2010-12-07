TEMPLATE     = app
CONFIG      += no_keywords uitools release
INCLUDEPATH += ../../src
LIBS        += -lecl -L. -leditor_lib -L../.. -leql
TARGET       = simple-lisp-editor
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32: CONFIG += console

include(../../src/windows.pri)

SOURCES += main.cpp

