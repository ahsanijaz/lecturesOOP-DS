#include <iostream>
using namespace std; 
class someclass
{
private:
 int a,b;
public:
   void test()
   {
      a=100;
      b=200;
   }
friend int compute(someclass e1);

//Friend Function Declaration with keyword friend and
// with the object of class someclass to which it is friend passed to it
};

int compute(someclass e1)
{
 //Friend Function Definition which has access to private data
 return int(e1.a+e1.b);
}

/*int compute1(someclass e1)
{
 //Friend Function Definition which has access to private data
 return int(e1.a+e1.b);
 }*/

int main()
{
     someclass e;
     e.test();
     //     cout<<e.a<<endl;
     cout << "The result is :" << compute(e)<<endl;
 //Calling of Friend Function with object as argument.
    return 0;
}
