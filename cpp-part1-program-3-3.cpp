#include <iostream>
using namespace std;
int main() { // Nesting if statements
  int number;
  cout << "Give me a number: ";
  cin >> number;
  if (number > 0)        // first check
    if (number % 2 == 0) // second check
      cout << "number is positive and even";
    else
      cout << "number is positive and odd";
  else if (number < 0)   // third check
    if (number % 2 == 0) // fourth check
      cout << "number is negative and even";
    else
      cout << "number is negative and odd";
  else
    cout << "number is zero";
}
