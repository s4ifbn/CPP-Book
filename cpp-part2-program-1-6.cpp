#include <iostream>
using namespace std;
class circle {
private:
  int radius;
  const float PI; // constant data member
public:
  static int total;          // static data member
  circle(int r) : PI(3.14) { // member initialization list
    radius = r;
    total++;
  }
  int area() { return radius * radius * PI; }
};
int circle::total = 0; // initialize static member
int main() {
  circle c1(7), c2(4);
  cout << "c1 area is: " << c1.area() << endl;
  cout << "c2 area is: " << c2.area() << endl;
  cout << "you have " << circle::total << " circles";
  return 0;
}
