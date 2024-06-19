#include <iostream>
using namespace std;

int main()
{
    int iNo;
    double price, tprice;

    cout << "Enter price per item: ";
    cin >> price;
    cout << "Enter number of items: ";
    cin >> iNo;
    tprice = iNo * price;
    cout << "Total price is " << tprice << endl;
}