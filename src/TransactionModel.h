#ifndef TRANSACTIONMODEL_H
#define TRANSACTIONMODEL_H

#include "MoniApp.h"

#include <QDataStream>
#include <QDate>

class TransactionModel
{

private:
	int m_id;
	bool m_checked;
	QDate m_date;
	QString m_note;
	float m_amount;

public:
	TransactionModel();
	void setId(int id);
	void setChecked(bool checked);
	void setDate(const QDate &date);
	void setNote(const QString &note);
	void setAmount(float amount);

	int id() const;
	bool isChecked() const;
	QDate date() const;
	QString note() const;
	float amount() const;

};

QDataStream &operator<<(QDataStream &out, const TransactionModel &transaction);
QDataStream &operator>>(QDataStream &in, TransactionModel &transaction);

#endif // TRANSACTIONMODEL_H
