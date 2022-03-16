#include <iostream> // constructor overloading program
using namespace std;
class rectangle {
private:
  int width, length;

public:
  rectangle() { // constructor 1
    cout << "Enter Dimensions: ";
    cin >> width >> length;
  }
  rectangle(int x, int y) { // constructor 2
    width = x;
    length = y;
  }
  int area() { return width * length; }
  int circumference() { return (width + length) * 2; }
};
int main() {
  rectangle r1;       // calling constructor 1
  rectangle r2(2, 6); // calling constructor 2
  cout << "r1 area is: " << r1.area() << endl;
  cout << "r2 area is: " << r2.area() << endl;
  cout << "r1 circumference is: " << r1.circumference() << endl;
  cout << "r2 circumference is: " << r2.circumference() << endl;
  return 0;
}
