#ifndef TRANSACTIONMODEL_H
#define TRANSACTIONMODEL_H

#include <QDate>
#include "AccountModel.h"

class TransactionModel
{
private:
	bool checked;
	QDate *date;
	QString *note;
	int amount;
	int id;
	AccountModel *account;

public:
	TransactionModel(AccountModel * account, int id, bool checked, QDate date, QString note, int amount);
	~TransactionModel();
	bool isChecked();
	void setChecked(bool checked);
	QDate getDate();
	void setDate(QDate date);
	QString getNote();
	void setNote(QString note);
	int getAmount();
	void setAmount(int amount);
	int getId();
	void setId(int id);
	AccountModel getAccount();
	void setAccount(AccountModel * account);
};

#endif // TRANSACTIONMODEL_H
