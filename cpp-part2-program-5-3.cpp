#include <iostream>
using namespace std;
class person {
private:
  string name;
  int age;

public:
  person(string n, int a) {
    name = n;
    age = a;
  }
  void print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};
class student {
private:
  int level;
  float avg;

public:
  student(float v, int lev) {
    avg = v;
    level = lev;
  }
  void print() {
    cout << "Average: " << avg << endl;
    cout << "Level: " << level << endl;
  }
};
class gradStudent : public person, public student { // multiple inheritance
private:
  string research;

public:
  gradStudent(string n, int a, float v, int lev, string r)
      : person(n, a), student(v, lev) {
    research = r;
  }
  void print() {
    person::print();
    student::print();
    cout << "Research: " << research << endl;
  }
};
int main() {
  gradStudent s("Sara", 20, 75, 2, "AI");
  s.print();
  return 0;
}