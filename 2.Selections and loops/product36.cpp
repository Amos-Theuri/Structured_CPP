#include <iostream>
using namespace std;

int main()
{
    int i, j;

    cout << "Intergers who's product is 36";

    for (i = 1; i <= 36; i++)
    {
        for (j = 1; j <= 36; j++)
        {
            if (i * j == 36)
                cout << i << " and " << j << endl;
        }
    }
}