#include <iostream>
using namespace std;

// factorial in recursion
long fact(int number) {

  if (number == 1)
    return 1;
  else
    return number * fact(number - 1);
}

int main() {
  int number;
  cout << "Give me a Number: ";
  cin >> number;

  cout << "The Result: " << fact(number);
}