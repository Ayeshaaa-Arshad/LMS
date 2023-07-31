#include "Transaction.h"
#include<iostream>
using namespace std;
Transaction::Transaction()
{
	//itemVector = ;
}

void Transaction::borrowItems(Item* item)
{
	itemVector.push_back(item);
}

vector<Item*> Transaction::getItemVector()
{
	return itemVector;
}

void Transaction::setItemVector(vector<Item*> iVector)
{
	itemVector = iVector;
}

int Transaction::findBorrowedItem(Item* item)
{
	int i = 0;
	vector<Item*>::iterator it=itemVector.begin();
	while (it != itemVector.end())
	{
		if (*it == item)
			return i;
		i++;
		it++;
	}
	return -1;
}

void Transaction::display()
{
	for (auto x : itemVector)
		x->displayItem();
	cout << "\n";
}
