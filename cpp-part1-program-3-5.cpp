#include <iostream>
using namespace std;
int main() { // multiple if-else statements
  char grade;
  cout << "What's your grade? ";
  cin >> grade;
  if (grade == 'A')
    cout << "Excellent";
  else if (grade == 'B')
    cout << "Very Good";
  else if (grade == 'C')
    cout << "Good";
  else if (grade == 'D')
    cout << "Medium";
  else if (grade == 'E')
    cout << "Accepted";
  else if (grade == 'F')
    cout << "Work Harder";
  else
    cout << "Enter A, B, C, D, E or F";
}