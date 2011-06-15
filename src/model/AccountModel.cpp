#include "AccountModel.h"

AccountModel::AccountModel()
{
	//! TODO: generate random UUID for m_id
	this->m_id = 0;
}

AccountModel::AccountModel(int id)
{
	this->m_id = id;
}

void AccountModel::setTitle(const QString &title)
{
	this->m_title = QString(title);
}

QString AccountModel::title() const
{
	return this->m_title;
}

int AccountModel::id() const
{
	return this->m_id;
}

void AccountModel::addTransaction(TransactionModel transaction)
{
	this->m_transactions << transaction;
}

QList<TransactionModel> AccountModel::transactions() const
{
	return this->m_transactions;
}

QDataStream &operator<<(QDataStream &out, const AccountModel &account)
{
	out << account.id()
		<< account.title()
		<< account.transactions();

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
