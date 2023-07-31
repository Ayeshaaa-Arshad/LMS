#include "Item.h"
#include<iostream>
using namespace std;
Item::Item()
{
	id = "", title = "";
}

Item::Item(string i, string t)
{
	id = i;
	title = t;
}

Item::Item(string ID)
{
	id = ID;
}

void Item::setID(string ID)
{
	id = ID;
}

void Item::setTitle(string t)
{
	title = t;
}

string Item::getId()
{
	return id;
}

string Item::getTitle()
{
	return title;
}

