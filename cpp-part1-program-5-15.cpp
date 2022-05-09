#include <iostream>
using namespace std;

void print(int counter) {

  cout << counter << endl;

  if (counter == 1)
    return 0;
  else
    print(--counter); // recursion
}

int main() {
  print(10);
  return 0;
}