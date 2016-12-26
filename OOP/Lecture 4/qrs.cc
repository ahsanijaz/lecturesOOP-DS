#include <iostream>
using namespace std;
class Box
{
   public:
      Box(double l, double b, double h)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int compare(Box dumbox)
      {
         return (this->Volume() < dumbox.Volume());
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void)
{
  bool big;
   Box Box1(3, 1, 1);    // Declare box1
   Box Box2(10, 6, 2);    // Declare box2
big = Box1.compare(Box2);
 cout<<big<<endl;
   return 0;
}
