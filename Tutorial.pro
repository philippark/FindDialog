TEMPLATE = app
TARGET = Tutorial

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    finddialog.cpp \
    main.cpp

HEADERS += \
    finddialog.h
