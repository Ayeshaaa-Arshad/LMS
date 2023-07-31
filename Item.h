#pragma once
#include<iostream>
using namespace std;
class Item
{
	string id, title;
public:
	Item();
	Item(string, string);
	Item(string);
	void setID(string);
	void setTitle(string);
	string getId();
	string getTitle();
	virtual void displayItem()=0;
};

