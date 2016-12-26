#include <iostream>
using namespace std;
class Line
{
   public:
  int house;
      Line( int len );             // simple constructor
      Line( const Line &obj);  // copy constructor
  Line(int len,int q);
      ~Line();                     // destructor
  private:
      int *ptr;
  int dd;
};
// Member functions definitions including constructor
Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl;
    // allocate memory for the pointer;
    ptr = new int;
    *ptr = len;
}
Line::Line(int len,int q)
{
    cout << "Normal constructor allocating ptr" << endl;
    // allocate memory for the pointer;
    ptr = new int;
    *ptr = len;
   dd=q;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
   *ptr = *obj.ptr; // copy the value

}
Line::~Line(void)
{
    cout << "Freeing memory!" << endl;
    delete ptr;
}

int main()
{
  Line a(10);
  a.house=5;
  Line b(a);
  return 0;
}
