#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int iNoUnits;
    double dUnitPrice = 42.50,dPrice, dTotalPrice, dTotaltax;
    const double dTax = 0.25;

    cout << "Enter number of items: ";
    cin >> iNoUnits;
    dPrice = dUnitPrice * iNoUnits;
    dTotaltax = dPrice * dTax;
    dTotalPrice = dPrice + dTotaltax;

    cout << "INVOICE" << endl
         << "======="<<endl;
    cout << setprecision(2)<<setiosflags(ios::fixed)<<endl;
    cout << "Quantity:     " << iNoUnits << endl;
    cout << "Unit Price:    "<< dUnitPrice << endl;
    cout << "Price:    "  << dPrice << endl;
    cout << "Tax:     " << dTotaltax << endl;
    cout << "Total:   " << dTotalPrice << endl;
}