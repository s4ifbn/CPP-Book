#include <iostream>
using namespace std;
class person {
private:
  string name;
  int age, length, weight;
public:
  person() {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Weight: ";
    cin >> weight;
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
  student() {
    cout << "Enter Average: ";
    cin >> avg;
    cout << "Enter Level: ";
    cin >> level;
  }
  void print() {
    person::print();
    cout << "Average: " << avg << endl;
    cout << "Level: " << level << endl;
  }
};
int main() {
  student s;
  s.print();
  return 0;
}