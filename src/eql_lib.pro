# optional modules (see also: helper/missing-types.txt)
#CONFIG += help
#CONFIG += opengl
#CONFIG += svg

TEMPLATE    = lib
CONFIG      += dll no_keywords uitools release
DEFINES     += EQL_LIBRARY
LIBS        += -lecl -L. -lini
TARGET      = eql
DESTDIR     = ../
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

win32 {
    INCLUDEPATH += c:/ecl/msvc/package
    LIBS        += -Lc:/ecl/msvc/package
}

opengl {
    QT      += opengl
    DEFINES += EQL_OPENGL
}

svg {
    QT += svg
}

HEADERS += gen/_lobjects.h \
           gen/_q_classes.h \
           gen/_n_classes.h \
           gen/_q_methods.h \
           gen/_n_methods.h \
           dyn_object.h \
           eql_global.h \
           ecl_fun.h \
           eql.h

SOURCES += gen/_lobjects.cpp \
           dyn_object.cpp \
           ecl_fun.cpp \
           eql.cpp
