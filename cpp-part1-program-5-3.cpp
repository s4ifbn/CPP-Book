#include <iostream>
using namespace std;

void fact(void)
{ // calculating factorial using type 1 function
    int number;
    long result = 1;
    cout << "Give me a Number: ";
    cin >> number;
    for (int i = number; i > 1; --i)
    {
        result *= i;
    }
    cout << "The Factorial: " << result;
}

int main()
{
    fact();
    return 0;
}