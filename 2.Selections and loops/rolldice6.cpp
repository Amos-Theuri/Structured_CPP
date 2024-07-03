#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int iNoRolls, iRoll;
    srand(time(0));

    while (iRoll != 6)
    {
        iRoll = rand() % 6 + 1;
        iNoRolls++;
    }
    cout << iRoll << " after " << iNoRolls << " rolls" << endl;
}