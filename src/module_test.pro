TEMPLATE    = lib
CONFIG      += dll no_keywords uitools release qtestlib
LIBS        += -L.. -leql
TARGET      = eql_test
DESTDIR     = ../
OBJECTS_DIR = ./tmp/test/
MOC_DIR     = ./tmp/test/

include(windows.pri)

HEADERS += gen/test/_ini.h \
           gen/test/_ini2.h \
           gen/test/_q_classes.h \
           gen/test/_n_classes.h \
           gen/test/_q_methods.h \
           gen/test/_n_methods.h

SOURCES += gen/test/_ini.cpp
