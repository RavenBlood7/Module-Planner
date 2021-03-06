#-------------------------------------------------
#
# Project created by QtCreator 2016-12-04T21:17:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SemesterPlanner
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createmodule.cpp    \
    Assessment.cpp  \
    Opportunity.cpp \
    Module.cpp \
    Planner.cpp \
    Navigator.cpp \
    deleteassess.cpp \
    editassess.cpp

HEADERS  += mainwindow.h \
    createmodule.h \
    AbstractAssessment.h \
    Assessment.h \
    Opportunity.h \
    Module.h \
    Planner.h \
    Navigator.h \
    deleteassess.h \
    editassess.h

FORMS    += mainwindow.ui \
    createmodule.ui \
    deleteassess.ui \
    editassess.ui
