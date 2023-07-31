#include "Library.h"
#include"Book.h"
#include"Video.h"
#include"Account.h"
#include"Item.h"
//#include<iostream>
#include<string>
#include<fstream>
//using namespace std;
Library::Library(string id)
{
	libId = id;
	readBookItems();
	readVideoItems();
	readAccount();
}

void Library::readBookItems()
{
	ifstream file1;
	string id, title, author;
	file1.open("book.txt");
	while (!file1.eof())
	{
		Book* b = new Book;
		getline(file1, id,'\n');
		getline(file1, title,'\n');
		getline(file1, author, '\n');
		b->setBook(id, title, author);
		itemList.push_back(b);
	}
	file1.close();
}

void Library::readVideoItems()
{
	ifstream file2;
	string id, title, director, genre, producer;
	file2.open("video.txt",ios::in);
	while (!file2.eof())
	{
		Video* v = new Video;
		getline(file2, id, '\n');
		getline(file2, title, '\n');
		getline(file2, genre, '\n');
		getline(file2, director, '\n');
		getline(file2, producer, '\n');
		v->setVideo(id, title, genre, director, producer);
		itemList.push_back(v);
	}
	file2.close();
}

void Library::readAccount()
{
	ifstream file;
	string id, pass;
	file.open("account.txt", ios::in);
	while (!file.eof())
	{
		
		getline(file, id, '\n');
		getline(file, pass, '\n');
		Account* a = new Account(id,pass);
		accountList.push_back(*a);
	}
	file.close();
}

int Library::validate(string aid, string apass)
{
	int i = 0;
	vector<Account>::iterator it = accountList.begin();
	while (it != accountList.end())
	{
		if (it->getId() == aid && it->getPass()==apass)
			return i;
		i++;
		it++;
	}
	return -1;
}

vector<Item*> Library::getItemList()
{
	return itemList;
}

void Library::addItem(Item* item)
{
	itemList.push_back(item);
}

vector<Account> Library::getAccountList()
{
	return accountList;
}

bool Library::removeItem(Item* item)
{
	vector<Item*> ::iterator it = itemList.begin();
	while (it != itemList.end())
	{
		if (*it == item)
		{
			itemList.erase(it);
			return true;
		}
		it++;
	}
	return false;
}

int Library::SearchItem(string id)
{
	int i = 0;
	vector<Item*> ::iterator it = itemList.begin();
	while (it != itemList.end())
	{
		if ((*it)->getId() == id)
		{
			return i;
		}
		it++;
		i++;
	}
	return -1;
}
