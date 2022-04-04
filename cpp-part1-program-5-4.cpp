#include <iostream>
using namespace std;
 
void fact(int number)
{ 					// calculating factorial using type 2 function
    long result = 1;
    for (int i = number; i > 1; --i)
    {
        result *= i;
    }
    cout << "The Factorial: " << result;
}
 
int main() {
    int number;
    cout << "Give me a Number: ";
    cin >> number;
    fact(number); 		 // calling type 2 function
    return 0;
}
