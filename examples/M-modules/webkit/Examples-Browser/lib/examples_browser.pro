TEMPLATE    = lib
CONFIG      += plugin release
INCLUDEPATH += ../../../../../src
LIBS        += -L../../../../.. -leql
DESTDIR     = ./
TARGET      = examples_browser
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(../../../../../src/windows.pri)

HEADERS += examples_browser.h
SOURCES += examples_browser.cpp
