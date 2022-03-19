#include <iostream>
using namespace std;

template <class T> T maximum(T n1, T n2) {
  if (n1 > n2)
    return n1;
  else
    return n2;
}

int main() {

  int number1, number2;
  cout << "Enter Two Numbers: ";
  cin >> number1 >> number2;

  cout << maximum(number1, number2) << endl;

  char char1, char2;
  cout << "Enter Two Characters: ";
  cin >> char1 >> char2;

  cout << maximum(char1, char2) << endl;

  float f1, f2;
  cout << "Enter Two Floats: ";
  cin >> f1 >> f2;

  cout << maximum(f1, f2) << endl;

  return 0;
}