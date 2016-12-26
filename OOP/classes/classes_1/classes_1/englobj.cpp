// englobj.cpp
//info: several methods in classes
//ref: objects and classes, OOP in c++ (Lafore)
#include <iostream>
using namespace std;

class Distance
	{private:
		int feet;
		float inches;
	 public:
		 void setdistance(int ft, float in)
			{feet = ft;
			 inches = in;
			}
		 void getdistance()
			{cout << "Enter feet : "; 
			 cin >> feet;
			 cout << "Enter inches : "; 
			 cin >> inches;
			}
		 void showdistance()
			{cout << feet << "\' - " << inches << "\" "<< endl;
			}
	};

void main()
	{Distance d1, d2;
	 d1.setdistance(1,2);
	 d1.showdistance();


	 d2.getdistance();
	 d2.showdistance();
	}