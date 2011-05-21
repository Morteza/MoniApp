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


	// --- Test to insert rows

	int row = ui->tableWidget->rowCount(); // current row count

	for (int j=row;j<row+10;j++){
		ui->tableWidget->setRowCount(j+1); // add one row
		for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
		{
			QTableWidgetItem* newItem = new QTableWidgetItem("blaa");
			ui->tableWidget->setItem(j, col, newItem);
		}
	}
	// --- End Test
}

MainWindow::~MainWindow()
{
	delete ui;
}
