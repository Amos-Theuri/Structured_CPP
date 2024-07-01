#include <iostream>
using namespace std;

int main()
{
    int iLimit, iNo, sum=0;

    cout << "Enter the limit number: ";
    cin >> iLimit;

    while (iNo < iLimit)
    {
        iNo++;
        sum +=iNo;
        //cout << "sum is :"<< sum << endl;
    }
    cout << "sum is: " << sum << endl;
}