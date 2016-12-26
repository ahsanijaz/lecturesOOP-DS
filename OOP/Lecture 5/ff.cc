#include <iostream>
using namespace std; 
class someclass
{
private:
 int a,b;
public:
  int c;
   void test()
  {c=300;
      a=100;
      b=200;
   }
friend int compute1(someclass);

//Friend Function Declaration with keyword friend and
// with the object of class someclass to which it is friend passed to it
};

/*int compute(someclass e1)
{
 //Friend Function Definition which has access to private data
 return int(e1.a+e1.b)-5;
 }*/

int compute1(someclass e1)
{
 //Friend Fu Definition which has access to private data
 return int(e1.a+e1.b)-5;
}

int main()
{
     someclass e;
     e.test();
    cout << "The result is:" << compute1(e);
    return 0;
 //Calling of Friend Function with object as argument.
}
