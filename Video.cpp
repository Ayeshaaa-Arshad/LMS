#include "Video.h"

Video::Video():Item()
{
	genre = "", directors = "", producer = "";
}

Video::Video(string i, string t, string g, string d, string p):Item(i,t)
{
	genre = g, directors = d, producer = p;
}

void Video::setVideo(string i, string t, string g, string d, string p)
{
	setID(i);
	setTitle(t);
	genre = g;
	directors = d;
	producer = p;
}

void Video::displayItem()
{
	cout << "-------------- - Video Item----------------\n";
	cout << " Video Information \n";
	cout << "THE Video ID IS : " << getId();
	cout << "\nTHE Video TITLE IS : " << getTitle();
	cout << "\nTHE Video Director IS : " << genre;
	cout << "\nTHE Video Genre IS : " << directors;
	cout << "\nTHE Video Producer IS : " << producer;
	cout << "---------------------------------------- -\n";
}
