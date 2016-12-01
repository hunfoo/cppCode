TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    animal.cpp \
    dog.cpp \
    cat.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    animal.h \
    dog.h \
    cat.h

