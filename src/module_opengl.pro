QT          += opengl
TEMPLATE    = lib
CONFIG      += dll no_keywords uitools release
LIBS        += -lecl -L.. -leql
TARGET      = eql_opengl
DESTDIR     = ../
OBJECTS_DIR = ./tmp/opengl/
MOC_DIR     = ./tmp/opengl/

include(windows.pri)

HEADERS += gen/opengl/_ini.h \
           gen/opengl/_ini2.h \
           gen/opengl/_q_classes.h \
           gen/opengl/_n_classes.h \
           gen/opengl/_q_methods.h \
           gen/opengl/_n_methods.h

SOURCES += gen/opengl/_ini.cpp
