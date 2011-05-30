#include "AccountModel.h"

AccountModel::AccountModel(QString &title)
{
	//TODO: generate UUID
	setTitle(title);
	this->transactions.clear();
}

AccountModel::~AccountModel()
{

}

void AccountModel::setTitle(QString &title)
{
	this->title = QString(title);
}

QString& AccountModel::getTitle()
{
	return this->title;
}

int AccountModel::getUUID()
{
	return this->uuid;
}

void AccountModel::addTransaction(TransactionModel &transaction)
{
	this->transactions.push_back(transaction);
}
