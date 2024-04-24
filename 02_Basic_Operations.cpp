#include <iostream>
using namespace std;

int main()
{
    int a, b;

    a = 10;
    b = 5;
    // Arithmetic Operations in cpp
    cout << "a+b = " << a + b << endl;
    cout << "a-b = " << a - b << endl;
    cout << "a*b = " << a * b << endl;
    cout << "a/b = " << a / b << endl;
    cout << "a%b = " << a % b << endl;

    // Relational Operations in cpp
    bool x;
    cout << " there is 0=False/1=True and a=10, b=5" << endl
         << endl;
    x = (a == b);
    cout << "a==b = " << x << endl;
    x = (a != b);
    cout << "a!=b = " << x << endl;
    x = (a > b);
    cout << "a>b = " << x << endl;
    x = (a < b);
    cout << "a<b = " << x << endl;
    x = (a >= b);
    cout << "a>=b = " << x << endl;
    x = (a <= b);
    cout << "a<=b = " << x << endl;

    // Logical Operators in cpp
    x = (a >= b) && (a > b); // AND
    cout << "(a>=b) && (a<=b) = " << x << endl;

    x = (a >= b) || (a <= b); // OR
    cout << "(a>=b) || (a<=b) = " << x << endl;

    x = !(a <= b); // NOT
    cout << "!(a<=b) = " << x << endl;

    return 0;
}