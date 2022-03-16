#include <iostream>
using namespace std;
class point {
private:
  int x, y;

public:
  point(int x, int y) {
    this->x = x;
    this->y = y;
  }
  void print() { cout << x << " " << y << endl; }
};
class line {
private:
  point start, end; // class object member
public:
  line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2) {}
  void print() {
    start.print();
    end.print();
  }
};

int main() {
  line *myline;
  myline = new line(5, 4, 8, 9);
  myline->print();
  delete myline;
  return 0;
}