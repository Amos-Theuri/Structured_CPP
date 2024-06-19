#include <iostream>
using namespace std;

int main()
{
    int iNoSec, iNoMin, iNoHours, iNoSecleft, iNominleft;

    cout << "Enter the number of seconds: ";
    cin >> iNoSec;

    iNoMin = iNoSec / 60;
    iNoSecleft = iNoSec % 60;
    iNominleft = iNoMin % 60;
    iNoHours = iNoMin / 60;

    cout << iNoSec << " is equal to: " << endl
         << iNoHours << "hrs " << iNominleft << "min " << iNoSecleft << "sec" << endl;
}