QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    busstopsearch.cpp \
    main.cpp \
    mainwindow.cpp \
    routeconstruction.cpp \
    routeinformation.cpp \
    routesearch.cpp \
    stopinformation.cpp \
    trafficrules.cpp

HEADERS += \
    busstopsearch.h \
    mainwindow.h \
    routeconstruction.h \
    routeinformation.h \
    routesearch.h \
    stopinformation.h \
    trafficrules.h

FORMS += \
    busstopsearch.ui \
    mainwindow.ui \
    routeconstruction.ui \
    routeinformation.ui \
    routesearch.ui \
    stopinformation.ui \
    trafficrules.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
