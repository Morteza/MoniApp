#ifndef ACCOUNTMODEL_H
#define ACCOUNTMODEL_H

#include <QString>
#include <vector>
#include "TransactionModel.h"

class AccountModel
{
private:
	int uuid;
	QString title;
	std::vector<TransactionModel> transactions;

public:
	AccountModel(QString &title);
	~AccountModel();
	void setTitle(QString &title);
	QString& getTitle();
	int getUUID();

	void addTransaction(TransactionModel &transaction);
};

#endif // ACCOUNTMODEL_H
