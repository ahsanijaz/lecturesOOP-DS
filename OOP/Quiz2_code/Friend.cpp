//Friend.cpp
#include "Friend.h"
#include<iostream>
#include<string>
using namespace std;

Friend::Friend(void)
{
}

Friend::Friend(int A, string N, int H, int W, string EC, string ST, string HC, string FM)
{
	Age=new int;
	*Age=A;
	Name=new string;
	*Name=N;
	Height=new int;
	*Height=H;
	Weight=new int;
	*Weight=W;
	EyeColour=new string;
	*EyeColour=EC;
	SkinTone=new string;
	*SkinTone=ST;
	HairColour=new string;
	*HairColour=HC;
	Movie=new string;
	*Movie=FM;
}

Friend::Friend(const Friend &obj)
{
	Age=new int;
	*Age=*obj.Age;
	Name=new string;
	*Name=*obj.Name;
	Height=new int;
	*Height=*obj.Height;
	Weight=new int;
	*Weight=*obj.Weight;
	EyeColour=new string;
	*EyeColour=*obj.EyeColour;
	SkinTone=new string;
	*SkinTone=*obj.SkinTone;
	HairColour=new string;
	*HairColour=*obj.HairColour;
	Movie=new string;
	*Movie=*obj.Movie;
}

void Friend::printFriendInfo(void)
{
	cout<<"Name: "<<*Name<<endl;
	cout<<"Age: "<<*Age<<"yrs"<<endl;
	cout<<"Height: "<<*Height<<"ft"<<endl;
	cout<<"Weight: "<<*Weight<<"kg"<<endl;
	cout<<"Eye Colour: "<<*EyeColour<<endl;
	cout<<"Skin Tone: "<<*SkinTone<<endl;
	cout<<"Hair Colour: "<<*HairColour<<endl;
	cout<<"Favourite Movie: "<<*Movie<<endl;
}

void Friend::Run(void)
{
	cout<<"In Run() routine."<<endl;
}

void Friend::Jump(void)
{
	cout<<"In Jump() routine."<<endl;
}

void Friend::Eat(void)
{
	cout<<"In Eat() routine."<<endl;
}

void Friend::Sleep(void)
{
	cout<<"In Sleep() routine."<<endl;
}

void Friend::Animate(void)
{
	int c;
	cout<<"In animate routine."<<endl;
	cout<<"Choose one action:"<<endl;
	cout<<"1. Run;"<<endl;
	cout<<"2. Jump;"<<endl;
	cout<<"3. Eat;"<<endl;
	cout<<"4. Sleep;"<<endl<<endl;
	cout<<"Enter choice: ";
	cin>>c;
	switch(c)
	{
	case 1:
		Run();
		break;
	case 2:
		Jump();
		break;
	case 3:
		Eat();
		break;
	case 4:
		Sleep();
		break;
	default:
		cout<<"Invalid choice!"<<endl;
		break;
	}
}

Friend::~Friend(void)
{
	cout<<"In destructor routine for object "<<*Name<<endl;
	Age=NULL;
	delete Age;
	Name=NULL;
	delete Name;
	Height=NULL;
	delete Height;
	Weight=NULL;
	delete Weight;
	EyeColour=NULL;
	delete EyeColour;
	SkinTone=NULL;
	delete SkinTone;
	HairColour=NULL;
	delete HairColour;
	Movie=NULL;
	delete Movie;
}
