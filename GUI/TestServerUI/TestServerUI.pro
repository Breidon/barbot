#-------------------------------------------------
#
# Project created by QtCreator 2015-11-17T11:16:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestServerUI
TEMPLATE = app


SOURCES += main.cpp\
        testservergui.cpp \
    socket.cpp

HEADERS  += testservergui.h \
    socket.h

FORMS    += testservergui.ui
