#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double dtempF, dtempC;

    cout << "Enter temperature in celsius: ";
    cin >> dtempC;

    dtempF = 1.8 * dtempC + 32;
    cout << setprecision(2) << setiosflags(ios::fixed) << endl;
    cout << "Your temperature in Fahrenheit is :  " << dtempF << endl;
}