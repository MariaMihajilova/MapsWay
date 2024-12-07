QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    busstopsearch.cpp \
    exception.cpp \
    file.cpp \
    help.cpp \
    main.cpp \
    mainwindow.cpp \
    mapwidget.cpp \
    markerwidget.cpp \
    pathbuilder.cpp \
    route.cpp \
    routeconstruction.cpp \
    routeinformation.cpp \
    routesearch.cpp \
    routetaxi.cpp \
    stopinformation.cpp \
    stopmarker.cpp \
    trafficrules.cpp \
    transportmarker.cpp

HEADERS += \
    about.h \
    busstopsearch.h \
    exception.h \
    file.h \
    help.h \
    mainwindow.h \
    mapwidget.h \
    markerwidget.h \
    pathbuilder.h \
    route.h \
    routeconstruction.h \
    routeinformation.h \
    routesearch.h \
    routetaxi.h \
    stopinformation.h \
    stopmarker.h \
    trafficrules.h \
    transportmarker.h

FORMS += \
    about.ui \
    busstopsearch.ui \
    help.ui \
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

DISTFILES += \
    logs/Error_Logs.txt
