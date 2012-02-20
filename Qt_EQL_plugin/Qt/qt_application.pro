TEMPLATE     = app
CONFIG      += release
LIBS        += -LQt
TARGET       = qt_application
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

HEADERS = qt_application.h
SOURCES = qt_application.cpp main.cpp
