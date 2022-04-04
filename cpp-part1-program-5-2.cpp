#include <iostream>
using namespace std;

long fact(int); // function prototype

int main()
{
    int number;
    cout << "Give me a Number: ";
    cin >> number;
    cout << "The Factorial: " << fact(number);
    return 0;
} // end of main function

long fact(int number)
{
    long result = 1;
    for (int i = number; i > 1; --i)
    {
        result *= i;
    }
    return result;
} // end of fact function