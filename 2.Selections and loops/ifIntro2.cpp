#include <iostream>
using namespace std;

int main()
{
    int a, b, diff;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a>b)
    {
        diff = a - b;
        cout << "a is greater than b" << endl;
        cout << "the difference is: " << diff << endl;
    }
    else if (b>a)
    {
        diff = b - a;
        cout << "b is greaterf than b" << endl;
        cout << "the difference is: " << diff << endl;
    }
    else
    {
        cout << "a and b aref equal" << endl;
    }
}