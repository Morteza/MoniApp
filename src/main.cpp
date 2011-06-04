#include <QtGui/QApplication>
#include <QtCore/QSettings>
#include "MainWindow.h"


QSettings& loadSettings(QApplication *app)
{

}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QSettings settings = loadSettings(&a);

	MainWindow w;
	w.show();

	return a.exec();
}
