#include <iostream>
using namespace std;

int main()
{
    int number;
    long result = 1;

    cout << "Give me a Number: ";
    cin >> number;

    for (int i = number; i >= 1; --i)
    {
        result *= i;
    }

    cout << "The Result: " << result;
}