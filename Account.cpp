#include "Account.h"

Account::Account()
{
	id = "", pass = "";
}

Account::Account(string i, string p)
{
	id = i, pass = p;
}

vector<Transaction> Account::getTransaction()
{
	return translist;
}

void Account::addTransaction(Transaction t)
{
	translist.push_back(t);
}

void Account::setTransaction(vector<Transaction>t)
{
	translist = t;
}

string Account::getId()
{
	return id;
}

string Account::getPass()
{
	return pass;
}

void Account::display()
{
	for (auto it : translist)
	{
		it.display();
	}
}
