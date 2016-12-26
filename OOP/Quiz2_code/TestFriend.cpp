//TestFriend.cpp
#include "Friend.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Friend myFriend(21, "Fuzzy Boo", 5, 45, "Blue", "Fair", "Blond", "The Blind Side");
	cout<<endl;
	char x=NULL;
	do
	{
		myFriend.Animate();
		cout<<endl;
		cout<<"Would you like to choose another action (y/n): ";
		cin>>x;
	} while(x=='y');

	cout<<"\n\nMy original friends information: "<<endl;
	myFriend.printFriendInfo();
	Friend myFriend2(myFriend);
	cout<<"\nMy new friends information: "<<endl;
	myFriend2.printFriendInfo();
	cout<<endl;
	return 0;
}