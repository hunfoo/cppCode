TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    student.cpp \
    graduate.cpp \
    doctor.cpp \
    birthday.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    student.h \
    graduate.h \
    doctor.h \
    birthday.h

