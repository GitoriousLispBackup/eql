# (!) uncomment this for recent GCC (e.g. 4.5) because of gen/_lobjects.cpp
#QMAKE_CXXFLAGS += -fno-var-tracking-assignments

TEMPLATE    = lib
CONFIG      += dll no_keywords uitools release
DEFINES     += EQL_LIBRARY
LIBS        += -lecl -L. -lini
TARGET      = eql
DESTDIR     = ../
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(windows.pri)

HEADERS += gen/_lobjects.h \
           gen/_main_q_classes.h \
           gen/_main_n_classes.h \
           gen/_main_q_methods.h \
           gen/_main_n_methods.h \
           dyn_object.h \
           eql_global.h \
           ecl_fun.h \
           eql.h

SOURCES += gen/_lobjects.cpp \
           dyn_object.cpp \
           ecl_fun.cpp \
           eql.cpp
