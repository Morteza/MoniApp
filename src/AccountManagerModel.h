#ifndef ACCOUNTMANAGERMODEL_H
#define ACCOUNTMANAGERMODEL_H

#include <vector>
#include "AccountModel.h"

class AccountManagerModel
{

private:
	std::vector<AccountModel> accounts;

public:
	AccountManagerModel();
	int getNumberOfAccounts();
	void addAccount(AccountModel &account);
};

#endif // ACCOUNTMANAGERMODEL_H
