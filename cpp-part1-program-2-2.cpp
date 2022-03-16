#include <iostream> // Checking sizes
using namespace std;
int main() {
  // WOW this is a long statement
  cout << "int " << sizeof(int) << " Bytes" << endl
       << "float " << sizeof(float) << " Bytes" << endl
       << "double " << sizeof(double) << " Bytes" << endl
       << "char " << sizeof(char) << " Byte" << endl
       << "long double " << sizeof(long double) << " Bytes" << endl
       << "bool " << sizeof(bool) << " Byte" << endl
       << "long long " << sizeof(long long) << " Bytes" << endl
       << "short " << sizeof(short) << " Bytes";
}
