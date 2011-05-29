#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QString>

class Account
{
private:
	int id;
	QString *title;
public:
	Account(int id, QString title);
	void setTitle(QString title);
	QString getTitle();
	void setId(int id);
	int getId();
};

#endif // ACCOUNT_H
