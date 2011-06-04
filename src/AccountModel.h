#ifndef ACCOUNTMODEL_H
#define ACCOUNTMODEL_H

#include "MoniApp.h"
#include "TransactionModel.h"

#include <QDataStream>
#include <QString>
#include <QList>


class AccountModel
{

private:
	int uuid;
	QString title;
	QList<TransactionModel*> transactions;

public:
	AccountModel();
	void setTitle(const QString &title);
	QString getTitle();
	int getUUID();

	void addTransaction(TransactionModel *transaction);

};
QDataStream &operator<<(QDataStream &out, const AccountModel &account);
QDataStream &operator>>(QDataStream &in, AccountModel &account);

#endif // ACCOUNTMODEL_H
