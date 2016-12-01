TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    myString.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    myString.h

