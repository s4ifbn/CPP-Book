#include <iostream>
using namespace std;
class rectangle {
private:
  int width, length;

public:
  rectangle(int width, int length) {
    this->width = width;
    this->length = length;
  }

  int area() { return width * length; }

  int circumference() { return (width + length) * 2; }
};
int main() {
  rectangle *r1, *r2;       // pointer to object
  r1 = new rectangle(5, 9); // new operator
  r2 = new rectangle(2, 6);

  cout << "r1 area is: " << r1->area() << endl;
  cout << "r2 area is: " << r2->area() << endl;
  cout << "r1 circumference is: " << r1->circumference() << endl;
  cout << "r2 circumference is: " << r2->circumference() << endl;

  delete r1; // delete operator
  delete r2;

  return 0;
}