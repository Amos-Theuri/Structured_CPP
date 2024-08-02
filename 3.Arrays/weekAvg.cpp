#include <iostream>
using namespace std;

int main()
{
	const int iNoDays = 7;
	double dAvg, dSum = 0;
	double dTempWeek[iNoDays+1];
	int i;

	//take input about the weeks temperature
	for (i =1; i<=iNoDays; i++)
	{
		cout << "Enter Temperature day "<< i<<": ";
		cin >> dTempWeek[i];
		dSum += dTempWeek[i];
	}
	dAvg = dSum / iNoDays;

	cout<<"Average week temp is "<<dAvg<<endl;

	//declare the days when the temp was above average
	cout <<"Days temp was above normal"<< endl;
	for (i =1; i<=iNoDays; i++)
	{
		if (dTempWeek[i] > dAvg)
			cout << "Day no: "<< i <<" Temp: "<< dTempWeek[i] << endl;
	}
}
