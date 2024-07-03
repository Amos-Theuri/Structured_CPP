#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int iRoll, iNoRolls = 0;
    srand(time(0));

    do
    {
        /* code */
        iRoll = rand() % 6 + 1;
        iNoRolls++;
    } while (iRoll != 6);

    cout << iRoll << " after " << iNoRolls << endl;
}