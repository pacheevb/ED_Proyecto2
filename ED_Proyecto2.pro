#-------------------------------------------------
#
# Project created by QtCreator 2016-05-30T10:07:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ED_Proyecto2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    registrocerveza.cpp \
    principalcervezas.cpp \
    registrofamilia.cpp \
    registroestilo.cpp \
    buscarcerveza.cpp \
    ciudadesaerolinea.cpp \
    matrizaerolinea.cpp \
    resultadoruta.cpp

HEADERS  += mainwindow.h \
    registrocerveza.h \
    principalcervezas.h \
    registrofamilia.h \
    registroestilo.h \
    buscarcerveza.h \
    ciudadesaerolinea.h \
    matrizaerolinea.h \
    resultadoruta.h

FORMS    += mainwindow.ui \
    registrocerveza.ui \
    principalcervezas.ui \
    registrofamilia.ui \
    registroestilo.ui \
    buscarcerveza.ui \
    ciudadesaerolinea.ui \
    matrizaerolinea.ui \
    resultadoruta.ui

RESOURCES += \
    recursos.qrc
