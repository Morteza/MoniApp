#include "AccountManager.h"

AccountManager::AccountManager()
{
}

AccountManager::saveToFile(QFile &file)
{
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);

	out << (qint32) 1 ; // write version

	//TODO: write accounts

	for (int i = 0 ; i < accounts.size() ; i++)
	{
		out << accounts.at(i);
	}
	file.close();
}

AccountManager::loadFromFile(QFile &file)
{
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);

	qint32 version;
	in >> version; // read version

	//TODO: read accounts

	file.close();
}
