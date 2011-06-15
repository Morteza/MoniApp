#-------------------------------------------------
#
# Project created by QtCreator 2011-05-21T01:28:02
#
#-------------------------------------------------

QT       += core gui

TARGET = MoniApp
TEMPLATE = app


SOURCES += main.cpp\
	ui/SideBarLabel.cpp \
	ui/SideBar.cpp \
	ui/MainWindow.cpp \
	model/TransactionModel.cpp \
	model/ReportModel.cpp \
	model/AccountModel.cpp \
	model/AccountManager.cpp \
    ui/StartPage.cpp

HEADERS  += MoniApp.h \
	ui/SideBarLabel.h \
	ui/SideBar.h \
	ui/PageInterface.h \
	ui/MainWindow.h \
	model/TransactionModel.h \
	model/ReportModel.h \
	model/AccountModel.h \
	model/AccountManager.h \
    ui/StartPage.h

FORMS    += \
	ui/SideBarLabel.ui \
	ui/MainWindow.ui \
    ui/StartPage.ui

RESOURCES += MoniApp.qrc \
    KD2.qrc
