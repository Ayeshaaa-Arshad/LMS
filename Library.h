#pragma once
#include<iostream>
#include<vector>
#include"Account.h"
#include"Item.h"
using namespace std;
class Library
{
	//libId: holds the library ID
	string libId;
	//itemList hold the items objects in the library
	vector<Item*> itemList;
	//accountList hold the account objects
	vector<Account> accountList;
public:
	//Todo: constructor that takes a library ID (string)
	Library(string);
	// Todo: readBookItems function reads from the book.txt, creates the book object and
	//stores them in the ItemList vector. Note the name of the file is “book”
	//followed by the library ID.
	void readBookItems();
	// Todo: readVideoItems function that reads from the video.txt, creates the video
	//object and stores them in the ItemList vector. Note the name of the file is “video”
	//followed by the library ID.
	void readVideoItems();
	// Todo: readAccount function reads from the account.txt, creates the account object
	//and stores them in the accountList vector. Note the name of the file is “account”
	//followed by the library ID.
	void readAccount();
	// Todo: validate function validates the passed id and password.
	//the function returns -1 if invalid, and the index of the account if valid
	int validate(string aid, string apass);
	// Todo: getItemList function returns the vector of Items addresses
	vector<Item*> getItemList();
	// Todo: addItem function adds an Item into the itemList
	void addItem(Item* item);
	// Todo: getAccountList function returns the accountList
	vector<Account>getAccountList();
	// Todo: removeItem function removes an item from the itemList and returns true if
	//item is found and removed successfully
	bool removeItem(Item* item);
	//SearchItem function searches for an item.
	//the function returns the index of the found item. If no item is found,
	//the function returns -1
	int SearchItem(string id);
};

