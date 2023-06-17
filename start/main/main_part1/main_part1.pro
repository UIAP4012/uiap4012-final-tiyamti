#-------------------------------------------------
#
# Project created by QtCreator 2023-06-17T17:32:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = main_part1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp \
    startpage.cpp \
    customerstartpage.cpp \
    sellerstartpage.cpp \
    bcustomernew1.cpp \
    bcustomernew2.cpp \
    bcustomernew3.cpp \
    customersingup.cpp \
    customerlogin.cpp \
    forgetpage.cpp \
    customermainpage.cpp \
    customersearchpage.cpp \
    customercartpage.cpp \
    customerfavoritpage.cpp \
    customerprofiepage.cpp \
    bsellernew1.cpp \
    bsellernew2.cpp \
    bsellernew3.cpp \
    sellersignuppage.cpp \
    sellerloginpage.cpp

HEADERS  += \
    startpage.h \
    customerstartpage.h \
    sellerstartpage.h \
    bcustomernew1.h \
    bcustomernew2.h \
    bcustomernew3.h \
    customersingup.h \
    customerlogin.h \
    forgetpage.h \
    customermainpage.h \
    customersearchpage.h \
    customercartpage.h \
    customerfavoritpage.h \
    customerprofiepage.h \
    bsellernew1.h \
    bsellernew2.h \
    bsellernew3.h \
    sellersignuppage.h \
    sellerloginpage.h

FORMS    += \
    startpage.ui \
    customerstartpage.ui \
    sellerstartpage.ui \
    bcustomernew1.ui \
    bcustomernew2.ui \
    bcustomernew3.ui \
    customersingup.ui \
    customerlogin.ui \
    forgetpage.ui \
    customermainpage.ui \
    customersearchpage.ui \
    customercartpage.ui \
    customerfavoritpage.ui \
    customerprofiepage.ui \
    bsellernew1.ui \
    bsellernew2.ui \
    bsellernew3.ui \
    sellersignuppage.ui \
    sellerloginpage.ui

RESOURCES += \
    recourses.qrc
