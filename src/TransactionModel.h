#ifndef TRANSACTIONMODEL_H
#define TRANSACTIONMODEL_H

#include "MoniApp.h"

#include <QDataStream>
#include <QDate>

class TransactionModel
{

private:
	int id;
	bool checked;
	QDate date;
	QString note;
	float amount;

public:
	TransactionModel();
	void setId(int id);
	void setChecked(bool checked);
	void setDate(QDate &date);
	void setNote(QString &note);
	void setAmount(float amount);

	int getId() const;
	bool isChecked() const;
	QDate getDate() const;
	QString getNote() const;
	float getAmount() const;

};

QDataStream &operator<<(QDataStream &out, const TransactionModel &transaction);
QDataStream &operator>>(QDataStream &in, TransactionModel &transaction);

#endif // TRANSACTIONMODEL_H
