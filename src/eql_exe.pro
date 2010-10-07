TEMPLATE     = app
CONFIG      += no_keywords uitools release
INCLUDEPATH += ../src
LIBS        += -lecl -L.. -leql
TARGET       = eql
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32 {
    CONFIG      += console
    INCLUDEPATH += c:/ecl/msvc/package
    LIBS        += -Lc:/ecl/msvc/package
}

SOURCES += main.cpp

