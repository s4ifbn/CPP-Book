#include <iostream>
using namespace std;
class person {
private:
  string name;
  int age, length, weight;

public:
  person(string n, int a, int len, int w) {
    name = n;
    age = a;
    length = len;
    weight = w;
  }
  void print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Length: " << length << endl;
    cout << "Weight: " << weight << endl;
  }
};
class student : public person {
private:
  int level;
  float avg;

public:
  student(string n, int a, int len, int w, float v, int lev)
      : person(n, a, len, w) {
    avg = v;
    level = lev;
  }
  void print() {
    person::print();
    cout << "Average: " << avg << endl;
    cout << "Level: " << level << endl;
  }
};

int main() {
  student s("ali", 20, 170, 75, 95, 2);
  s.print();
  return 0;
}