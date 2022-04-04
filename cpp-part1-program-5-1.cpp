#include <iostream>
using namespace std;

long fact(int number)
{
    long result = 1;
    for (int i = number; i > 1; --i)
    {
        result *= i;
    }
    return result;
} // end of fact function

int main()
{
    int number;
    long result;

    cout << "Give me a Number: ";
    cin >> number;

    result = fact(number);
    cout << "The Factorial: " << result;

    return 0;
} // end of main function