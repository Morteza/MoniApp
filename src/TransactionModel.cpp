#include "TransactionModel.h"

TransactionModel::TransactionModel(){
}

bool TransactionModel::isChecked() const
{
	return this->checked;
}

void TransactionModel::setChecked(bool checked)
{
	this->checked = checked;
}

QDate TransactionModel::getDate() const
{
	return this->date;
}

void TransactionModel::setDate(QDate &date)
{
	this->date = QDate(date);
}

QString TransactionModel::getNote() const
{
	return this->note;
}

void TransactionModel::setNote(QString &note)
{
	this->note = QString(note);
}

float TransactionModel::getAmount() const
{
	return this->amount;
}

void TransactionModel::setAmount(float amount)
{
	this->amount = amount;
}

int TransactionModel::getId() const
{
	return this->id;
}

void TransactionModel::setId(int id)
{
	this->id = id;
}

QDataStream &operator<<(QDataStream &out, const TransactionModel &transaction)
{
	out << transaction.getId()
		<< transaction.isChecked()
		<< transaction.getDate()
		<< transaction.getNote()
		<< transaction.getAmount();

	return out;
}

QDataStream &operator>>(QDataStream &in, TransactionModel &transaction)
{
	bool checked;
	int id;
	QDate date;
	QString note;
	float amount;

	//! read transaction info from input stream
	in >> id
	   >> checked
	   >> date
	   >> note
	   >> amount;

	//! create new tranaction object
	transaction = TransactionModel();
	transaction.setId(id);
	transaction.setChecked(checked);
	transaction.setDate(date);
	transaction.setNote(note);
	transaction.setAmount(amount);

	return in;
}

