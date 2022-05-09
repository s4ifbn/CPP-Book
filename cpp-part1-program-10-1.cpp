#include <iostream>
using namespace std;

int main()
{

    FILE *myfile;
    char path[] = "test.txt";
    char ch;

    myfile = fopen(path, "w");

    do
    {
        cin.get(ch);
        if (ch != 'x')
            putc(ch, myfile);
    } while (ch != 'x');

    fclose(myfile);

    return 0;
}