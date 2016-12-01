TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    myList.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    myList.h

