#include <iostream>
using namespace std;

long pwr(int base, int exp) {

  if (exp <= 1)
    return base;
  else
    return base * pwr(base, exp - 1); // power in recursion
}

int main() {
  int base, exp;
  cout << "Enter Base: ";
  cin >> base;
  cout << "Enter Exponent: ";
  cin >> exp;
  cout << "The Result: " << pwr(base, exp);
  return 0;
}