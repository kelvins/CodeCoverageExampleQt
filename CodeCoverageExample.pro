#-------------------------------------------------
#
# Project created by QtCreator 2018-02-03T10:27:51
#
#-------------------------------------------------

QT       += core testlib

QT       -= gui

TARGET = CodeCoverageExample
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

# --coverage option is synonym for: -fprofile-arcs -ftest-coverage -lgcov
QMAKE_CXXFLAGS += --coverage
QMAKE_LFLAGS += --coverage

SOURCES += main.cpp \
    calculator.cpp

HEADERS += \
    calculator.h
