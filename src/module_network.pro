QT          += network
TEMPLATE    = lib
CONFIG      += dll no_keywords uitools release
LIBS        += -L.. -leql
TARGET      = eql_network
DESTDIR     = ../
OBJECTS_DIR = ./tmp/network/
MOC_DIR     = ./tmp/network/

include(windows.pri)

HEADERS += gen/network/_ini.h \
           gen/network/_ini2.h \
           gen/network/_q_classes.h \
           gen/network/_n_classes.h \
           gen/network/_q_methods.h \
           gen/network/_n_methods.h

SOURCES += gen/network/_ini.cpp
