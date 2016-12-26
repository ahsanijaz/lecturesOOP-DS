//Friend.h
#pragma once
#include<string>
using namespace std;
class Friend
{
public:
	Friend(void);
	Friend(int, string, int, int, string, string, string, string);
	Friend(const Friend &);
	void printFriendInfo(void);
	void Animate(void);
	~Friend(void);
private:
	int *Age;
	string *Name;
	int *Height;
	int *Weight;
	string *EyeColour;
	string *SkinTone;
	string *HairColour;
	string *Movie;
	void Run(void);
	void Jump(void);
	void Eat(void);
	void Sleep(void);
};

