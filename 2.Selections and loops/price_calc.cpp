#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int iNoi;
    double dPPU, dDisc, dGross, dNet;

    cout << "Enter the number of items purchased: ";
    cin >> iNoi;
    cout << "Enter price pere unit of item: ";
    cin >> dPPU;

    cout << setprecision(2) << setiosflags(ios::fixed);
    dGross = iNoi * dPPU;
    dDisc = dGross * 0.1;
    //cout << dDisc << endl;

    if(dGross >= 500)
    {
        dNet = dGross- dDisc;
        cout << "Total: " << dGross << endl;
        cout << "Final Price: " << dNet << endl;
        cout << "Discount: " << dDisc << endl;
    }
    else
    {
        cout << "Total: " << dGross << endl;
        cout << "No Discount" << endl;
    }
}