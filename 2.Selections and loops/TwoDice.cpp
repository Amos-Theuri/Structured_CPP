#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int iRoll1, iRoll2, iNoRolls;
    srand(time(0));

    do
    {
        /* code */
        iRoll1 = rand() % 6 + 1;
        iRoll2 = rand() % 6 + 1;
        iNoRolls++;
    } while (iRoll1 != iRoll2);
    cout <<"Roll 1: " << iRoll1 << " roll 2: " << iRoll2 << " equal after " << iNoRolls << " rolls" << endl;
}