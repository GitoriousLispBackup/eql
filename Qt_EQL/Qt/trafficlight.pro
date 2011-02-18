TEMPLATE     = lib
CONFIG      += staticlib release
INCLUDEPATH += ../../src
TARGET       = trafficlight
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

HEADERS = trafficlight.h

SOURCES = trafficlight.cpp \
          main.cpp
