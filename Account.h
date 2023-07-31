#pragma once
#include<iostream>
#include"Transaction.h"
#include<vector>
using namespace std;
class Account
{
private:
	//id holds the id of the account, pass holds the password
	string id, pass;
	//vector holds all the transactions associated to the account
	vector<Transaction> translist;
public:
	//Todo: default constructor and a non-default constructor that takes in the ID and password
	Account();
	Account(string, string);
	//Todo: getTransaction that function returns the vector of all transactions for the account
	vector<Transaction> getTransaction();
	//Todo: addTransaction function that adds a transaction to the transaction list
	void addTransaction(Transaction t);
	//Todo: setTransaction function set the transaction vector in the account
	void setTransaction(vector<Transaction>);
	//Todo: Any required operators that is to be overloaded
	string getId();
	string getPass();
	void display();
};


