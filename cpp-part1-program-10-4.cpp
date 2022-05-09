#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream file;
  string filename = "out.txt";
  string data = "this is a test";

  file.open(filename);
  file << data;
  file.close();

  return 0;
}