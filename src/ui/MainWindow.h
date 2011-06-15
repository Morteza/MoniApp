#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "PageInterface.h"
#include "StartPage.h"

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void setContent(PageInterface *page);

private:
	Ui::MainWindow *ui;
	StartPage startPage;
};

#endif // MAINWINDOW_H
