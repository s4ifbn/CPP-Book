#include <iostream>
#define size 5
using namespace std;

void read(int a[size]) {
  cout << "Give me Five Numbers: ";
  for (int i = 0; i < size; i++)
    cin >> a[i];
}

void print(int a[size]) {
  cout << "Here is the array elements: " << endl;
  for (int i = 0; i < size; i++)
    cout << a[i] << endl;
}

int main() {
  int a[size] = {10, 20, 30, 40, 50};
  read(a);
  print(a);

  return 0;
}
