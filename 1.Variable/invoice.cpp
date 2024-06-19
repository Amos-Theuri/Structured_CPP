#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int iNoUnits, dTax;
    double dUnitPrice = 42.50,dPrice, dTotalPrice, dBtax, dTotaltax,dDiscount, dDiscprice;
    const double dDisc = 0.9;

    cout << "Enter number of items: ";
    cin >> iNoUnits;
    cout << "Enter tax percentage: ";
    cin >> dTax;
    dBtax = (double) dTax/100;
    dPrice = dUnitPrice * iNoUnits;
    dDiscprice = dPrice * dDisc;
    dDiscount = dPrice - dDiscprice;
    dTotaltax = dDiscprice * dBtax;
    dTotalPrice = dDiscprice + dTotaltax;

    cout << "INVOICE" << endl
         << "======="<<endl;
    cout << setprecision(2)<<setiosflags(ios::fixed)<<endl;
    cout << "Quantity:     " << iNoUnits << endl;
    cout << "Unit Price:    "<< dUnitPrice << endl;
    cout << "Price:    "  << dPrice << endl;
    cout << "Discounted price: " << dDiscprice << endl;
    cout << "Discount: " << dDiscount << endl;
    cout << "Tax:     " << dTotaltax << endl;
    cout << "Total:   " << dTotalPrice << endl;

}