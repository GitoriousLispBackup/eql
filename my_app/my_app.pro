TEMPLATE     = app
CONFIG      += no_keywords uitools release
INCLUDEPATH += ../src
LIBS        += -lecl -L. -lmy_lib -L.. -leql
TARGET       = my_app
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32 {
    INCLUDEPATH += c:/ecl/msvc/package
    LIBS        += -Lc:/ecl/msvc/package
}

SOURCES += main.cpp
