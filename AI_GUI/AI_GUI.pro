#-------------------------------------------------
#
# Project created by QtCreator 2013-03-19T23:21:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AI_GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../../AI_Project/AI_prog1/Map.cpp \
    ../../AI_Project/AI_prog1/City.cpp

HEADERS  += mainwindow.h \
    ../../AI_Project/AI_prog1/Map.h \
    ../../AI_Project/AI_prog1/City.h

FORMS    += mainwindow.ui
