#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int iOption;
	double dNo1, dNo2;

	cout << "Enter two numbers: " << endl;
	cin >> dNo1 >> dNo2;
	system("clear");

	cout << "1. Greatest " << endl;
	cout << "2. Least " << endl;
	cout << "3. Average " << endl;
	cout << "Pick one option: " << endl;
	cin >> iOption;

	switch (iOption)
	{
	case 1:
		if(dNo1>dNo2)
		{
			cout << dNo1;
		}
		else
		{
			cout << dNo2;
		}
		cout << " is the greatest." << endl;
		break;
	case 2:
		if (dNo1<dNo2)
		{
			cout << dNo1;
		}
		else{
			cout << dNo2;
		}
		cout << " is the least" << endl;
		break;
	case 3:
		cout << "Average is " << (dNo1 + dNo2) / 2 << endl;
		break;
	default:
		cout << "invalid oprion!!" << endl;
		break;
	}
}
