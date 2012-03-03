QT          += my
TEMPLATE    = lib
CONFIG      += dll no_keywords uitools release
LIBS        += -L.. -leql
TARGET      = eql_my
DESTDIR     = ../
OBJECTS_DIR = ./tmp/my/
MOC_DIR     = ./tmp/my/

include(windows.pri)

HEADERS += gen/my/_ini.h \
           gen/my/_ini2.h \
           gen/my/_q_classes.h \
           gen/my/_n_classes.h \
           gen/my/_q_methods.h \
           gen/my/_n_methods.h

SOURCES += gen/my/_ini.cpp
