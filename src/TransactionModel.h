#ifndef TRANSACTIONMODEL_H
#define TRANSACTIONMODEL_H

#include <QDate>

class TransactionModel
{
private:
	bool checked;
	QDate date;
	QString note;
	float amount;
	int id;

public:
	TransactionModel(int id, bool checked, QDate &date, QString &note, float amount);
	~TransactionModel();
	bool isChecked();
	void setChecked(bool checked);
	QDate& getDate();
	void setDate(QDate &date);
	QString& getNote();
	void setNote(QString &note);
	float getAmount();
	void setAmount(float amount);
	int getId();
};

#endif // TRANSACTIONMODEL_H
