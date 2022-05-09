#include <iostream>
using namespace std;

int main() { // start of main function scope
  int var = 10;

  { // new internal scope
    int var = 50;
    cout << var << " from internal scope" << endl;
  } // end of internal scope

  cout << var << " from main function scope" << endl;

  return 0;
} // end of main function scope
