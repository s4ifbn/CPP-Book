#include <iostream>
using namespace std;
class Emp {
private:
  string name;
  int age, salary;
public:
  Emp(string n, int a, int s) {
    name = n;
    age = a;
    salary = s; }
  void print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl; }
};
class Manager : public Emp {
private:
  string title;
public:
  Manager(string n, int a, int s, string t) : Emp(n, a, s) {
    title = t; }
  void print() {
    Emp::print();
    cout << "Title: " << title << endl; }
};
class Scientist : public Emp {
private:
  string publication;
public:
  Scientist(string n, int a, int s, string p) : Emp(n, a, s) {
    publication = p; }
  void print() {
    Emp::print();
    cout << "Publication: " << publication << endl; }
};
class Worker : public Emp {
public:
  Worker(string n, int a, int s) : Emp(n, a, s) {}
  void print() {
    Emp::print(); }
};
int main() {
  Manager *M;
  M = new Manager("Ali", 54, 7000, "HR Manager");
  M->print();

  Scientist *S;
  S = new Scientist("Ahmed", 43, 5000, "AI Tech.");
  S->print();

  Worker *W;
  W = new Worker("Hasan", 22, 2000);
  W->print();

  delete M;
  delete S;
  delete W;
  
  return 0;
}