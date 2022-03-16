#include <iostream>
using namespace std;
class student {
private:
  string name;
  int ID, age, grade1, grade2, grade3;

public:
  student() {
    cout << "Enter student's info: ";
    cin >> ID >> name >> age >> grade1 >> grade2 >> grade3;
  }
  friend float average(student); // friend function prototype
};
float average(student s) { // friend function
  float avg = (float)(s.grade1 + s.grade2 + s.grade3) / 3.0;
  return avg;
}

int main() {
  student s1;
  cout << average(s1);
  return 0;
}
