// objpart.cpp
// info: example of several members in class
//ref: objects and classes, OOP in c++ (Lafore)
#include <iostream>
using namespace std;

class objpart
	{private:
		int modelnum;
		int partnum;
		float cost;
	 public:
		 void setpart(int mn, int pn, float c)
			{modelnum = mn;
			 partnum = pn;
			 cost = c;
			}
		 void showpart()
			{cout << "the model number is " << modelnum << endl;
			 cout << "the part number is " << partnum << endl;
			 cout << "the cost is $" << cost << endl <<endl;
			}
	};

void main()
	{objpart widget;
	 objpart widget2;
     widget.setpart(10, 1011, 32);
	 widget.showpart();

	 widget2.showpart();
	}