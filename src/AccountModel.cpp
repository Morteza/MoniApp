#include "AccountModel.h"

AccountModel::AccountModel(int id)
{
	this->m_id = id;
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
	out << account.id()
		<< account.m_title
		<< account.m_transactions;

	return out;
}

QDataStream &operator>>(QDataStream &in, AccountModel &account)
{
	int id;
	QString title;
	QList<TransactionModel> transactions;

	//! read transaction info from input stream
	in >> id
	   >> title
	   >> transactions;

	//! create new account object
	account = AccountModel(id);
	account.setTitle(title);

	for (int i = 0 ;i <transactions.size();i++)
	{
		account.addTransaction(transactions.at(i));
	}

	transactions.clear();

	return in;
}
