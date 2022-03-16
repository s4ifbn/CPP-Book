#include <iostream>
using namespace std;
class employee {
private:
  string name, address;
  int age, salary;

public:
  employee(string n, int a, int sal, string adr) {
    name = n;
    age = a;
    salary = sal;
    address = adr;
  }
  friend int sum(employee, employee, employee);
};
// friend function with multiple objects
int sum(employee e1, employee e2, employee e3) {
  int s = e1.salary + e2.salary + e3.salary;
  return s;
}

int main() {
  employee e1("Mustafa", 42, 1500, "Baghdad");
  employee e2("Ahmed", 39, 2500, "Mosul");
  employee e3("Muhannad", 40, 1200, "kut");
  cout << sum(e1, e2, e3);
  return 0;
}
