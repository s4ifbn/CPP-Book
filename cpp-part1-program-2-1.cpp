#include <iostream>                  // line 1
using namespace std;                 // line 2
int main() {                         // line 3
  int A, B, C;                       // line 4
  A = 133;                           // line 5
  B = A + 44;                        // line 6
  cout << "Enter a value for C: ";   // line 7
  cin >> C;                          // line 8
  cout << "You have three values: "; // line 9
  cout << endl                       // line 10
       << "A = " << A << endl        // line 11
       << "B = " << B << endl        // line 12
       << "C = " << C;               // line 13
}