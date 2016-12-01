TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sofa.cpp \
    bed.cpp \
    sofabed.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    sofa.h \
    bed.h \
    sofabed.h

