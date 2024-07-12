#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double dNo;
    while (1==1)
    {
        cout << "Eneter a number: ";
        cin >> dNo;
        if (dNo <= 0)
            break;
        cout << "The square root is " << sqrt(dNo) << endl;
    }
    cout << "Enter a number that is larger than 0" << endl;
}