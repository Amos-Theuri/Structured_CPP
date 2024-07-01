#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int iUnits;
	double dPrice, dPPU, dDisc, dTotal;

	cout <<"Enter number of units: ";
	cin >> iUnits;
	cout <<"Enter price per unit: ";
	cin >>dPPU;
	dPrice = iUnits * dPPU;

	cout << setprecision(2) << setiosflags(ios::fixed);
	if (iUnits > 100)
	{
		dDisc = dPrice * 0.2;
		dTotal = dPrice - dDisc;
		cout <<"Total: "<< dPrice << endl;
		cout <<"Discount: "<< dDisc << endl;
		cout << "Final Total: "<< dTotal << endl;
	}
	else if (iUnits >= 50 && iUnits <=100)
	{
		dDisc = dPrice * 0.1;
		dTotal = dPrice - dDisc;
		cout <<"Total: "<< dPrice << endl;
		cout <<"Discount: "<< dDisc << endl;
		cout <<"Final Total: "<< dTotal << endl;
	}
	else
	{
		cout <<"You get no discount!!"<<endl;
		cout <<"Final Total: "<< dPrice << endl;
	}
}
