#include <iostream>
using namespace std;
class A {
public:
  void display() { cout << "this is a message" << endl; }
};

class B : virtual public A {};      // virtual inheritance

class C : virtual public A {};      // virtual inheritance

class D : public C, public B {};

int main() {

  D d;
  d.display();

  return 0;
}