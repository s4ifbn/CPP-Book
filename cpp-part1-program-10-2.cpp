#include <iostream>
using namespace std;
int main() {
  FILE *myfile;
  char path[] = "test.txt"; // file should exist
  char ch;

  myfile = fopen(path, "r");

  while ((ch = getc(myfile)) != EOF) {
    cout << ch;
  };

  fclose(myfile);

  return 0;
}