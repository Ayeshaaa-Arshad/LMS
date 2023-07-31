#pragma once
#include"Item.h"
//#include<iostream>
//using namespace std;
class Book:public Item
{
	string author;
public:
	Book();
	Book(string,string,string);
	void setBook(string, string, string);
	void setAuthor(string);
	string getAutor();
	void displayItem();
};

