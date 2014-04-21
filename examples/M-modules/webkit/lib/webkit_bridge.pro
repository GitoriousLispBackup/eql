TEMPLATE    = lib
CONFIG      += plugin release
LIBS        += -L../../eql -leql
DESTDIR     = ./
TARGET      = webkit_bridge
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(../../eql/src/windows.pri)

HEADERS += webkit_bridge.h
SOURCES += webkit_bridge.cpp
