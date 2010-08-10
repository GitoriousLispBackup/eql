# copyright (c) 2010 power4projects software

# uncomment to build a shared library (see my_app/my_app.pro)
#CONFIG += eql_dll

# optional modules (experimental!)
#CONFIG += help
#CONFIG += opengl
#CONFIG += svg

CONFIG     += no_keywords uitools release
DEFINES    += EQL_LIBRARY
LIBS       += -lecl -L. -lini
TARGET      = eql
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

eql_dll {
    TEMPLATE = lib
    CONFIG  += dll
    DESTDIR  = ../my_app/
}
else {
    TEMPLATE = app
    SOURCES += main.cpp
    DESTDIR  = ../

    win32 {
        CONFIG += console
    }
}

win32 {
    INCLUDEPATH += c:/ecl/msvc/package
    LIBS        += -Lc:/ecl/msvc/package
}

help {
    QT += help
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
