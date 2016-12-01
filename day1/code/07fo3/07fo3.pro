TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    print.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    print.h

