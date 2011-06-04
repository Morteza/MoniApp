#include "AccountModel.h"

AccountModel::AccountModel()
{
	//TODO: generate UUID
}

void AccountModel::setTitle(const QString &title)
{
	this->title = QString(title);
}

QString AccountModel::getTitle()
{
	return this->title;
}

int AccountModel::getUUID()
{
	return this->uuid;
}

void AccountModel::addTransaction(TransactionModel *transaction)
{
	this->transactions << transaction;
}


QDataStream &operator<<(QDataStream &out, const AccountModel &account)
{
	return out;
}

QDataStream &operator>>(QDataStream &in, AccountModel &account)
{
	return in;
}
