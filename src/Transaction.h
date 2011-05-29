#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QDate>
#include "Account.h"

class Transaction
{
private:
	bool checked;
	QDate *date;
	QString *note;
	int amount;
	int id;
	Account *account;

public:
	Transaction();
};

#endif // TRANSACTION_H
