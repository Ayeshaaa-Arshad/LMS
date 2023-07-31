#include "Book.h"

Book::Book():Item()
{
	author = "";
}

Book::Book(string ID, string t, string a):Item(ID,t)
{
	author = a;
}

void Book::setBook(string i, string t, string a)
{
	setID(i);
	setTitle(t);
	author = a;
}

void Book::setAuthor(string a)
{
	author = a;
}

string Book::getAutor()
{
	return author;
}

void Book::displayItem()
{
	cout << "-------------- - Book Item----------------\n";

	cout << "THE BOOK ID IS : " << getId();
	cout << "\nTHE BOOK TITLE IS : " << getTitle();
	cout << "\nTHE BOOK AUTHOR IS : " << author;
	cout << "---------------------------------------- -\n";
}


