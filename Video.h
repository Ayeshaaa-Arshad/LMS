#pragma once
#include"Item.h"
#include<iostream>
using namespace std;
class Video:public Item
{
	string genre, directors, producer;
public:
	Video();
	Video(string, string, string, string, string);
	void setVideo(string, string, string, string, string);
	void displayItem();
};

