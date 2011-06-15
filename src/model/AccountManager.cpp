#include "AccountManager.h"
#include "MoniApp.h"

#include <QDataStream>
#include <QFile>

AccountManager::AccountManager()
{
}

bool AccountManager::saveToFile(const QString &fileName)
{
	QFile file(fileName);
	if (!file.open(QIODevice::WriteOnly))
	{
		return false;
	}
	QDataStream out(&file);

	out.setVersion(QDataStream::Qt_4_7);

	//! Write a header with a "magic number" and a version
	out << quint32(MONI_MAGIC_NUMBER);
	out << quint32(MONI_VERSION);

	for (int i = 0 ; i < this->m_accounts.size() ; i++)
	{
		out << this->m_accounts.at(i);
	}

	file.close();
	return true;
}

bool AccountManager::loadFromFile(const QString &fileName)
{

	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly)) {
		return false;
	}
	QDataStream in(&file);
	in.setVersion(QDataStream::Qt_4_7);

	quint32 magic;
	in >> magic;
	if (magic != MONI_MAGIC_NUMBER) {
		return false;
	}

	//! TODO: Check version
	qint32 version;
	in >> version;

	this->m_accounts.clear();


	while (!in.atEnd()) {
		AccountModel account;
		in << account;
		this->m_accounts.append(account);

	}

	file.close();
	return true;
}
