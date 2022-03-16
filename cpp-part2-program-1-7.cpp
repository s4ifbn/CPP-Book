#include <iostream>
using namespace std;
class Date {
private:
  int day, month, year;

public:
  Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
  }
  void print() const { // constant method
    cout << day << "/" << month << "/" << year << endl;
  }
  int getMonth() const { // constant method
    return month;
  }
};
int main() {
  const Date birthday(13, 10, 1990);
  birthday.print();
}
