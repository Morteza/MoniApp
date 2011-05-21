#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	// init add button
	addBtn = new QToolButton(ui->statusBar);
	addBtn->setText("+");
	addBtn->setIcon(QIcon(QPixmap(":/icons/add.png").scaled(22,22)));
	ui->toolBar->addWidget(addBtn);
	// init config button
	configBtn = new QToolButton(ui->statusBar);
	configBtn->setText("...");
	configBtn->setIcon(QIcon(QPixmap(":/icons/config.png").scaled(26,26)));
	ui->toolBar->addWidget(configBtn);

}

MainWindow::~MainWindow()
{
	delete ui;
}
