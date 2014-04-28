TEMPLATE    = lib
CONFIG      += plugin release
INCLUDEPATH += ../../../../src
LIBS        += -L../../../.. -leql
DESTDIR     = ./
TARGET      = plugin_widget
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(../../../../src/windows.pri)

HEADERS += plugin_widget.h
SOURCES += plugin_widget.cpp
