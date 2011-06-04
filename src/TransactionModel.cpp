#include "TransactionModel.h"

TransactionModel::TransactionModel(){
}

bool TransactionModel::isChecked() const
{
	return this->m_checked;
}

void TransactionModel::setChecked(bool checked)
{
	this->m_checked = checked;
}

QDate TransactionModel::date() const
{
	return this->m_date;
}

void TransactionModel::setDate(const QDate &date)
{
	this->m_date = QDate(date);
}

QString TransactionModel::note() const
{
	return this->m_note;
}

void TransactionModel::setNote(const QString &note)
{
	this->m_note = QString(note);
}

float TransactionModel::amount() const
{
	return this->m_amount;
}

void TransactionModel::setAmount(float amount)
{
	this->m_amount = amount;
}

int TransactionModel::id() const
{
	return this->m_id;
}

void TransactionModel::setId(int id)
{
	this->m_id = id;
}

QDataStream &operator<<(QDataStream &out, const TransactionModel &transaction)
{
	out << transaction.id()
		<< transaction.isChecked()
		<< transaction.date()
		<< transaction.note()
		<< transaction.amount();

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

