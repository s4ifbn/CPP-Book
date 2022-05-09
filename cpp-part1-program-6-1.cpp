#include <iostream>
using namespace std;
int main() {
  int a[5] = {10, 20, 30, 40, 50};
  cout << "Give me Five Numbers: ";
  for (int i = 0; i < 5; i++)
    cin >> a[i];

  cout << "Here is the array elements: " << endl;
  for (int i = 0; i < 5; i++)
    cout << a[i] << endl;
  return 0;
}
