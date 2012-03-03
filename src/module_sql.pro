QT          += sql
TEMPLATE    = lib
CONFIG      += dll no_keywords uitools release
LIBS        += -L.. -leql
TARGET      = eql_sql
DESTDIR     = ../
OBJECTS_DIR = ./tmp/sql/
MOC_DIR     = ./tmp/sql/

include(windows.pri)

HEADERS += gen/sql/_ini.h \
           gen/sql/_ini2.h \
           gen/sql/_q_classes.h \
           gen/sql/_n_classes.h \
           gen/sql/_q_methods.h \
           gen/sql/_n_methods.h

SOURCES += gen/sql/_ini.cpp
