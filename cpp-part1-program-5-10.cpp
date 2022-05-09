#include <iostream>
using namespace std;

// swap function pass by reference
inline void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 33, b = 66;
  swap(a, b);
  cout << "Numbers after swapping: " << endl;
  cout << "a = " << a << endl << "b = " << b;
  return 0;
}