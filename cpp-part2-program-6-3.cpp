#include <iostream>
using namespace std;
const int size = 5;

template <class S>
int location(S array[size], S element) {

  for (int i = 0; i < size; i++)
    if (array[i] == element)
      return i;
}

int main() {

  int a[size] = {1, 2, 3, 4, 5};
  cout << location(a, 4) << endl;

  char c[size] = {'a', 'b', 'c', 'd', 'e'};
  cout << location(c, 'e') << endl;
  
  double d[size] = {1.3, 3.4, 6.5, 7.9, 8.5};
  cout << location(d, 1.3) << endl;

  return 0;
}