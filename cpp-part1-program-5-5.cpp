#include <iostream>
using namespace std;

long fact(void) { // calculating factorial using type 4 function
  int number;
  cout << "Give me a Number: ";
  cin >> number;

  long result = 1;
  for (int i = number; i > 1; --i) {
    result *= i;
  }
  return result;
}

int main() {
  cout << fact(); // calling type 4 function
  return 0;
}
