#include "AccountModel.h"

AccountModel::AccountModel()
{
	//TODO: generate UUID
}

void AccountModel::setTitle(const QString &title)
{
	this->m_title = QString(title);
}

QString AccountModel::title()
{
	return this->m_title;
}

int AccountModel::id()
{
	return this->m_id;
}

void AccountModel::addTransaction(TransactionModel transaction)
{
	this->m_transactions << transaction;
}


QDataStream &operator<<(QDataStream &out, const AccountModel &account)
{
	//TODO: write
	return out;
}

QDataStream &operator>>(QDataStream &in, AccountModel &account)
{
	//TODO: read
	return in;
}
