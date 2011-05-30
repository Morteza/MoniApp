#ifndef NEWTRANSACTIONDIALOG_H
#define NEWTRANSACTIONDIALOG_H

#include <QDialog>

namespace Ui {
	class NewTransactionDialog;
}

class NewTransactionDialog : public QDialog
{
	Q_OBJECT

public:
	explicit NewTransactionDialog(QWidget *parent = 0);
	~NewTransactionDialog();

private slots:
	void on_toolButton_clicked();

private:
	Ui::NewTransactionDialog *ui;
};

#endif // NEWTRANSACTIONDIALOG_H
