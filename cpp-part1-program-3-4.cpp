#include <iostream>
using namespace std;
int main() { // Ternary operator
  int number;
  cout << "Give me a number: ";
  cin >> number;
  (number % 2) ? cout << "Odd" : cout << "Even";
}
