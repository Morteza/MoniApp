#include <QtGui/QApplication>
#include <QtCore/QSettings>
#include "ui/MainWindow.h"

/*
QSettings loadSettings(const QApplication &app)
{
	return NULL;
}
*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//QSettings settings = loadSettings(a);

	MainWindow w;
	w.show();

	return a.exec();
}
