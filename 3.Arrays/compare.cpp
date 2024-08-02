#include <iostream>
using namespace std;

int main()
{
	int ArrOne[] = {12, 15, 46, 88};
	int ArrTwo[] = {12, 15, 46, 88};
	int eq = 1;
	
	for (int i = 1; i <= 4; i++)
	{
		if(ArrOne[i] == ArrTwo[i])
			eq = 1;
		if (ArrOne[i] != ArrTwo[i])
		{
			eq = 0;
		}
	}
	if (eq == 1)
		cout << "Arrays are equal"<<endl;
	else
		cout << "Arrays are not equal" << endl;
}
