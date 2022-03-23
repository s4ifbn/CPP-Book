#include <iostream>
using namespace std;
int main()
{
    int rows = 4;
    int columns = 5;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= columns; ++j)
        {
            cout << "*" << " ";
        }                           // end of columns loop

        cout << endl;
    }                               // end of rows loop
}