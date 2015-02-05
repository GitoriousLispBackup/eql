QT          += webkit
TEMPLATE    = lib
CONFIG      += plugin release
INCLUDEPATH += ../../../../../src
LIBS        += -L../../../../.. -leql
DESTDIR     = ./
TARGET      = webkit_bridge
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

macx:QT     += network phonon

include(../../../../../src/windows.pri)

HEADERS += _invokables.h \
           webkit_bridge.h
SOURCES += webkit_bridge.cpp

