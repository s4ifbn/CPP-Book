#include <iostream>
using namespace std;
int main()
{
    int number, exponent;
    long result = 1;

    cout << "Give me a Number: ";
    cin >> number;

    cout << "Give me an Exponent: ";
    cin >> exponent;

    for (int i = exponent; i >= 1; --i)
    {
        result *= number;
    }

    cout << "The Result: " << result;
}