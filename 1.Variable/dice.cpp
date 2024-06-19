#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int iRoll1, iRoll2, iRoll3;
    double dAvg;
    const int iNoRolls = 3;

    //start random generator
    srand(time(0));
    //Rolls
    iRoll1 = rand() % 6 + 1;
    iRoll2 = rand() % 6 + 1;
    iRoll3 = rand() % 6 + 1;
    //Calculate average
    dAvg = (double) (iRoll1 + iRoll2 + iRoll3) / iNoRolls;

    cout << setprecision(2) << setiosflags(ios::fixed);
    cout << "average roll is " << dAvg << endl;
}