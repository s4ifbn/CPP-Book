#include <iostream>
using namespace std;

int maximum(int n1, int n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

int main()
{
    int number1, number2;
    cout << "Enter Two Numbers: ";
    cin >> number1 >> number2;

    cout << maximum(number1, number2) << endl;

    return 0;
}