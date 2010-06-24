TEMPLATE     = app
CONFIG      += no_keywords release
INCLUDEPATH += ../src
LIBS        += -lecl -L. -leql -lmy_lib
TARGET       = my_app
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32 {
    INCLUDEPATH += c:/ecl/msvc/package
    LIBS        += -Lc:/ecl/msvc/package
}

SOURCES += main.cpp
