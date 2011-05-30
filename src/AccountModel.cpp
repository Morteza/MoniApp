#include "AccountModel.h"

AccountModel::AccountModel(int id, QString title)
{
	this->setId(id);
	this->setTitle(title);
}

void AccountModel::setId(int id)
{
	this->id = id;
}

void AccountModel::setTitle(QString title)
{
	if (this->title)
		delete this->title;
	this->title = new QString(title);
}

int AccountModel::getId()
{
	return this->id;
}

QString AccountModel::getTitle()
{
	return *this->title;
}

AccountModel::~AccountModel()
{
	delete this->title;
}
