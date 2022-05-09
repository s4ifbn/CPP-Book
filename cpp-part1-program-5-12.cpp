#include <iostream>
using namespace std;

void greet(string name, string msg = "Hello, Good morning") {
  cout << msg << " " << name <<endl;
}

int main() {
  string name;
  string msg = "Hi, Nice to meet you";

  cout << "What your name: ";
  cin >> name;
  greet(name, msg);
  greet(name);    // try this also

  return 0;
}