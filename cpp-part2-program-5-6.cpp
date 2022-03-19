#include<iostream>
using namespace std;
class A {
public:
  void test(){
  cout<<"this is a test from A class"<<endl;
}
};

class B : public A{
public:
  void test(){
  cout<<"this is a test from B class"<<endl;
}
};

int main(){
  
  A Obj1;
  Obj1.test();

  B Obj2;
  Obj2.test();

  Obj2.A::test();

  return 0; 
}