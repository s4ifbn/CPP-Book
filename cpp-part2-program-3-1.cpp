#include <iostream>
#define SIZE 20
using namespace std;
class student {
private:
  string Name;
  int ID, Age, grade1, grade2, grade3;

public:
  student() {
    cout << "Enter student ID: ";
    cin >> ID;
    cout << "Enter student Name: ";
    cin >> Name;
    cout << "Enter student Age: ";
    cin >> Age;
    cout << "Enter student Grade 1: ";
    cin >> grade1;
    cout << "Enter student Grade 2: ";
    cin >> grade2;
    cout << "Enter student Grade 3: ";
    cin >> grade3;
  }

  string getName() { return Name; }

  float average() { return (grade1 + grade2 + grade3) / 3.0; }
};
int main() {
  student s[SIZE]; // Array of 20 Objects

  for (int i = 0; i < SIZE; i++)
    cout << s[i].getName() << " Average " << s[i].average() << endl;

  return 0;
}