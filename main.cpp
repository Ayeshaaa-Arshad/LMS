#include<iostream>
#include"Library.h"
#include"Transaction.h"
#include"Item.h"
using namespace std;
int menu()
{
	int option;
	cout << "1)View all items\n2)Borrow Items\n3)View Borrowed Items\n4)Return Borrowed Item\n5)Quit\nEnter Option : ";
	cin >> option;
	return option;
}
int login(Library lib)
{
	string id, pass;
	cout << endl;
	cout << "Enter ID: ";
	cin >> id;
	cout << "Enter password: ";
	cin >> pass;
	return lib.validate(id, pass);
}
int main()
{
	//initializing a library instance
	string libraryId = "123";
	Library lib(libraryId);
	//is account validated?
	int accountIndex = login(lib);
	//if validated, show the menu
	Transaction trans;
	if (accountIndex != -1)
	{
		//retreived the account object
		Account account = lib.getAccountList()[accountIndex];
		//holds the option, input for the menu option
		int option;
		do {
			option = menu();
			//Option 1 displays all items in the library both books and videos
			if (option == 1)
			{
				//implementation goes here
				vector<Item*>v = lib.getItemList();
				for (auto it : v)
					it->displayItem();
			}
			//if option borrow item
			if (option == 2)
			{
				int numItems;
				string itemId;
				cout << "\nHow many items to borrow: ";
				cin >> numItems;
				for (int i = 0; i < numItems; i++)
				{
					cout << "\nEnter the ID of the item to borrow: ";
					cin >> itemId;
					//check if the itemId is borrowed by the user
					int foundInd = lib.SearchItem(itemId);
					if (foundInd != -1)
					{
						//borrow the item by calling the transaction object
						vector<Item*>v = lib.getItemList();
						trans.borrowItems(v[foundInd]);
						//note that the item should not be available to be borrowed
						lib.removeItem(v[foundInd]);
						//again if it is borrowed by a user
					}
					else
					{
						cout << "Item not found in the library..." << endl;
						i--;
					}
				}
				//add the transaction to the account
				account.addTransaction(trans);
			}
			//if option is to view borrowed items
			if (option == 3)
			{
				int i = 0;
				//View the borrowed items. Borrowed items can be of type book or video
				account.display();
			}
			//option to return an item back to the library
			if (option == 4)
			{
				//return the item back to the library
				string itemId;
				cout << "Enter Item to return\n";
				cin >> itemId;
				vector<Item*>v = trans.getItemVector();
				for (auto x : v)
				{
					int y = trans.findBorrowedItem(x);
					if (y != -1)
						lib.addItem(x);
				}
			}
		} while (option != 5); //end of do while
	}
	system("pause");
	return 0;
}