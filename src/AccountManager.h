#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <vector>

#include <QFile>

#include "AccountModel.h"

class AccountManager
{

private:
	std::vector<AccountModel> accounts;

public:
	AccountManager();
	~AccountManager();
	int getNumberOfAccounts();
	void addAccount(AccountModel &account);
	void removeAccount(int uuid);
	void removeAccount(AccountModel &account);

	//TODO: add to slots
	bool saveToFile(QFile &file);
	bool loadFromFile(QFile &file);
};

#endif // ACCOUNTMANAGER_H
