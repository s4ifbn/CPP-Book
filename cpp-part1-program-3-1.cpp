#include <iostream>
using namespace std;
int main() { // if-else statement
  int age;
  cout << "Hi, How Old Are You? ";
  cin >> age;
  if (age >= 18)
    cout << "You can have a driver's license:";
  else
    cout << "You still young to have a license";
}
