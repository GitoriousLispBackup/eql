TEMPLATE    = lib
CONFIG      += plugin release
INCLUDEPATH += ../../../src
LIBS        += -L../../.. -leql
DESTDIR     = ./
TARGET      = easing_curve
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(../../../src/windows.pri)

HEADERS += lib.h
SOURCES += lib.cpp
