#include <iostream>
using namespace std;
class Shape
{
public:
    void area()
    {
        cout << "this is a shape area" << endl;
    }
};

class Square : public Shape
{
public:
    void area()
    {
        cout << "this is a square area" << endl;
    }
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "this is a circle area" << endl;
    }
};

int main()
{

    Square S;
    Circle C;

    Shape *Sh1 = &S;
    Sh1->area();

    Shape *Sh2 = &C;
    Sh2->area();

    return 0;
}