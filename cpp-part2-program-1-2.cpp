#include <iostream> // Adding a constructor to the class
using namespace std;
class rectangle {
private:
  int width, length;

public:
  rectangle(int x, int y) { // class constructor
    width = x;
    length = y;
  }
  int area() { return width * length; }
  int circumference() { return (width + length) * 2; }
};
int main() {
  rectangle r1(5, 9), r2(2, 6); // objects defined and values passed
  cout << "r1 area is: " << r1.area() << endl;
  cout << "r2 area is: " << r2.area() << endl;
  cout << "r1 circumference is: " << r1.circumference() << endl;
  cout << "r2 circumference is: " << r2.circumference() << endl;
  return 0;
}