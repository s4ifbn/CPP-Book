#include <iostream> // defining a class & working with objects
using namespace std;
class rectangle {
private:
  int width, length;

public:
  void read(int x, int y) {
    width = x;
    length = y;
  }
  int area() { return width * length; }
  int circumference() { return (width + length) * 2; }
};
int main() {
  rectangle r1, r2;
  r1.read(5, 9);
  r2.read(2, 6);
  cout << "r1 area is: " << r1.area() << endl;
  cout << "r2 area is: " << r2.area() << endl;
  cout << "r1 circumference is: " << r1.circumference() << endl;
  cout << "r2 circumference is: " << r2.circumference() << endl;
  return 0;
}
