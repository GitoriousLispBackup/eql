QT          += network
TEMPLATE    = lib
CONFIG      += plugin no_keywords release
DESTDIR     = ../
TARGET      = eql_client
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

HEADERS += eql_client.h
SOURCES += eql_client.cpp
