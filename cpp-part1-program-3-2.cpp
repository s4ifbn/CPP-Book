#include <iostream>
using namespace std;
int main() { // multiple if statements
  int age;
  cout << "Hi, How Old Are You? ";
  cin >> age;
  if (age >= 18)
    cout << "You can have a driver's license:";
  if (age < 18)
    cout << "You still young to have a license";
}
