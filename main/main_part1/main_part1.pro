#-------------------------------------------------
#
# Project created by QtCreator 2023-06-17T17:32:45
#
#-------------------------------------------------

QT       += core gui sql

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
    customersingup.cpp \
    customerlogin.cpp \
    customermainpage.cpp \
    customersearchpage.cpp \
    customercartpage.cpp \
    customerfavoritpage.cpp \
    sellersignuppage.cpp \
    sellerloginpage.cpp \
    orderprocustomer.cpp \
    customerbillspage.cpp \
    myntracustomerpage.cpp \
    sellermainpage.cpp \
    emplyee.cpp \
    item.cpp \
    additem.cpp \
    removeitem.cpp \
    report.cpp \
    updateitems.cpp \
    searchitems.cpp \
    mainreportpage.cpp \
    product.cpp \
    cartpage.cpp

HEADERS  += \
    startpage.h \
    customerstartpage.h \
    sellerstartpage.h \
    customersingup.h \
    customerlogin.h \
    customermainpage.h \
    customersearchpage.h \
    customercartpage.h \
    customerfavoritpage.h \
    sellersignuppage.h \
    sellerloginpage.h \
    orderprocustomer.h \
    customerbillspage.h \
    myntracustomerpage.h \
    sellermainpage.h \
    emplyee.h \
    item.h \
    additem.h \
    removeitem.h \
    report.h \
    updateitems.h \
    searchitems.h \
    mainreportpage.h \
    product.h \
    cartpage.h

FORMS    += \
    startpage.ui \
    customerstartpage.ui \
    sellerstartpage.ui \
    customersingup.ui \
    customerlogin.ui \
    customermainpage.ui \
    customersearchpage.ui \
    customercartpage.ui \
    customerfavoritpage.ui \
    sellersignuppage.ui \
    sellerloginpage.ui \
    orderprocustomer.ui \
    customerbillspage.ui \
    myntracustomerpage.ui \
    sellermainpage.ui \
    emplyee.ui \
    item.ui \
    additem.ui \
    removeitem.ui \
    report.ui \
    updateitems.ui \
    searchitems.ui \
    mainreportpage.ui \
    product.ui \
    cartpage.ui

RESOURCES += \
    recourses.qrc
