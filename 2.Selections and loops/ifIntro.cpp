#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter the  first number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;

    if (a > b)
        cout << "a is greater than b" << endl;
    else if (b > a)
        cout << "b is greater than a" << endl;
    else
        cout << "a and b are equal" << endl;
}
