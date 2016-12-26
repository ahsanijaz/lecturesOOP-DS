#include "friend1234.h"


friend1234::friend1234(void)
{
	int age =0;
	float height=0;

}



friend1234::friend1234( int age1,float height1,string name1)
{
	p=new int;
	*p=age1;
	age=age1;
	cout<<"enter name of friend"<<endl;
	cin>>name1;
	name=name1;
	cout<<"enter height of your friend"<<endl;
	cin>>height1;
	height=height1;
	cout<<"enter age of the friend"<<endl;
	cin>>age1;


}

friend1234::friend1234(const friend1234 & obj )
{
	    obj.name;
		obj.height;
		obj.age;
}



void friend1234::animate()
{
	cout<<"do u want to run(1) , jump(2) or eat(3)"<<endl;
	int select;
	cin>>select;
	if(select==1)
	{
		run();
	}
	
		if(select==2)
	{
		jump();
	}
			if(select==3)
	{
		eat();
	}


}



friend1234::~friend1234()
{
	cout<<"In destructor routine of Object Name"<<endl;
	delete p;
}