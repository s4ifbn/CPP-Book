#include <iostream>
using namespace std;

int volume(int a) { return (a * a * a); }

// function overloading
double volume(int h, int r) {
  const float pi = 3.14;
  return (pi * r * r * h);
}

int main() {
  int length, height, radius;
  cout << "Give me the cube length: ";
  cin >> length;
  cout << "Cube volume: " << volume(length) << endl;

  cout << "Give me the cylinder height: ";
  cin >> height;
  cout << "Give me the cylinder radius: ";
  cin >> radius;
  cout << "Cylinder volume: ";
  cout << volume(height, radius);

  return 0;
}