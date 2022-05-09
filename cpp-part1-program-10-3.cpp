#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream file;
  string filename = "test.txt";
  string input;

  file.open(filename);
  file >> input;
  file.close();

  cout << input;
  return 0;
}