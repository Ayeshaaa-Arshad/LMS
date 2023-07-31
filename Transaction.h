#pragma once
//#include<iostream>
#include"Item.h"
#include<vector>
//using namespace std;
class Transaction
{
private:
	//holds the items borrowed in the vector
	vector<Item*> itemVector;
public:
	Transaction();
	//this function adds an item to the itemVector
	void borrowItems(Item* item);
	//this function returns the itemVector
	vector<Item*> getItemVector();
	//this function is a setter to the itemVector attribute
	void setItemVector(vector<Item*> iVector);
	//this function returns the index location of the found item in the a transaction.
	//the function return -1 if the item is not found
	int findBorrowedItem(Item* item);
	void display();
};

