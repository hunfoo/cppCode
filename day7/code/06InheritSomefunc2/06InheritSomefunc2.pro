TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    student.cpp \
    graduate.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    student.h \
    graduate.h

