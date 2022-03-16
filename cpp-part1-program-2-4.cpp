#include <iostream>
#include <math.h>
using namespace std;
int main() { // solving quadratic equation version 2
  int a, b, c;
  float x1, x2;
  cout << "Enter the equation coefficients: ";
  cin >> a >> b >> c;
  x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  cout << "The roots are: " << x1 << " and " << x2;
}
