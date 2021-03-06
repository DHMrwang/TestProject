#-------------------------------------------------
#
# Project created by QtCreator 2018-04-26T19:46:40
#
#-------------------------------------------------
QT       += core gui

//串口类
QT += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestProject
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    Forms/dialogabout.cpp \
    Forms/dialogcomconfig.cpp \
    Forms/contactus.cpp \
    User/combase.cpp

HEADERS  += mainwindow.h \
    Forms/dialogabout.h \
    Forms/dialogcomconfig.h \
    Forms/contactus.h \
    User/combase.h

FORMS    += mainwindow.ui \
    Forms/dialogabout.ui \
    Forms/dialogcomconfig.ui \
    Forms/contactus.ui

RESOURCES += \
    resource.qrc

RC_FILE += logo.rc
