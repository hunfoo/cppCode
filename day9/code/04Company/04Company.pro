TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    employee.cpp \
    technician.cpp \
    manager.cpp \
    salesman.cpp \
    salesmanager.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    employee.h \
    technician.h \
    manager.h \
    salesman.h \
    salesmanager.h

