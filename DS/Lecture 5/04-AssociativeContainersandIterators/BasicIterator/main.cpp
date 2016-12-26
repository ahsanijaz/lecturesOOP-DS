#include <iostream>
#include <vector>

using namespace std;

int main() {
    // We first populate this set of integers with the numbers from 0 to 9,
    // inclusive.
  vector<int> container(10);
    for (int i = 0; i < 10; ++i)
        container[i]=i;

    // Now, we iterate through the container and print each element one at a time.
    // We do this using an iterator object which starts at the container's
    // beginning. We keep looping as long as we haven't hit the end of the
    // container yet. Inside the loop, we ask for the current value (*itr), and
    // then instruct the iterator to move to the next location (++itr).
    vector<int>::iterator itr = container.begin();
    while (itr != container.end()) {
      cout << *itr << ' ';
        ++itr;
    }

    cout << endl;

vector<int>::iterator iter = container.begin();
while (iter != container.end())
  {
    if (*iter % 2)
      {
        iter = container.insert(iter, *(iter-1));
	cout<<*iter;
      }
    ++iter;
  }
iter = container.begin();
while (iter != container.end())
  {
        cout<<*iter<<endl;
	iter++;
    }
    return 0;
}
