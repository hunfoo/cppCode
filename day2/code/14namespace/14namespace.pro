TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    dog.cpp \
    cat.cpp \
    automan.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    dog.h \
    cat.h \
    automan.h

