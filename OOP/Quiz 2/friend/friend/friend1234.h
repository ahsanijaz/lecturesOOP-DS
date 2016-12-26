#pragma once
#include <iostream>
#include <string>
using namespace std;
class friend1234
{
private:
	int age;
	float height;
	string name;
	void run(){cout<<"u r running"<<endl;};
	void eat(){cout<<"u r eating"<<endl;};
	void jump(){cout<<"u r jumping"<<endl;};

	int*p;
public:
	friend1234();
	friend1234(int,float,string);
	friend1234(const friend1234 &);
	void animate(); 
	~friend1234();
};

