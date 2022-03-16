#include <iostream>
using namespace std;
class rectangle {
private:
  int width, length;

public:
  rectangle(int, int); // prototype
  int area();          // prototype
  int circumference(); // prototype
};                     // class end

rectangle::rectangle(int x, int y) { // Scope resolution operator
  width = x;
  length = y;
}
int rectangle::area() { // Scope resolution operator
  return width * length;
}
int rectangle::circumference() { // Scope resolution operator
  return (width + length) * 2;
}
int main() {
  rectangle r1(5, 9), r2(2, 6);
  cout << "r1 area is: " << r1.area() << endl;
  cout << "r2 area is: " << r2.area() << endl;
  cout << "r1 circumference is: " << r1.circumference() << endl;
  cout << "r2 circumference is: " << r2.circumference() << endl;
  return 0;
}