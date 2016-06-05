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
    matrizaerolinea.cpp \
    resultadoruta.cpp \
    agregarciudad.cpp

HEADERS  += mainwindow.h \
    registrocerveza.h \
    principalcervezas.h \
    registrofamilia.h \
    registroestilo.h \
    buscarcerveza.h \
    matrizaerolinea.h \
    resultadoruta.h \
    agregarciudad.h \
    Arista.h \
    Grafo.h \
    LinkedList.h \
    Node.h \
    Vertice.h

FORMS    += mainwindow.ui \
    registrocerveza.ui \
    principalcervezas.ui \
    registrofamilia.ui \
    registroestilo.ui \
    buscarcerveza.ui \
    matrizaerolinea.ui \
    resultadoruta.ui \
    agregarciudad.ui

RESOURCES += \
    recursos.qrc
