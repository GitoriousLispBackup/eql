# copyright (c) 2010 power4projects software

# final version (win32: disable console)
#CONFIG += final

# optional modules (experimental!)
#CONFIG += opengl
#CONFIG += svg

TEMPLATE    = app
CONFIG     += no_keywords release uitools
LIBS       += -lecl -L. -leql
TARGET      = eql
DESTDIR     = ../
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

win32 {
    INCLUDEPATH += c:/ecl/msvc/package
    LIBS        += -Lc:/ecl/msvc/package
    final {
        DEFINES += FINAL_VERSION
    }
    else {
        CONFIG += console
    }
}

opengl {
    QT      += opengl
    DEFINES += MODULE_OPENGL
}

svg {
    QT      += svg
    DEFINES += MODULE_SVG
}

HEADERS += gen/_objects.h \
           gen/_q_classes.h \
           gen/_n_classes.h \
           gen/_q_methods.h \
           gen/_n_methods.h \
           dyn_object.h \
           ecl_fun.h \
           eql.h

SOURCES += gen/_objects.cpp \
           dyn_object.cpp \
           ecl_fun.cpp \
           eql.cpp \
           main.cpp
