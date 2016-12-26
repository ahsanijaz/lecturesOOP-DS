#include <iostream>
namespace first_space{
   void func(){
     cout << "Inside first_space" << endl;
   }
}
// second name space
namespace second_space{
   void func(){
     cout << "Inside second_space" << endl;
   }
}
using namespace std;
using namespace first_space;
// first name space

int main ()
{
 
   // Calls function from first name space.
   func();
   
   // Calls function from second name space.
   second_space::func(); 

   return 0;
}
