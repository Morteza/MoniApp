#-------------------------------------------------
#
# Project created by QtCreator 2011-05-21T01:28:02
#
#-------------------------------------------------

QT       += core gui

TARGET = MoniApp
TEMPLATE = app


SOURCES += main.cpp\
		MainWindow.cpp \
	SideBar.cpp \
    NewTransactionDialog.cpp

HEADERS  += MainWindow.h \
	SideBar.h \
    NewTransactionDialog.h

FORMS    += MainWindow.ui \
	SideBar.ui \
    NewTransactionDialog.ui

RESOURCES += \
    MoniAppIcons.qrc
