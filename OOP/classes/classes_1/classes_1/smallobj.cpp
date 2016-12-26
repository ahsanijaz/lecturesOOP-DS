/* smallobj.cpp
ref:   pg 216, ch 6, OOP in C++ (Lafore) 
Info:  An introductory example of classes*/ 

#include <iostream>
using namespace std;

class smallobj    // define a class
	{private:
		int somedata ;	// class data (visible to only class members
	 public:
		 void setdata(int s)	// member function to set data
		 {	somedata = s;
		 }
		 void showdata()	// member function to display data
		 {	cout << "Data is " << somedata << endl;
		 }
	};

void main()
	{int x=10;
	 smallobj small;	// class object
	 smallobj smaller;	// class object
	
	  small.setdata(x);
	  small.showdata();

	  x=4;

	 smaller.setdata(x);
	 small.showdata();
	 
	 
	}