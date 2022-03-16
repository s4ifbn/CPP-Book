#include <iostream>
using namespace std;
class student {
private:
  string name;
  int ID, age, level;

public:
  student() {
    cout << "Enter student ID: ";
    cin >> ID;
    cout << "Enter student Name: ";
    cin >> name;
    cout << "Enter student Age: ";
    cin >> age;
    cout << "Enter student Level: ";
    cin >> level;
  }
  void print() {
    cout << "Student Name " << name << endl;
    cout << "Student ID: " << ID << endl;
    cout << "Student Age: " << age << endl;
    cout << "Student Level: " << level << endl;
  }
  void operator++() {
    ++age;
    ++level;
  }
};
int main() {
  student s;
  ++s;
  s.print();
  return 0;
}