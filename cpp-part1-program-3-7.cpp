#include <iostream>
using namespace std;
int main() { // switch statement with ranges
  int age;
  cout << "Hi, How Old Are You? ";
  cin >> age;
  switch (age) {
  case 18 ... 100:
    cout << "You can have a license:";
    break;
  case 0 ... 17:
    cout << "You still young to have a license";
    break;
  default:
    cout << "Please enter a valid Age";
  }
}