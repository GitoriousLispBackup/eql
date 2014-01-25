TEMPLATE     = app
CONFIG      += no_keywords release
INCLUDEPATH += ../../../../src
LIBS        += -lecl -L. -lstatic -L../../../.. -leql
TARGET       = palindrome
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

include(../../../../src/windows.pri)

SOURCES += main.cpp
