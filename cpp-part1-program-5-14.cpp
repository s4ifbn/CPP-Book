#include <iostream>
using namespace std;

// static vs automatic

void Myfunc() {
  int a = 10; // automatic variable
  a++;
  cout << "automatic a = " << a << endl;
  static int b = 20; // static variable
  b++;
  cout << "static b = " << b << endl;
}

int main() {

  Myfunc();
  Myfunc();
  Myfunc();

  return 0;
}