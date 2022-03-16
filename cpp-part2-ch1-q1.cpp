#include <iostream>
using namespace std;

class calc {
private:
  int *n1, *n2;

public:
  calc() {
    n1 = new int;
    n2 = new int;
    cout << "Enter the first number: ";
    cin >> *n1;
    cout << "Enter the second number: ";
    cin >> *n2;
  }

  ~calc() {
    delete n1;
    delete n2;
    cout << "data members are deleted";
  }

  int sum() { return *n1 + *n2; }

  int sub() { return *n1 - *n2; }

  int mult() { return *n1 * *n2; }

  float div() { return *n1 / *n2; }

  float mod() { return *n1 % *n2; }
};
int main() {
  calc c;
  cout << "their summation is: " << c.sum() << endl;
  cout << "their subtraction is: " << c.sub() << endl;
  cout << "their multiplication is: " << c.mult() << endl;
  cout << "their division is: " << c.div() << endl;
  cout << "their remainder is: " << c.mod() << endl;
  return 0;
}