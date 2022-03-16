#include <iostream>
using namespace std;
class vector {
private:
  int x, y;

public:
  vector(int a, int b) {
    x = a;
    y = b;
  }
  void print() { cout << "X = " << x << " Y = " << y << endl; }
  vector operator+(vector v2) { // Binary Operator Overloading
    vector v3(x + v2.x, y + v2.y);
    return v3;
  }
};

int main() {
  vector v1(1, 2), v2(3, 4);
  v1.print();
  v2.print();
  vector v3 = v1 + v2;
  v3.print();
  return 0;
}