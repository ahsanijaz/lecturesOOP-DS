#include <iostream>
#include <deque>

using namespace std;

// The deque supports almost every single function that the vector supports.

void PrintDeque(deque<int>& myDeque) {
  for (size_t i = 0; i < myDeque.size(); ++i)
    cout << myDeque[i] << ' ';
  cout << endl;
}

int main() {
  deque<int> myDeque(10);
  cout << "size: " << myDeque.size() << endl;
  PrintDeque(myDeque);

  for (size_t i = 0; i < myDeque.size(); ++i)
    myDeque[i] = i;

  PrintDeque(myDeque);

  // Unlike the vector, the deque supports .push_front(...) and .pop_front() in
  // addition to .push_back(...) and .pop_back().
  myDeque.push_front(777);
  PrintDeque(myDeque);

  myDeque.pop_front();
  PrintDeque(myDeque);

  return 0;
}

