#ifndef ACCOUNTMODEL_H
#define ACCOUNTMODEL_H

#include <QString>

class AccountModel
{
private:
	int id;
	QString * title;
public:
	AccountModel(int id, QString title);
	~AccountModel();
	void setTitle(QString title);
	QString getTitle();
	void setId(int id);
	int getId();
};

#endif // ACCOUNTMODEL_H
