#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int iNo;
    for (iNo = 1; iNo <= 10; iNo++)
    {
        cout << iNo << " " << iNo * iNo /*<< system("clear")*/ << endl;
    }
}