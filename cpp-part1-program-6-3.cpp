#include <iostream>
#define rows 3
#define cols 3
using namespace std;

void mainDiagonal(int a[rows][cols]) {
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
      if (i == j)
        cout << a[i][j] << " ";
}

void upperTriangle(int a[rows][cols]) {
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
      if (i < j)
        cout << a[i][j] << " ";
}

int main() {
  int a[rows][cols] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  mainDiagonal(a);
  cout << endl;
  upperTriangle(a);

  return 0;
}