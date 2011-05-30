#include "TransactionModel.h"


TransactionModel::TransactionModel(int id, bool checked, QDate &date, QString &note, float amount)
{
	this->id = id;
	this->setChecked(checked);
	this->setDate(date);
	this->setNote(note);
	this->setAmount(amount);
}

TransactionModel::~TransactionModel()
{

}

bool TransactionModel::isChecked()
{
	return this->checked;
}

void TransactionModel::setChecked(bool checked)
{
	this->checked = checked;
}

QDate& TransactionModel::getDate()
{
	return this->date;
}

void TransactionModel::setDate(QDate &date)
{
	this->date = QDate(date);
}

QString& TransactionModel::getNote()
{
	return this->note;
}

void TransactionModel::setNote(QString &note)
{
	this->note = QString(note);
}

float TransactionModel::getAmount()
{
	return this->amount;
}

void TransactionModel::setAmount(float amount)
{
	this->amount = amount;
}

int TransactionModel::getId()
{
	return this->id;
}
