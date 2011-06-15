#include "MainWindow.h"
#include "ui_MainWindow.h"
//TODO: add pages inc files

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow),
	startPage()
{
	ui->setupUi(this);

		connect(ui->sidebar, SIGNAL(selectionChanged(PageInterface*)), this, SLOT(setContent(PageInterface*)));

	ui->sidebar->addPage(&startPage);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::setContent(PageInterface *page)
{
	if (ui->content->widget())
		delete ui->content->widget();
	ui->content->setWidget(page->content(ui->content));
	this->setMinimumWidth(ui->sidebar->minimumWidth() + ui->content->widget()->minimumWidth() + 50);
	this->setMinimumHeight(ui->sidebar->minimumHeight() + ui->content->widget()->minimumHeight() + 50);
}
