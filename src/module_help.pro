TEMPLATE    = lib
CONFIG      += help dll no_keywords uitools release
LIBS        += -L.. -leql
TARGET      = eql_help
DESTDIR     = ../
OBJECTS_DIR = ./tmp/help/
MOC_DIR     = ./tmp/help/

include(windows.pri)

HEADERS += gen/help/_ini.h \
           gen/help/_ini2.h \
           gen/help/_q_classes.h \
           gen/help/_n_classes.h \
           gen/help/_q_methods.h \
           gen/help/_n_methods.h

SOURCES += gen/help/_ini.cpp
