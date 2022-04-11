#include <iostream>
using namespace std;

float average(int &a, int &b, int &c) {
  return (a + b + c) / 3.0;
}

int main() {
  int a = 90, b = 88, c = 78;
  float v = average(a, b, c);
  cout << v;
  return 0;
}
