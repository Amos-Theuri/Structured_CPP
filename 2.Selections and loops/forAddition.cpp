#include <iostream>
using namespace std;

int main()
{
    int iNo, iLimit, iSum = 0;

    cout << "Enter the limit number: ";
    cin >> iLimit;

    for (iNo = 1; iNo <= iLimit; iNo++)
    {
        iSum += iNo;
        // cout << "sum is: " << iSum << endl;
        }
    cout << "The sum is: " << iSum << endl;
    
}