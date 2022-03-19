#include <iostream>
using namespace std;
template <class S>
class stack
{
    S item[100];
    int top;

public:
    stack()
    {
        top = -1;
    }

    void push(S value)
    {
        item[++top] = value;
    }

    S pop()
    {
        return (item[top--]);
    }
};

int main()
{
    stack<int> s1;

    s1.push(10);
    cout << s1.pop() << endl;

    stack<char> s2;
    s2.push('A');
    cout << s2.pop() << endl;

    stack<string> s3;
    s3.push("Saif");
    cout << s3.pop() << endl;
}