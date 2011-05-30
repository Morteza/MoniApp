#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <vector>
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

	//TODO: add to slots
	bool saveToFile();
	bool loadFromFile();
};

#endif // ACCOUNTMANAGER_H
