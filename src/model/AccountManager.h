#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include "MoniApp.h"
#include "AccountModel.h"
#include "TransactionModel.h"

#include <QObject>
#include <QDataStream>
#include <QString>
#include <QFile>
#include <QList>


class AccountManager
{

private:
	QList<AccountModel> m_accounts;

public:
	AccountManager();
	~AccountManager();
	int numberOfAccounts();
	void addAccount(AccountModel account);
	void removeAccount(int id);

	bool saveToFile(const QString &fileName);
	bool loadFromFile(const QString &fileName);
};

#endif // ACCOUNTMANAGER_H
