#include <iostream>
using namespace std;
class Person {
private:
  string name;
  int age;

public:
  Person(string n, int a) {
    name = n;
    age = a;
  }
  void print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};
class Employee : public Person {
private:
  int salary;

public:
  Employee(string n, int a, int s) : Person(n, a) { salary = s; }
  void print() {
    Person::print();
    cout << "Salary: " << salary << endl;
  }
};
class Manager : public Employee {
private:
  string title;

public:
  Manager(string n, int a, int s, string t) : Employee(n, a, s) { title = t; }
  void print() {
    Employee::print();
    cout << "Title: " << title << endl;
  }
};
int main() {
  Manager M("Ali", 54, 7000, "HR Manager");
  M.print();

  Employee A("Ahmed", 43, 5000);
  A.print();

  Person S("Saif", 34);
  S.print();

  return 0;
}