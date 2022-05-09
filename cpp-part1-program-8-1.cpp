#include <iostream>
using namespace std;

struct student {
  long id;
  string name;
  int age;
  string address;
  float mark1;
  float mark2;
  float mark3;
};

float avg(student s) { return (s.mark1 + s.mark2 + s.mark3) / 3.0; }

int main() {
  student sara;
  sara.id = 1003;
  sara.name = "Sara";
  sara.age = 22;
  sara.address = "Baghdad";

  cout << "Give me three marks: ";
  cin >> sara.mark1 >> sara.mark2 >> sara.mark3;

  cout << "The Average: " << avg(sara);

  return 0;
}